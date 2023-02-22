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
#ifndef p02lex_h
#define p02lex_h 1
//--------------------------------------------------------------------
// File p02lex.h defines class Lexer.
//--------------------------------------------------------------------
// Author: Thomas R. Turner
// E-Mail: trturner.uco.edu
// Date: January, 2015
//--------------------------------------------------------------------
// Copyright January, 2015 by Thomas R. Turner
// Do not reproduce without permission from Thomas R. Turner.
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// Standard C and C++ include files
//--------------------------------------------------------------------
#include <cstdio>
#include <fstream>
#include <iostream>
//--------------------------------------------------------------------
// Namespaces
//--------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
// Function: yylex
// Function yylex is the pasner. Function yylex returns an integer
// token code as defined above or 0 if end-of-file has been
// reached.
//--------------------------------------------------------------------
#ifdef __cplusplus
extern "C"
#endif
    int
    yylex(void);
//--------------------------------------------------------------------
// Class Lexer defines the attributes of a Scanner
//--------------------------------------------------------------------
class Lexer
{
public:
    Lexer(FILE *i); // Constructor used to redirect the keyboard
    //(stdin) to file i.
    int Lex(void); // Call the scanner yylex and return the code
};
#endif