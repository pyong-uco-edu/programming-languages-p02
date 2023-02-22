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
//---------------------------------------------------------------------
//File p02par.y contains a specification for Micro
//defined by Thomas R. Turner.
//---------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@uco.edu
//Date: January, 2015
//---------------------------------------------------------------------
//Copyright January, 2015 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//---------------------------------------------------------------------
//C++ inlcude files
//---------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
//Application inlcude files
//---------------------------------------------------------------------
#include "p02lex.h"
#include "p02par.h"
//---------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------
void yyerror(const char* m);
//---------------------------------------------------------------------
//Externals
//---------------------------------------------------------------------
extern char* yytext;
extern ofstream tfs;
extern int line;
extern int col;
%}
%union {
 string* token;
}
%token <token> AND
%token <token> ARRAY
%token <token> BEGAN
%token <token> DIV
%token <token> DO
%token <token> DOWNTO
%token <token> ELSE
%token <token> END
%token <token> FOR
%token <token> FUNCTION
%token <token> IF
%token <token> MOD
%token <token> NOT
%token <token> OF
%token <token> OR
%token <token> PROCEDURE
%token <token> PROGRAM
%token <token> REPEAT
%token <token> THEN
%token <token> TO
%token <token> UNTIL
%token <token> VAR
%token <token> WHILE
%token <token> EQU
%token <token> NEQ
%token <token> LES
%token <token> LEQ
%token <token> GRT
%token <token> GEQ
%token <token> PLUS
%token <token> MINUS
%token <token> STAR
%token <token> SLASH
%token <token> ASSIGN
%token <token> LPAREN
%token <token> RPAREN
%token <token> LBRACKET
%token <token> RBRACKET
%token <token> COLON
%token <token> SEMICOLON
%token <token> COMMA
%token <token> PERIOD
%token <token> RANGE
%token <token> ID
%token <token> INTLIT
%token <token> CHRLIT
%token <token> REALIT
%token <token> APOSTROPHE
%token <token> QUOTE
%token <token> ASPERAND
%token <token> EPSILON
%token <token> READ
%token <token> WRITE
%token <token> ERROR
%%
program:
    program_head program_declarations program_body
    {tfs << endl << "#001 program -> program-head program-declarations program-body";}
program_head:
    PROGRAM ID program_parameters SEMICOLON
    {tfs << endl << "#002 program-head -> program ID program-parameters ;";}
program_declarations:
    declarations subprogram_declarations
    {tfs << endl << "#003 program-declarations -> declarations subprogram-declarations";}
program_body:
    compound_statement PERIOD
    {tfs << endl << "#004 program-body -> compound-statement .";}
program_parameters:

    {tfs << endl << "#005 program-parameters -> empty";}
program_parameters:
    LPAREN program_parameter_list RPAREN
    {tfs << endl << "#006 program-parameters -> ( program-parameter-list )";}
program_parameter_list:
    identifier_list
    {tfs << endl << "#007 program-parameter-list -> identifier-list";}
identifier_list:
    ID
    {tfs << endl << "#008 identifier-list -> ID";}
identifier_list:
    identifier_list COMMA ID
    {tfs << endl << "#009 identifier-list -> identifier-list , ID";}
declarations:

    {tfs << endl << "#010 declarations -> empty";}
declarations:
    declarations VAR identifier_list COLON type SEMICOLON
    {tfs << endl << "#011 declarations -> declarations var identifier-list : type ;";}
type:
    standard_type
    {tfs << endl << "#012 type -> standard-type";}
type:
    ARRAY LBRACKET INTLIT RANGE INTLIT RBRACKET OF standard_type
    {tfs << endl << "#013 type -> array [ intlit .. intlit ] of standard-type";}
standard_type:
    ID
    {tfs << endl << "#014 standard-type -> ID";}
subprogram_declarations:
    
    {tfs << endl << "#015 subprogram-declarations -> empty";}
subprogram_declarations:
    subprogram_declarations subprogram_declaration SEMICOLON
    {tfs << endl << "#016 subprogram-declarations -> subprogram-declarations subprogram-declaration ;";}
subprogram_declaration:
    subprogram_head declarations compound_statement
    {tfs << endl << "#017 subprogram-declaration -> subprogram-head declarations compound-statement";}
subprogram_head:
    FUNCTION ID subprogram_parameters COLON standard_type SEMICOLON
    {tfs << endl << "#018 subprogram-head -> function ID subprogram-parameters : standard-type ;";}
subprogram_head:
    PROCEDURE ID subprogram_parameters SEMICOLON
    {tfs << endl << "#019 subprogram-head -> procedure ID subprogram-parameters;";}
subprogram_parameters:
    
    {tfs << endl << "#020 subprogram-parameters -> empty";}
subprogram_parameters:
    LPAREN parameter_list RPAREN
    {tfs << endl << "#021 subprogram-parameters -> ( parameter-list )";}
parameter_list:
    identifier_list COLON type
    {tfs << endl << "#022 parameter-list -> identifier-list : type";}
parameter_list:
    parameter_list SEMICOLON identifier_list COLON type
    {tfs << endl << "#023 parameter-list -> parameter-list ; identifier-list : type";}
compound_statement:
    BEGAN optional_statements END
    {tfs << endl << "#024 compound-statement -> begin optional-statements end";}
optional_statements:
    
    {tfs << endl << "#025 optional-statements -> empty";}
optional_statements:
    statement_list
    {tfs << endl << "#026 optional-statements -> statement-list";}
