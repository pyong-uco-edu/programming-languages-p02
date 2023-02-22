%{
//-------------------------------------------------------------
// Team Identification Block
// Author 1:	            Lisa Sun
// Student ID:	            *20300925
// E-Mail:		            lsun1@uco.edu
// Student 1 CRN:           22142, Spring 2023
// Author 2:	            Philip Yong
// Student ID:	            *20512220
// E-Mail:		            pyong@uco.edu
// Student 2 CRN:	        21502, Spring 2023
// Course:		            CMSC 4023 - Programming Languages
// Project:	 	            p02
// Due:		 	            Febuary 27, 2023
// Project Account Number:	tt048
//--------------------------------------------------------------
//--------------------------------------------------------------------
// File p02lex.l defines a prototype scanner for the Micro language.
// The scanner definition is a lex specification.
//-------------------------------------------------------------------
// Author: Thomas R. Turner
// E-Mail: trturner@uco.edu
// Date: January, 2015
//--------------------------------------------------------------------
//Copyright January, 2015 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// Standard C and C++ Library Include Files
//--------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>
using namespace std;
//--------------------------------------------------------------------
// Application Includes
//--------------------------------------------------------------------
#include "p02lex.h"
#include "p02tkn.h"
//--------------------------------------------------------------------
//Externals
//--------------------------------------------------------------------
extern ofstream tfs; //Trace file stream tfs
//--------------------------------------------------------------------
//Global Variables
//--------------------------------------------------------------------
static map<string,int> RW; //RW - Reserve Words
 //RW is a table of reserve words
 //and their corresponding
 //token codes.
static map<int,string> TokenName;
int line=1; //Current line number
int col=1; //Current column number
int commentLength = 0;

string tokens[] = {
    "AND", "ARRAY", "BEGAN", "DIV", "DO", "DOWNTO", "ELSE", "END", "FOR",
    "FUNCTION", "IF", "MOD", "NOT", "OF", "OR", "PROCEDURE", "PROGRAM",
    "REPEAT", "THEN", "TO", "UNTIL", "VAR", "WHILE", "EQU", "NEQ", "LES", 
    "LEQ", "GRT", "GEQ", "PLUS", "MINUS", "STAR", "SLASH", "ASSIGN", 
    "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "COLON", "SEMICOLON", 
    "COMMA", "PERIOD", "RANGE", "ID", "INTLIT", "CHRLIT", "REALIT", 
    "APOSTROPHE", "QUOTE", "ASPERAND", "EPSILON", "READ", "WRITE",
    "ERROR"};

//--------------------------------------------------------------------
//Functions
//--------------------------------------------------------------------
int TokenMgr(int t); //Token post processing
int ReserveWord(char* s); //Determines if string s is
 //a reserve word
void TokenTrace(int t); //Records token t in the trace file
void PopulateRWMap(void); //Create the table of reserve
 //words and their token codes.
void PopulateTokenNameMap(void); //Create a table of names for tokens
 //to be printed in the TokenTrace
void ToLower(char* d,char* s); //Coerce the characters of string s
 //to lower case. Put the result
 //in string d.
//--------------------------------------------------------------------
//Exceptions
//--------------------------------------------------------------------
//An UnterminatedCommentException is thrown when an unterminated
//comment appears in the source file.
//--------------------------------------------------------------------
struct UnterminatedCommentException {
 UnterminatedCommentException()
 { tfs << endl;
 tfs << "An unterminated comment begins on line " << line
 << " and column " << col;
 tfs << endl;
 }
};
//--------------------------------------------------------------------
//A BacCharacterException is thrown when a character outside the
//defined set of characters for the Micro language appears in the
//source.
//--------------------------------------------------------------------
struct BadCharacterException{
    BadCharacterException(char p,int l,int c)
    {
        cout << endl;
        cout << "line(" << l << ") col (" << c << ")" ;
        cout << "Lexical error: ";
        cout << "Illegal character |" << p << "| ASCII code=" << (int)p;
        cout << endl;
    }
};
%}
%%
[{] {throw UnterminatedCommentException();}
[{][^}]*[}] { for (int a=0;a<yyleng;a++) {
 col++;
 if (yytext[a]=='\n')
 { col=1;
 line++;
 }

 }
 }
