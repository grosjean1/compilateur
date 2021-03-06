/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "main.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "symboles.h"
#include "ast.h"

int yylex(void);
void yyerror(char *s);

nodeType *programRoot;

int typeDeclaration;



/* Line 268 of yacc.c  */
#line 90 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IFX = 258,
     T_ELSE = 259,
     T_NE = 260,
     T_EQ = 261,
     T_LE = 262,
     T_GE = 263,
     T_OR = 264,
     T_AND = 265,
     T_UMINUS = 266,
     T_NNOT = 267,
     T_BEGIN = 268,
     T_DO = 269,
     T_END = 270,
     T_FUNCTION = 271,
     T_IF = 272,
     T_NOT = 273,
     T_NUMERIC = 274,
     T_PROGRAM = 275,
     T_RETURN = 276,
     T_SKIP = 277,
     T_THEN = 278,
     T_VAR = 279,
     T_VARIABLE = 280,
     T_WHILE = 281,
     T_WRITE = 282,
     T_INPUT = 283
   };
#endif
/* Tokens.  */
#define IFX 258
#define T_ELSE 259
#define T_NE 260
#define T_EQ 261
#define T_LE 262
#define T_GE 263
#define T_OR 264
#define T_AND 265
#define T_UMINUS 266
#define T_NNOT 267
#define T_BEGIN 268
#define T_DO 269
#define T_END 270
#define T_FUNCTION 271
#define T_IF 272
#define T_NOT 273
#define T_NUMERIC 274
#define T_PROGRAM 275
#define T_RETURN 276
#define T_SKIP 277
#define T_THEN 278
#define T_VAR 279
#define T_VARIABLE 280
#define T_WHILE 281
#define T_WRITE 282
#define T_INPUT 283




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 19 "main.y"

	float f;
	char *s;
	nodeType *np;



/* Line 293 of yacc.c  */
#line 190 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 202 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,    14,    11,    37,    12,    36,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
       6,    40,     5,     2,     2,     2,     2,     2,     2,     2,
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
       7,     8,     9,    10,    13,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    14,    15,    18,    19,    20,    21,
      22,    25,    27,    31,    35,    37,    39,    40,    43,    45,
      53,    56,    59,    60,    63,    66,    67,    69,    73,    77,
      80,    82,    84,    86,    88,    90,    92,    94,    96,   101,
     108,   113,   115,   118,   121,   125,   130,   134,   136,   138,
     142,   146,   150,   154,   158,   162,   166,   170,   174,   178,
     182,   185,   189,   193,   196,   198
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    26,    31,    35,    43,    36,    -1,    44,
      45,    52,    60,    -1,    -1,    46,    49,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    50,    -1,    30,    51,    35,
      -1,    51,    37,    31,    -1,    31,    -1,    53,    -1,    -1,
      53,    54,    -1,    54,    -1,    55,    38,    56,    39,    35,
      57,    35,    -1,    22,    31,    -1,    47,    51,    -1,    -1,
      58,    60,    -1,    48,    49,    -1,    -1,    31,    -1,    19,
      61,    21,    -1,    61,    62,    35,    -1,    62,    35,    -1,
      60,    -1,    65,    -1,    66,    -1,    67,    -1,    69,    -1,
      68,    -1,    63,    -1,    64,    -1,    23,    71,    29,    62,
      -1,    23,    71,    29,    62,     4,    62,    -1,    32,    71,
      20,    62,    -1,    28,    -1,    33,    71,    -1,    27,    71,
      -1,    59,    40,    71,    -1,    31,    38,    70,    39,    -1,
      70,    37,    71,    -1,    71,    -1,    25,    -1,    71,    11,
      71,    -1,    71,    12,    71,    -1,    71,    14,    71,    -1,
      71,    15,    71,    -1,    38,    71,    39,    -1,    71,     6,
      71,    -1,    71,     5,    71,    -1,    71,    10,    71,    -1,
      71,     9,    71,    -1,    71,     7,    71,    -1,    71,     8,
      71,    -1,    24,    71,    -1,    71,    16,    71,    -1,    71,
      13,    71,    -1,    12,    71,    -1,    59,    -1,    69,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    69,    89,    95,    96,   100,   107,   114,
     120,   121,   124,   127,   128,   131,   132,   135,   136,   139,
     146,   162,   163,   166,   169,   170,   173,   189,   192,   193,
     196,   197,   198,   199,   200,   201,   202,   203,   206,   207,
     210,   213,   216,   219,   226,   229,   243,   245,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFX", "T_ELSE", "'>'", "'<'", "T_NE",
  "T_EQ", "T_LE", "T_GE", "'+'", "'-'", "T_OR", "'*'", "'/'", "T_AND",
  "T_UMINUS", "T_NNOT", "T_BEGIN", "T_DO", "T_END", "T_FUNCTION", "T_IF",
  "T_NOT", "T_NUMERIC", "T_PROGRAM", "T_RETURN", "T_SKIP", "T_THEN",
  "T_VAR", "T_VARIABLE", "T_WHILE", "T_WRITE", "T_INPUT", "';'", "'.'",
  "','", "'('", "')'", "'='", "$accept", "program_main", "bloc_principal",
  "set_nbvariables_globales_to_0", "partie_declaration_variables_globales",
  "set_type_declaration_globales", "set_type_declaration_formels",
  "set_type_declaration_locales", "liste_declaration_variables",
  "declaration_variable", "liste_variables", "partie_definition_fonctions",
  "liste_definition_fonctions", "definition_fonction",
  "prototype_fonction", "liste_parametres_formels", "bloc_fonction",
  "partie_declaration_variables_locales", "acces_variable",
  "instruction_composee", "liste_instructions", "instruction",
  "if_instruction", "while_instruction", "skip_instruction",
  "write_instruction", "return_instruction", "affectation",
  "appel_fonction", "liste_parametres_effectifs", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    62,    60,   260,   261,   262,
     263,    43,    45,   264,    42,    47,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,    59,    46,    44,    40,    41,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    44,    45,    45,    46,    47,    48,
      49,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    56,    56,    57,    58,    58,    59,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    65,    66,    67,    68,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     0,     2,     0,     0,     0,     0,
       2,     1,     3,     3,     1,     1,     0,     2,     1,     7,
       2,     2,     0,     2,     2,     0,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       4,     1,     2,     2,     3,     4,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     6,     2,    16,
       0,     0,     0,    15,    18,     0,     0,     5,    11,    20,
       0,     3,    17,     8,    14,     0,    10,     0,     0,    41,
      26,     0,     0,     0,    30,     0,     0,    36,    37,    31,
      32,    33,    35,    34,     0,     0,    12,     0,     0,     0,
      48,     0,    64,    65,     0,    43,     0,     0,    42,     0,
      27,     0,    29,    21,     0,    13,    63,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,    44,    28,     9,    53,    55,
      54,    58,    59,    57,    56,    49,    50,    62,    51,    52,
      61,    38,     0,    45,    40,     0,     0,     0,     0,    46,
      24,    19,    23,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,     7,     9,    10,    44,   105,    17,    18,
      25,    12,    13,    14,    15,    45,   106,   107,    52,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    53,    82,
      54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -27