statement_list:
    statement
    {tfs << endl << "#027 statement-list -> statement";}
statement_list:
    statement_list SEMICOLON statement
    {tfs << endl << "#028 statement-list -> statement-list ; statement";}
statement:
    variable ASSIGN expression
    {tfs << endl << "#029 statement -> variable := expression";}
statement:
    procedure_statement
    {tfs << endl << "#030 statement -> procedure-statement";}
statement:
    alternative_statement
    {tfs << endl << "#031 statement -> alternative-statement";}
statement:
    iterative_statement
    {tfs << endl << "#032 statement -> iterative-statement";}
statement:
    compound_statement
    {tfs << endl << "#033 statement -> compound-statement";}
alternative_statement:
    if_statement
    {tfs << endl << "#034 alternative-statement -> if-statement";}
iterative_statement:
    while_statement
    {tfs << endl << "#035 iterative-statement -> while-statement";}
iterative_statement:
    repeat_statement
    {tfs << endl << "#036 iterative-statement -> repeat-statement";}
iterative_statement:
    for_statement
    {tfs << endl << "#037 iterative-statement -> for-statement";}
if_statement:
    IF expression THEN statement ELSE statement
    {tfs << endl << "#038 if-statement -> if expression then statement else statement";}
while_statement:
    WHILE expression DO statement
    {tfs << endl << "#039 while-statement -> while expression do statement";}
repeat_statement:
    REPEAT statement_list UNTIL expression
    {tfs << endl << "#040 repeat-statement -> repeat statement_list until expression";}
for_statement:
    FOR variable ASSIGN expression TO expression DO statement
    {tfs << endl << "#041 for-statement -> for variable := expression to expression do statement";}
for_statement:
    FOR variable ASSIGN expression DOWNTO expression
    {tfs << endl << "#042 for-statement -> for variable := expression downto expression do statement";}
variable:
    ID
    {tfs << endl << "#043 variable -> ID";}
variable:
    ID LBRACKET expression RBRACKET
    {tfs << endl << "#044 variable -> ID [ expression ]";}
procedure_statement:
    ID
    {tfs << endl << "#045 procedure-statement -> ID";}
procedure_statement:
    ID LPAREN expression_list RPAREN
    {tfs << endl << "#046 procedure-statement -> ID ( expression-list )";}
expression_list:
    expression
    {tfs << endl << "#047 expression-list -> expression";}
expression_list:
    expression_list COMMA expression
    {tfs << endl << "#048 expression-list -> expression-list , expression";}
expression:
    simple_expression
    {tfs << endl << "#049 expression -> simple-expression";}
expression:
    simple_expression relop simple_expression
    {tfs << endl << "#050 expression -> simple-expression relop simple-expression";}
relop:
    EQU
    {tfs << endl << "#051 relop -> =";}
relop:
    NEQ
    {tfs << endl << "#052 relop -> <>";}
relop:
    LES
    {tfs << endl << "#053 relop -> <";}
relop:
    LEQ
    {tfs << endl << "#054 relop -> <=";}
relop:
    GRT
    {tfs << endl << "#055 relop -> >";}
relop:
    GEQ
    {tfs << endl << "#056 relop -> >=";}
simple_expression:
    term
    {tfs << endl << "#057 simple-expression -> term";}
simple_expression:
    sign term
    {tfs << endl << "#058 simple-expression -> sign term";}
sign:
    PLUS
    {tfs << endl << "#059 sign -> +";}
sign:
    MINUS
    {tfs << endl << "#060 sign -> -";}
simple_expression:
    simple_expression addop term
    {tfs << endl << "#061 simple-expression -> simple-expression addop term";}
addop:
    PLUS
    {tfs << endl << "#062 addop -> +";}
addop:
    MINUS
    {tfs << endl << "#063 addop -> -";}
addop:
    OR
    {tfs << endl << "#064 addop -> or";}
term:
    factor
    {tfs << endl << "#065 term -> factor";}
term:
    term mulop factor
    {tfs << endl << "#066 term -> term mulop factor";}
mulop:
    STAR
    {tfs << endl << "#067 mulop -> *";}
mulop:
    SLASH
    {tfs << endl << "#068 mulop -> /";}
mulop:
    DIV
    {tfs << endl << "#069 mulop -> div";}
mulop:
    MOD
    {tfs << endl << "#070 mulop -> mod";}
mulop:
    AND
    {tfs << endl << "#071 mulop -> and";}
factor:
    ID
    {tfs << endl << "#072 factor -> ID";}
factor:
    ID LBRACKET expression_list RBRACKET
    {tfs << endl << "#073 factor -> ID [ expression-list ]";}
factor:
    ID LPAREN expression_list RPAREN
    {tfs << endl << "#074 factor -> ID ( expression-list )";}
factor:
    LPAREN expression RPAREN
    {tfs << endl << "#075 factor -> ( expression )";}
factor:
    NOT factor
    {tfs << endl << "#076 factor -> not factor";}
factor:
    INTLIT
    {tfs << endl << "#077 factor -> intlit";}
factor:
    REALIT
    {tfs << endl << "#078 factor -> realit";}
factor:
    CHRLIT
    {tfs << endl << "#079 factor -> chrlit";}
%%
//-----------------------------------------------------------------------
//User function section
//-----------------------------------------------------------------------
void yyerror(const char* m)
{ cout << endl
 << "line(" << line << ") col(" << col << ") " << m;
 cout << endl;
}