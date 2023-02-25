/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     ERROR = 309
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
#define ERROR 309




/* Copy the first part of user declarations.  */
#line 1 "p02par.y"

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
// Due:		 	            February 27, 2023
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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 53 "p02par.y"
{
 string* token;
}
/* Line 193 of yacc.c.  */
#line 261 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 274 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    12,    15,    18,    19,    23,    25,
      27,    31,    32,    39,    41,    50,    52,    53,    57,    61,
      68,    73,    74,    78,    82,    88,    92,    93,    95,    97,
     101,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     128,   133,   138,   147,   156,   158,   163,   165,   170,   172,
     176,   178,   182,   184,   186,   188,   190,   192,   194,   196,
     199,   201,   203,   207,   209,   211,   213,   215,   219,   221,
     223,   225,   227,   229,   231,   236,   241,   245,   248,   250,
     252
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    58,    59,    -1,    19,    46,    60,
      42,    -1,    63,    66,    -1,    71,    44,    -1,    -1,    37,
      61,    38,    -1,    62,    -1,    46,    -1,    62,    43,    46,
      -1,    -1,    63,    24,    62,    41,    64,    42,    -1,    65,
      -1,     4,    39,    47,    45,    47,    40,    16,    65,    -1,
      46,    -1,    -1,    66,    67,    42,    -1,    68,    63,    71,
      -1,    12,    46,    69,    41,    65,    42,    -1,    18,    46,
      69,    42,    -1,    -1,    37,    70,    38,    -1,    62,    41,
      64,    -1,    70,    42,    62,    41,    64,    -1,     5,    72,
      10,    -1,    -1,    73,    -1,    74,    -1,    73,    42,    74,
      -1,    81,    36,    84,    -1,    82,    -1,    75,    -1,    76,
      -1,    71,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    13,    84,    21,    74,     9,    74,    -1,    25,    84,
       7,    74,    -1,    20,    73,    23,    84,    -1,    11,    81,
      36,    84,    22,    84,     7,    74,    -1,    11,    81,    36,
      84,     8,    84,     7,    74,    -1,    46,    -1,    46,    39,
      84,    40,    -1,    46,    -1,    46,    37,    83,    38,    -1,
      84,    -1,    83,    43,    84,    -1,    86,    -1,    86,    85,
      86,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    89,    -1,    87,    89,    -1,    32,
      -1,    33,    -1,    86,    88,    89,    -1,    32,    -1,    33,
      -1,    17,    -1,    91,    -1,    89,    90,    91,    -1,    34,
      -1,    35,    -1,     6,    -1,    14,    -1,     3,    -1,    46,
      -1,    46,    39,    84,    40,    -1,    46,    37,    83,    38,
      -1,    37,    84,    38,    -1,    15,    91,    -1,    47,    -1,
      49,    -1,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   113,   116,   119,   123,   125,   128,   131,
     134,   138,   140,   143,   146,   149,   153,   155,   158,   161,
     164,   168,   170,   173,   176,   179,   183,   185,   188,   191,
     194,   197,   200,   203,   206,   209,   212,   215,   218,   221,
     224,   227,   230,   233,   236,   239,   242,   245,   248,   251,
     254,   257,   260,   263,   266,   269,   272,   275,   278,   281,
     284,   287,   290,   293,   296,   299,   302,   305,   308,   311,
     314,   317,   320,   323,   326,   329,   332,   335,   338,   341,
     344
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "BEGAN", "DIV", "DO",
  "DOWNTO", "ELSE", "END", "FOR", "FUNCTION", "IF", "MOD", "NOT", "OF",
  "OR", "PROCEDURE", "PROGRAM", "REPEAT", "THEN", "TO", "UNTIL", "VAR",
  "WHILE", "EQU", "NEQ", "LES", "LEQ", "GRT", "GEQ", "PLUS", "MINUS",
  "STAR", "SLASH", "ASSIGN", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "COLON", "SEMICOLON", "COMMA", "PERIOD", "RANGE", "ID", "INTLIT",
  "CHRLIT", "REALIT", "APOSTROPHE", "QUOTE", "ASPERAND", "EPSILON",
  "ERROR", "$accept", "program", "program_head", "program_declarations",
  "program_body", "program_parameters", "program_parameter_list",
  "identifier_list", "declarations", "type", "standard_type",
  "subprogram_declarations", "subprogram_declaration", "subprogram_head",
  "subprogram_parameters", "parameter_list", "compound_statement",
  "optional_statements", "statement_list", "statement",
  "alternative_statement", "iterative_statement", "if_statement",
  "while_statement", "repeat_statement", "for_statement", "variable",
  "procedure_statement", "expression_list", "expression", "relop",
  "simple_expression", "sign", "addop", "term", "mulop", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    58,    59,    60,    60,    61,    62,
      62,    63,    63,    64,    64,    65,    66,    66,    67,    68,
      68,    69,    69,    70,    70,    71,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    75,    76,    76,    76,    77,
      78,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    87,    86,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     2,     0,     3,     1,     1,
       3,     0,     6,     1,     8,     1,     0,     3,     3,     6,
       4,     0,     3,     3,     5,     3,     0,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       4,     4,     8,     8,     1,     4,     1,     4,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     2,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     6,     1,     0,    16,     0,     0,
      26,     2,     0,     0,     4,     9,     0,     8,     3,     0,
       0,     0,     0,    46,    34,     0,    27,    28,    32,    33,
      35,    36,    37,    38,     0,    31,     5,     0,     0,     0,
       0,    11,     7,     0,    44,     0,     0,    60,    61,     0,
      73,    78,    80,    79,     0,    50,     0,    58,    66,     0,
       0,     0,     0,    25,     0,     0,     0,    21,    21,    17,
       0,    10,     0,    77,     0,     0,     0,     0,    65,    52,
      53,    54,    55,    56,    57,    63,    64,     0,     0,    59,
      72,    70,    71,    68,    69,     0,     0,     0,     0,    48,
       0,    29,    30,     0,    15,     0,    13,     0,     0,     0,
      18,     0,    76,     0,     0,     0,    51,    62,    67,    41,
      40,    47,     0,    45,     0,    12,     0,     0,     0,    20,
       0,     0,    75,    74,     0,    49,     0,     0,    22,     0,
       0,     0,     0,    39,     0,    23,     0,    19,     0,     0,
       0,     0,    43,    42,     0,    24,     0,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,    11,     9,    16,    17,     7,   105,
     106,    14,    40,    41,   108,   127,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    98,    99,
      87,    55,    56,    88,    57,    95,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int8 yypact[] =
{
      -9,   -26,    51,  -120,    15,  -120,    68,    64,    55,    56,
       3,  -120,    30,    55,    38,  -120,    58,    57,  -120,    59,
      -8,     3,    -8,    53,  -120,    89,    60,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,    70,  -120,  -120,   -22,    61,    62,
      67,  -120,  -120,    69,    65,    74,    18,  -120,  -120,    -8,
      21,  -120,  -120,  -120,    92,    52,    18,    28,  -120,   -10,
     107,    -8,    -8,  -120,     3,    -8,     2,    79,    79,  -120,
      12,  -120,    -8,  -120,    80,    -8,    -8,     3,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,    -8,    18,    28,
    -120,  -120,  -120,  -120,  -120,    18,    -8,     3,    32,  -120,
      77,  -120,  -120,    81,  -120,    82,  -120,    55,    78,    83,
    -120,    37,  -120,    33,    87,   112,    -6,    28,  -120,  -120,
    -120,  -120,    -8,  -120,    75,  -120,    50,   -20,    84,  -120,
      -8,    -8,  -120,  -120,     3,  -120,    86,     2,  -120,    55,
      90,   116,   121,  -120,    88,  -120,    54,  -120,     3,     3,
      93,     2,  -120,  -120,   113,  -120,    84,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -120,  -120,  -120,  -120,  -120,  -120,  -120,   -13,    95,   -90,
    -119,  -120,  -120,  -120,    66,  -120,    -2,  -120,   117,   -62,
    -120,  -120,  -120,  -120,  -120,  -120,   118,  -120,    71,   -19,
    -120,    63,  -120,  -120,   -44,  -120,   -41
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      37,    54,   101,    60,    12,    73,   103,    46,    10,   140,
       1,    78,    89,    96,    19,   115,    20,    10,   138,    66,
       4,    43,   139,    21,    47,    48,    85,    86,    22,    49,
      74,    90,    64,    46,    91,   120,    13,   157,    50,    51,
      52,    53,    92,   100,   117,   130,   102,   145,   104,    23,
      38,     5,     8,   111,   118,    49,    39,   114,    75,   131,
      76,   155,    93,    94,    50,    51,    52,    53,   110,    78,
     121,   132,   143,    10,    36,   122,   122,   119,    79,    80,
      81,    82,    83,    84,    85,    86,   152,   153,    13,   -44,
      61,   137,    62,    43,   126,   151,    42,    43,    18,    63,
      43,    15,    64,   135,    62,    44,    65,    67,    68,    69,
      72,   141,   142,    77,    97,    71,   107,   123,   112,   128,
     124,   134,   136,   148,   125,   129,   146,   133,   149,   156,
     104,   144,   147,   154,   109,   150,    70,    45,    59,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
     116
};