[\n|\r] {line++; col=1;}
[ \t]+ {col+=yyleng;}
[_a-zA-Z][_a-zA-Z0-9]* return TokenMgr(ID);
[{][^}]*[]}]    { commentLength = ((string)yytext).length();col = col + commentLength;}
[0-9]+ return TokenMgr(INTLIT);
['][.]+['] return TokenMgr(CHRLIT);
[0-9]+[\.[0-9]+]?[E[+-]?[0-9]+]? return TokenMgr(REALIT);
":=" return TokenMgr(ASSIGN);
";" return TokenMgr(SEMICOLON);
"," return TokenMgr(COMMA);
"(" return TokenMgr(LPAREN);
")" return TokenMgr(RPAREN);
"+" return TokenMgr(PLUS);
"-" return TokenMgr(MINUS);
"=" return TokenMgr(EQU);
"<>" return TokenMgr(NEQ);
"<" return TokenMgr(LES);
"<=" return TokenMgr(LEQ);
">" return TokenMgr(GRT);
">=" return TokenMgr(GEQ);
"*" return TokenMgr(STAR);
"/" return TokenMgr(SLASH);
"[" return TokenMgr(LBRACKET);
"]" return TokenMgr(RBRACKET);
":" return TokenMgr(COLON);
"." return TokenMgr(PERIOD);
".." return TokenMgr(RANGE);
"\'" return TokenMgr(APOSTROPHE);
"\"" return TokenMgr(QUOTE);
"@" return  TokenMgr(ASPERAND);
"" return TokenMgr(EPSILON);
. {throw BadCharacterException
 (*yytext
,line
,col
);
 }
