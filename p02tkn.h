#ifndef p02tkn_h
#define p02tkn_h 1
//-------------------------------------------------------------------------
// File p02tkn_prolog.h must be prefixed onto p02tkn.h
//-------------------------------------------------------------------------/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     ARRAY = 259,
     BEGAN = 260,
     DIV = 261,
     DO = 262,
     DOWNTO = 263,
     ELSE = 264,
     END = 265,
     FOR = 266,
     FUNCTION = 267,
     IF = 268,
     MOD = 269,
     NOT = 270,
     OF = 271,
     OR = 272,
     PROCEDURE = 273,
     PROGRAM = 274,
     REPEAT = 275,
     THEN = 276,
     TO = 277,
     UNTIL = 278,
     VAR = 279,
     WHILE = 280,
     EQU = 281,
     NEQ = 282,
     LES = 283,
     LEQ = 284,
     GRT = 285,
     GEQ = 286,
     PLUS = 287,
     MINUS = 288,
     STAR = 289,
     SLASH = 290,
     ASSIGN = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACKET = 294,
     RBRACKET = 295,
     COLON = 296,
     SEMICOLON = 297,
     COMMA = 298,
     PERIOD = 299,
     RANGE = 300,
     ID = 301,
     INTLIT = 302,
     CHRLIT = 303,
     REALIT = 304,
     APOSTROPHE = 305,
     QUOTE = 306,
     ASPERAND = 307,
     EPSILON = 308,
     READ = 309,
     WRITE = 310,
     ERROR = 311
   };
#endif
/* Tokens.  */
#define AND 258
#define ARRAY 259
#define BEGAN 260
#define DIV 261
#define DO 262
#define DOWNTO 263
#define ELSE 264
#define END 265
#define FOR 266
#define FUNCTION 267
#define IF 268
#define MOD 269
#define NOT 270
#define OF 271
#define OR 272
#define PROCEDURE 273
#define PROGRAM 274
#define REPEAT 275
#define THEN 276
#define TO 277
#define UNTIL 278
#define VAR 279
#define WHILE 280
#define EQU 281
#define NEQ 282
#define LES 283
#define LEQ 284
#define GRT 285
#define GEQ 286
#define PLUS 287
#define MINUS 288
#define STAR 289
#define SLASH 290
#define ASSIGN 291
#define LPAREN 292
#define RPAREN 293
#define LBRACKET 294
#define RBRACKET 295
#define COLON 296
#define SEMICOLON 297
#define COMMA 298
#define PERIOD 299
#define RANGE 300
#define ID 301
#define INTLIT 302
#define CHRLIT 303
#define REALIT 304
#define APOSTROPHE 305
#define QUOTE 306
#define ASPERAND 307
#define EPSILON 308
#define READ 309
#define WRITE 310
#define ERROR 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 53 "p02par.y"
{
 string* token;
}
/* Line 1529 of yacc.c.  */
#line 165 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

//------------------------------------------------------------------------
// File p02tkn_epilog.h must be appended to file p02tkn.h
//------------------------------------------------------------------------
#endif