static const yytype_int16 yycheck[] =
{
      13,    20,    64,    22,     6,    46,     4,    15,     5,   128,
      19,    17,    56,    23,    11,    77,    13,     5,    38,    41,
      46,    43,    42,    20,    32,    33,    32,    33,    25,    37,
      49,     3,    42,    15,     6,    97,    24,   156,    46,    47,
      48,    49,    14,    62,    88,     8,    65,   137,    46,    46,
      12,     0,    37,    72,    95,    37,    18,    76,    37,    22,
      39,   151,    34,    35,    46,    47,    48,    49,    70,    17,
      38,    38,   134,     5,    44,    43,    43,    96,    26,    27,
      28,    29,    30,    31,    32,    33,   148,   149,    24,    36,
      37,    41,    39,    43,   107,    41,    38,    43,    42,    10,
      43,    46,    42,   122,    39,    46,    36,    46,    46,    42,
      36,   130,   131,    21,     7,    46,    37,    40,    38,    41,
      39,     9,    47,     7,    42,    42,   139,    40,     7,    16,
      46,    45,    42,    40,    68,    47,    41,    19,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    56,    57,    46,     0,    58,    63,    37,    60,
       5,    59,    71,    24,    66,    46,    61,    62,    42,    11,
      13,    20,    25,    46,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    44,    62,    12,    18,
      67,    68,    38,    43,    46,    81,    15,    32,    33,    37,
      46,    47,    48,    49,    84,    86,    87,    89,    91,    73,
      84,    37,    39,    10,    42,    36,    41,    46,    46,    42,
      63,    46,    36,    91,    84,    37,    39,    21,    17,    26,
      27,    28,    29,    30,    31,    32,    33,    85,    88,    89,
       3,     6,    14,    34,    35,    90,    23,     7,    83,    84,
      84,    74,    84,     4,    46,    64,    65,    37,    69,    69,
      71,    84,    38,    83,    84,    74,    86,    89,    91,    84,
      74,    38,    43,    40,    39,    42,    62,    70,    41,    42,
       8,    22,    38,    40,     9,    84,    47,    41,    38,    42,
      65,    84,    84,    74,    45,    64,    62,    42,     7,     7,
      47,    41,    74,    74,    40,    64,    16,    65
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 111 "p02par.y"
    {tfs << endl << "#001 program -> program-head program-declarations program-body";}
    break;

  case 3:
#line 114 "p02par.y"
    {tfs << endl << "#002 program-head -> program ID program-parameters ;";}
    break;

  case 4:
#line 117 "p02par.y"
    {tfs << endl << "#003 program-declarations -> declarations subprogram-declarations";}
    break;

  case 5:
#line 120 "p02par.y"
    {tfs << endl << "#004 program-body -> compound-statement .";}
    break;

  case 6:
#line 123 "p02par.y"
    {tfs << endl << "#005 program-parameters -> empty";}
    break;

  case 7:
#line 126 "p02par.y"
    {tfs << endl << "#006 program-parameters -> ( program-parameter-list )";}
    break;

  case 8:
#line 129 "p02par.y"
    {tfs << endl << "#007 program-parameter-list -> identifier-list";}
    break;

  case 9:
#line 132 "p02par.y"
    {tfs << endl << "#008 identifier-list -> ID";}
    break;

  case 10:
#line 135 "p02par.y"
    {tfs << endl << "#009 identifier-list -> identifier-list , ID";}
    break;

  case 11:
#line 138 "p02par.y"
    {tfs << endl << "#010 declarations -> empty";}
    break;

  case 12:
#line 141 "p02par.y"
    {tfs << endl << "#011 declarations -> declarations var identifier-list : type ;";}
    break;

  case 13:
#line 144 "p02par.y"
    {tfs << endl << "#012 type -> standard-type";}
    break;

  case 14:
#line 147 "p02par.y"
    {tfs << endl << "#013 type -> array [ intlit .. intlit ] of standard-type";}
    break;

  case 15:
#line 150 "p02par.y"
    {tfs << endl << "#014 standard-type -> ID";}
    break;

  case 16:
#line 153 "p02par.y"
    {tfs << endl << "#015 subprogram-declarations -> empty";}
    break;

  case 17:
#line 156 "p02par.y"
    {tfs << endl << "#016 subprogram-declarations -> subprogram-declarations subprogram-declaration ;";}
    break;

  case 18:
#line 159 "p02par.y"
    {tfs << endl << "#017 subprogram-declaration -> subprogram-head declarations compound-statement";}
    break;

  case 19:
#line 162 "p02par.y"
    {tfs << endl << "#018 subprogram-head -> function ID subprogram-parameters : standard-type ;";}
    break;

  case 20:
#line 165 "p02par.y"
    {tfs << endl << "#019 subprogram-head -> procedure ID subprogram-parameters;";}
    break;

  case 21:
#line 168 "p02par.y"
    {tfs << endl << "#020 subprogram-parameters -> empty";}
    break;

  case 22:
#line 171 "p02par.y"
    {tfs << endl << "#021 subprogram-parameters -> ( parameter-list )";}
    break;

  case 23:
#line 174 "p02par.y"
    {tfs << endl << "#022 parameter-list -> identifier-list : type";}
    break;

  case 24:
#line 177 "p02par.y"
    {tfs << endl << "#023 parameter-list -> parameter-list ; identifier-list : type";}
    break;

  case 25:
#line 180 "p02par.y"
    {tfs << endl << "#024 compound-statement -> begin optional-statements end";}
    break;

  case 26:
#line 183 "p02par.y"
    {tfs << endl << "#025 optional-statements -> empty";}
    break;

  case 27:
#line 186 "p02par.y"
    {tfs << endl << "#026 optional-statements -> statement-list";}
    break;

  case 28:
#line 189 "p02par.y"
    {tfs << endl << "#027 statement-list -> statement";}
    break;

  case 29:
#line 192 "p02par.y"
    {tfs << endl << "#028 statement-list -> statement-list ; statement";}
    break;

  case 30:
#line 195 "p02par.y"
    {tfs << endl << "#029 statement -> variable := expression";}
    break;

  case 31:
#line 198 "p02par.y"
    {tfs << endl << "#030 statement -> procedure-statement";}
    break;

  case 32:
#line 201 "p02par.y"
    {tfs << endl << "#031 statement -> alternative-statement";}
    break;

  case 33:
#line 204 "p02par.y"
    {tfs << endl << "#032 statement -> iterative-statement";}
    break;

  case 34:
#line 207 "p02par.y"
    {tfs << endl << "#033 statement -> compound-statement";}
    break;

  case 35:
#line 210 "p02par.y"
    {tfs << endl << "#034 alternative-statement -> if-statement";}
    break;

  case 36:
#line 213 "p02par.y"
    {tfs << endl << "#035 iterative-statement -> while-statement";}
    break;

  case 37:
#line 216 "p02par.y"
    {tfs << endl << "#036 iterative-statement -> repeat-statement";}
    break;

  case 38:
#line 219 "p02par.y"
    {tfs << endl << "#037 iterative-statement -> for-statement";}
    break;

  case 39:
#line 222 "p02par.y"
    {tfs << endl << "#038 if-statement -> if expression then statement else statement";}
    break;

  case 40:
#line 225 "p02par.y"
    {tfs << endl << "#039 while-statement -> while expression do statement";}
    break;

  case 41:
#line 228 "p02par.y"
    {tfs << endl << "#040 repeat-statement -> repeat statement_list until expression";}
    break;

  case 42:
#line 231 "p02par.y"
    {tfs << endl << "#041 for-statement -> for variable := expression to expression do statement";}
    break;

  case 43:
#line 234 "p02par.y"
    {tfs << endl << "#042 for-statement -> for variable := expression downto expression do statement";}
    break;

  case 44:
#line 237 "p02par.y"
    {tfs << endl << "#043 variable -> ID";}
    break;

  case 45:
#line 240 "p02par.y"
    {tfs << endl << "#044 variable -> ID [ expression ]";}
    break;

  case 46:
#line 243 "p02par.y"
    {tfs << endl << "#045 procedure-statement -> ID";}
    break;

  case 47:
#line 246 "p02par.y"
    {tfs << endl << "#046 procedure-statement -> ID ( expression-list )";}
    break;

  case 48:
#line 249 "p02par.y"
    {tfs << endl << "#047 expression-list -> expression";}
    break;

  case 49:
#line 252 "p02par.y"
    {tfs << endl << "#048 expression-list -> expression-list , expression";}
    break;

  case 50:
#line 255 "p02par.y"
    {tfs << endl << "#049 expression -> simple-expression";}
    break;

  case 51:
#line 258 "p02par.y"
    {tfs << endl << "#050 expression -> simple-expression relop simple-expression";}
    break;

  case 52:
#line 261 "p02par.y"
    {tfs << endl << "#051 relop -> =";}
    break;

  case 53:
#line 264 "p02par.y"
    {tfs << endl << "#052 relop -> <>";}
    break;

  case 54:
#line 267 "p02par.y"
    {tfs << endl << "#053 relop -> <";}
    break;

  case 55:
#line 270 "p02par.y"
    {tfs << endl << "#054 relop -> <=";}
    break;

  case 56:
#line 273 "p02par.y"
    {tfs << endl << "#055 relop -> >";}
    break;

  case 57:
#line 276 "p02par.y"
    {tfs << endl << "#056 relop -> >=";}
    break;

  case 58:
#line 279 "p02par.y"
    {tfs << endl << "#057 simple-expression -> term";}
    break;

  case 59:
#line 282 "p02par.y"
    {tfs << endl << "#058 simple-expression -> sign term";}
    break;

  case 60:
#line 285 "p02par.y"
    {tfs << endl << "#059 sign -> +";}
    break;

  case 61:
#line 288 "p02par.y"
    {tfs << endl << "#060 sign -> -";}
    break;

  case 62:
#line 291 "p02par.y"
    {tfs << endl << "#061 simple-expression -> simple-expression addop term";}
    break;

  case 63:
#line 294 "p02par.y"
    {tfs << endl << "#062 addop -> +";}
    break;

  case 64:
#line 297 "p02par.y"
    {tfs << endl << "#063 addop -> -";}
    break;

  case 65:
#line 300 "p02par.y"
    {tfs << endl << "#064 addop -> or";}
    break;

  case 66:
#line 303 "p02par.y"
    {tfs << endl << "#065 term -> factor";}
    break;

  case 67:
#line 306 "p02par.y"
    {tfs << endl << "#066 term -> term mulop factor";}
    break;

  case 68:
#line 309 "p02par.y"
    {tfs << endl << "#067 mulop -> *";}
    break;

  case 69:
#line 312 "p02par.y"
    {tfs << endl << "#068 mulop -> /";}
    break;

  case 70:
#line 315 "p02par.y"
    {tfs << endl << "#069 mulop -> div";}
    break;

  case 71:
#line 318 "p02par.y"
    {tfs << endl << "#070 mulop -> mod";}
    break;

  case 72:
#line 321 "p02par.y"
    {tfs << endl << "#071 mulop -> and";}
    break;

  case 73:
#line 324 "p02par.y"
    {tfs << endl << "#072 factor -> ID";}
    break;

  case 74:
#line 327 "p02par.y"
    {tfs << endl << "#073 factor -> ID [ expression-list ]";}
    break;

  case 75:
#line 330 "p02par.y"
    {tfs << endl << "#074 factor -> ID ( expression-list )";}
    break;

  case 76:
#line 333 "p02par.y"
    {tfs << endl << "#075 factor -> ( expression )";}
    break;

  case 77:
#line 336 "p02par.y"
    {tfs << endl << "#076 factor -> not factor";}
    break;

  case 78:
#line 339 "p02par.y"
    {tfs << endl << "#077 factor -> intlit";}
    break;

  case 79:
#line 342 "p02par.y"
    {tfs << endl << "#078 factor -> realit";}
    break;

  case 80:
#line 345 "p02par.y"
    {tfs << endl << "#079 factor -> chrlit";}
    break;


/* Line 1267 of yacc.c.  */
#line 2011 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 346 "p02par.y"

//-----------------------------------------------------------------------
//User function section
//-----------------------------------------------------------------------
void yyerror(const char* m)
{ cout << endl
 << "line(" << line << ") col(" << col << ") " << m;
 cout << endl;
}