%%
//--------------------------------------------------------------------
//Class Lexer implementation
//--------------------------------------------------------------------
//Function ReserveWord determines if the input string is a reserve
//word and if it is the function returns the corresponding tokencode.
//Otherwise it return the tokencode ID.
//--------------------------------------------------------------------
int ReserveWord(char* s)
{
 int t=RW[(string)s];
 if (t>0) return t; else return ID;
}
//--------------------------------------------------------------------
//Function ToLower coerces the characters of string s to lower case
//and stores the result in string d.
//--------------------------------------------------------------------
void ToLower(char* d,char* s)
{ strcpy(d,s);
 for (int a=0;a<strlen(d);a++) d[a]=tolower(d[a]);
}
//--------------------------------------------------------------------
//Function TokenMgr processes the token after it has been recognized
//--------------------------------------------------------------------
int TokenMgr(int t)
{ col+=yyleng; //Add the length of the current
 //Token to the column position
 if (t==ID)
 { char* s=new char[yyleng]; //Create storage for a lower case
 //version of the token
 ToLower(s,yytext); //Coerce the token to lower case
 yylval.token= new string(s); //yylval is the yacc variable
 //associated with the %union
 //directive. Member token was
 //declared to have the semantic
 //value for tokens.
 t=ReserveWord(s); //Determie if the ID is a reserve word
 }
 TokenTrace(t); //Record the current token in the trace file
 return t;
}
//--------------------------------------------------------------------
//-----------------------------------------------------------------------
//Function TokenTrace records the attributes of the input token t
//in the trace file.
//-----------------------------------------------------------------------
void TokenTrace(int tkn)
{
 tfs << endl;
 tfs << "Token:";
 tfs << "Code=" << setw(3) << tkn << " ";
 tfs << "Name=" << setw(10) << TokenName[tkn] << " ";
 tfs << "line=" << setw(4) << line << " ";
 tfs << "col=" << setw(4) << col-yyleng << " ";
 tfs << "Spelling=\"" << yytext << "\"";
}
//--------------------------------------------------------------------
//Function PopulateRWMap assigns values to the map, RW, such that each
//reserve word is given its associated tokencode.
//--------------------------------------------------------------------
void PopulateRWMap(void)
{   RW["begin"]=BEGAN;
    RW["end" ]=END;
    RW["read" ]=READ;
    RW["write"]=WRITE;
    RW["and"] = AND;
    RW["array"] = ARRAY;
    RW["begin"] = BEGAN;
    RW["div"] = DIV;
    RW["do"] = DO;
    RW["downto"] = DOWNTO;
    RW["else"] = ELSE;
    RW["end"] = END;
    RW["for"] = FOR;
    RW["function"] = FUNCTION;
    RW["if"] = IF;
    RW["mod"] = MOD;
    RW["of"] = OF;
    RW["or"] = OR;
    RW["procedure"] = PROCEDURE;
    RW["program"] = PROGRAM;
    RW["repeat"] = REPEAT;
    RW["then"] = THEN;
    RW["to"] = TO;
    RW["until"] = UNTIL;
    RW["var"] = VAR;
    RW["while"] = WHILE;
}
void PopulateTokenNameMap(void)
{ 
// TokenName[BEGAN ]="BEGAN";
//  TokenName[END ]="END";
//  TokenName[READ ]="READ";
//  TokenName[WRITE ]="WRITE";
//  TokenName[INTLIT ]="INTLIT";
//  TokenName[ID ]="ID";
//  TokenName[ASSIGN ]="ASSIGN";
//  TokenName[SEMICOLON ]="SEMICOLON";
//  TokenName[COMMA ]="COMMA";
//  TokenName[LPAREN ]="LPAREN";
//  TokenName[RPAREN ]="RPAREN";
//  TokenName[PLUS ]="PLUS";
//  TokenName[MINUS ]="MINUS";
//  TokenName[ERROR ]="ERROR";
      TokenName[AND ]= "AND";
      TokenName[ARRAY ]= "ARRAY";
      TokenName[BEGAN ]= "BEGAN";
      TokenName[DIV ]= "DIV";
      TokenName[DO ]= "DO";
      TokenName[DOWNTO ]= "DOWNTO";
      TokenName[ELSE ]= "ELSE";
      TokenName[END ]= "END";
      TokenName[FOR ]= "FOR";
      TokenName[FUNCTION ]= "FUNCTION";
      TokenName[IF ]= "IF";
      TokenName[MOD ]= "MOD";
      TokenName[NOT ]= "NOT";
      TokenName[OF ]= "OF";
      TokenName[OR ]= "OR";
      TokenName[PROCEDURE ]= "PROCEDURE";
      TokenName[PROGRAM ]= "PROGRAM";
      TokenName[REPEAT ]= "REPEAT";
      TokenName[THEN ]= "THEN";
      TokenName[TO ]= "TO";
      TokenName[UNTIL ]= "UNTIL";
      TokenName[VAR ]= "VAR";
      TokenName[WHILE ]= "WHILE";
      TokenName[EQU ]= "EQU";
      TokenName[NEQ ]= "NEQ";
      TokenName[LES ]= "LES";
      TokenName[LEQ ]= "LEQ";
      TokenName[GRT ]= "GRT";
      TokenName[GEQ ]= "GEQ";
      TokenName[PLUS ]= "PLUS";
      TokenName[MINUS ]= "MINUS";
      TokenName[STAR ]= "STAR";
      TokenName[SLASH ]= "SLASH";
      TokenName[ASSIGN ]= "ASSIGN";
      TokenName[LPAREN ]= "LPAREN";
      TokenName[RPAREN ]= "RPAREN";
      TokenName[LBRACKET ]= "LBRACKET";
      TokenName[RBRACKET ]= "RBRACKET";
      TokenName[COLON ]= "COLON";
      TokenName[SEMICOLON ]= "SEMICOLON";
      TokenName[COMMA ]= "COMMA";
      TokenName[PERIOD ]= "PERIOD";
      TokenName[RANGE ]= "RANGE";
      TokenName[ID ]= "ID";
      TokenName[INTLIT ]= "INTLIT";
      TokenName[CHRLIT ]= "CHRLIT";
      TokenName[REALIT ]= "REALIT";
      TokenName[APOSTROPHE ]= "APOSTROPHE";
      TokenName[QUOTE ]= "QUOTE";
      TokenName[ASPERAND ]= "ASPERAND";
      TokenName[EPSILON ]= "EPSILON";
      TokenName[READ ]= "READ";
      TokenName[WRITE]= "WRITE";
      TokenName[ERROR ]= "ERROR";
}
//--------------------------------------------------------------------
//Constructor Lexer is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i)
{ yyin=i;
 PopulateRWMap();
 PopulateTokenNameMap();
}
//-----------------------End of Lex Definition------------------------