static const yytype_int16 yypact[] =
{
     -21,   -25,    16,   -15,   -27,   -27,    -5,    -9,   -27,    -3,
       3,     6,    21,    -3,   -27,    19,    10,     3,   -27,   -27,
      11,   -27,   -27,    20,   -27,   -26,   -27,    -2,    -2,   -27,
      22,    -2,    -2,    25,   -27,    49,    27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,    10,    30,   -27,    40,    -2,    -2,
     -27,    -2,   -27,   -27,   103,   144,    -2,   128,   144,    -2,
     -27,    38,   -27,    37,    44,   -27,   -27,   -27,    91,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    11,   -11,   144,    11,   144,   -27,    56,   -27,   109,
     109,   109,   109,   109,   109,    -1,    -1,    -1,   -27,   -27,
     -27,    79,    -2,   -27,   -27,     3,    51,    21,    11,   144,
       3,   -27,   -27,   -27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -13,   -16,
      43,   -27,   -27,    71,   -27,   -27,   -27,   -27,   -18,   -12,
     -27,   -23,   -27,   -27,   -27,   -27,   -27,   -27,   -17,   -27,
     -24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int8 yytable[] =
{
      21,    26,    33,    43,    55,     1,     3,    57,    58,    46,
      48,    47,    61,    78,    79,    80,     4,    33,    43,    11,
       5,    -7,    49,    50,    66,    67,   102,    68,   103,    30,
      20,     8,    83,    16,    27,    85,    51,    19,    28,    29,
      20,    24,    30,    31,    32,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    23,   101,   -22,
      56,   104,    62,    33,    43,    59,    33,    43,    20,    64,
      60,    65,    27,    86,    47,   -25,    28,    29,   109,    87,
      30,    31,    32,   108,    22,   113,   111,    63,     0,     0,
      33,    43,   110,     0,    26,   112,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
      88,     0,    81,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,     0,    84,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-27))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      12,    17,    20,    20,    28,    26,    31,    31,    32,    35,
      12,    37,    35,    14,    15,    16,     0,    35,    35,    22,
      35,    30,    24,    25,    48,    49,    37,    51,    39,    31,
      19,    36,    56,    30,    23,    59,    38,    31,    27,    28,
      19,    31,    31,    32,    33,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    38,    81,    39,
      38,    84,    35,    81,    81,    40,    84,    84,    19,    39,
      21,    31,    23,    35,    37,    19,    27,    28,   102,    35,
      31,    32,    33,     4,    13,   108,    35,    44,    -1,    -1,
     108,   108,   105,    -1,   110,   107,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      39,    -1,    29,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    20,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    42,    31,     0,    35,    43,    44,    36,    45,
      46,    22,    52,    53,    54,    55,    30,    49,    50,    31,
      19,    60,    54,    38,    31,    51,    50,    23,    27,    28,
      31,    32,    33,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    47,    56,    35,    37,    12,    24,
      25,    38,    59,    69,    71,    71,    38,    71,    71,    40,
      21,    62,    35,    51,    39,    31,    71,    71,    71,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    29,    70,    71,    20,    71,    35,    35,    39,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    62,    37,    39,    62,    48,    57,    58,     4,    71,
      49,    35,    60,    62
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1806 of yacc.c  */
#line 65 "main.y"
    { programRoot = (yyvsp[(4) - (5)].np); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 72 "main.y"
    { nodeType *n0, *n1, *n2;
				  n0 = createOperatorNode(OPER_RESERVE_SPACE,0); 
				  if ((yyvsp[(3) - (4)].np)!=NULL)
				  {
				  	n2 = createOperatorNode(OPER_MAIN,1,(yyvsp[(4) - (4)].np));
				  	n1 = createOperatorNode(OPER_SEQUENCE,2,(yyvsp[(3) - (4)].np),n2);
				  	(yyval.np) = createOperatorNode(OPER_SEQUENCE,2,n0,n1); 
				  }
				  else
				  {
				  	n2 = createOperatorNode(OPER_MAIN,1,(yyvsp[(4) - (4)].np));
				  	(yyval.np) = createOperatorNode(OPER_SEQUENCE,2,n0,n2); 
				  }
				}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 89 "main.y"
    { 
			reset_index_table_nbre_variables(0); 
			printf("nbVariablesGlobales=0\n");
		}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 100 "main.y"
    { 
			typeDeclaration=TYPE_VARIABLE_GLOBALE; 
			printf("typeDeclaration=TYPE_VARIABLE_GLOBALE\n");
		}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 107 "main.y"
    {
			typeDeclaration=TYPE_PARAMETRE; 
			printf("typeDeclaration=TYPE_PARAMETRE\n");
		}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 114 "main.y"
    {
			typeDeclaration=TYPE_VARIABLE_LOCALE; 
			printf("typeDeclaration=TYPE_VARIABLE_LOCALE\n");
		}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 127 "main.y"
    { declarer_variable(getFunctionNum(),(yyvsp[(3) - (3)].s),typeDeclaration); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 128 "main.y"
    { declarer_variable(getFunctionNum(),(yyvsp[(1) - (1)].s),typeDeclaration); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 132 "main.y"
    { (yyval.np) = NULL ; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 135 "main.y"
    { (yyval.np) = createOperatorNode(OPER_SEQUENCE,2,(yyvsp[(1) - (2)].np),(yyvsp[(2) - (2)].np)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 140 "main.y"
    { 
			(yyval.np) = createOperatorNode(OPER_DEF_FONCTION,2,(yyvsp[(1) - (7)].np),(yyvsp[(6) - (7)].np)) ;
			print_current_table_symb();
		}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 147 "main.y"
    { 
			declarer_variable(0,(yyvsp[(2) - (2)].s),TYPE_FONCTION);
			int index=est_deja_declare(0,(yyvsp[(2) - (2)].s));
			printf("index=%d\n",index);

			increment_current_function();
			printf("getFunctionNum()=%d\n",getFunctionNum());
			ajouter_table_fonctions(index,getFunctionNum());
			
		  	nodeType *nodeIndex=createNumericNode((float)index);
		  	nodeType *nodeFunctionNum=createNumericNode((float)getFunctionNum());
		  	(yyval.np) = createOperatorNode(OPER_SEQUENCE,2,nodeIndex,nodeFunctionNum); 
	        }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 166 "main.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np) ; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 174 "main.y"
    { 
			int varloc=est_deja_declare(getFunctionNum(),(yyvsp[(1) - (1)].s));
			int varglob=est_deja_declare(0,(yyvsp[(1) - (1)].s));
			if (varloc!=-1)
				(yyval.np)=createIdentifierNode((yyvsp[(1) - (1)].s),getFunctionNum(),varloc) ; 
			else if (varglob!=-1)
				(yyval.np)=createIdentifierNode((yyvsp[(1) - (1)].s),0,varglob) ; 
			else
			{
				printf("variable %s non declaree\n",(yyvsp[(1) - (1)].s));
				exit(1);
			}
		}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 189 "main.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np) ; }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 192 "main.y"
    { (yyval.np) = createOperatorNode(OPER_SEQUENCE,2,(yyvsp[(1) - (3)].np),(yyvsp[(2) - (3)].np)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 206 "main.y"
    { (yyval.np)=createOperatorNode(OPER_IF,2,(yyvsp[(2) - (4)].np),(yyvsp[(4) - (4)].np)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 207 "main.y"
    { (yyval.np)=createOperatorNode(OPER_IF,3,(yyvsp[(2) - (6)].np),(yyvsp[(4) - (6)].np),(yyvsp[(6) - (6)].np)) ; }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 210 "main.y"
    { (yyval.np)=createOperatorNode(OPER_WHILE,2,(yyvsp[(2) - (4)].np),(yyvsp[(4) - (4)].np)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 213 "main.y"
    { (yyval.np) = createOperatorNode(OPER_SKIP,0); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 216 "main.y"
    { (yyval.np) = createOperatorNode(OPER_WRITE,1,(yyvsp[(2) - (2)].np)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 220 "main.y"
    { 
			nodeType *n0=createIdentifierNode("RET",getFunctionNum(),0) ; 
			(yyval.np) = createOperatorNode(OPER_RETURN,2,n0,(yyvsp[(2) - (2)].np)); 
		}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 226 "main.y"
    { (yyval.np) = createOperatorNode(OPER_ASSIGN,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)) ; printf("OPER_ASSIGN=%p\n",(yyval.np)) ; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 230 "main.y"
    { 
			int varglob=est_deja_declare(0,(yyvsp[(1) - (4)].s));
			printf("appel_fonction varglob=%d\n",varglob);
			if (varglob!=-1)
				(yyval.np) = createOperatorNode(OPER_APPEL_FONCTION,2,createIdentifierNode((yyvsp[(1) - (4)].s),0,varglob),(yyvsp[(3) - (4)].np)) ; 
			else
			{
				printf("fonction %s inconnue\n",(yyvsp[(1) - (4)].s));
				exit(1);
			}
		}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 244 "main.y"
    { (yyval.np) = createOperatorNode(OPER_SEQUENCE,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)) ; }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 248 "main.y"
    { (yyval.np) = createNumericNode((yyvsp[(1) - (1)].f)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 249 "main.y"
    { (yyval.np) = createOperatorNode(OPER_ADD,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 250 "main.y"
    { (yyval.np) = createOperatorNode(OPER_SUB,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 251 "main.y"
    { (yyval.np) = createOperatorNode(OPER_MULT,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 252 "main.y"
    { (yyval.np) = createOperatorNode(OPER_DIV,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 253 "main.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np) ; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 254 "main.y"
    { (yyval.np) = createOperatorNode(OPER_INF,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 255 "main.y"
    { (yyval.np) = createOperatorNode(OPER_SUP,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 256 "main.y"
    { (yyval.np) = createOperatorNode(OPER_GE,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 257 "main.y"
    { (yyval.np) = createOperatorNode(OPER_LE,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 258 "main.y"
    { (yyval.np) = createOperatorNode(OPER_NE,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 259 "main.y"
    { (yyval.np) = createOperatorNode(OPER_EQ,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 260 "main.y"
    { (yyval.np) = createOperatorNode(OPER_NOT,1,(yyvsp[(2) - (2)].np)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 261 "main.y"
    { (yyval.np) = createOperatorNode(OPER_AND,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 262 "main.y"
    { (yyval.np) = createOperatorNode(OPER_OR,2,(yyvsp[(1) - (3)].np),(yyvsp[(3) - (3)].np)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 263 "main.y"
    { (yyval.np) = createOperatorNode(OPER_NEG,1,(yyvsp[(2) - (2)].np)); }
    break;



/* Line 1806 of yacc.c  */
#line 1899 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 267 "main.y"


void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}

int main(void) {
	init_table_symboles();
    	yyparse();
	print_table_symb(0);
	print_table_fonctions();
	printf("generateDigraph\n");
	generateDigraph(programRoot);
	printf("generateAsm\n");
	generateAsm(programRoot,"res.asm");
    	return 0;
}

