/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "bison.y"

#include "tp5.h"


int yylex(void);
int yywrap(){
    return(1);
}

//extern int yylineno;

int idVar = 0;

extern FILE* yyin;


#line 87 "bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INCLUDE = 258,
    DEFINE = 259,
    AUTO = 260,
    REGISTER = 261,
    STATIC = 262,
    EXTERN = 263,
    TYPEDEF = 264,
    VOID = 265,
    CHAR = 266,
    SHORT = 267,
    INT = 268,
    LONG = 269,
    FLOAT = 270,
    DOUBLE = 271,
    SIGNED = 272,
    UNSIGNED = 273,
    CONST = 274,
    VOLATILE = 275,
    ENUM = 276,
    CASE = 277,
    DEFAULT = 278,
    IF = 279,
    SWITCH = 280,
    ELSE = 281,
    FOR = 282,
    DO = 283,
    WHILE = 284,
    GOTO = 285,
    CONTINUE = 286,
    BREAK = 287,
    STRUCT = 288,
    UNION = 289,
    RETURN = 290,
    SIZEOF = 291,
    CTE_OR = 292,
    CTE_AND = 293,
    ELIPSIS = 294,
    IGUAL_IGUAL = 295,
    DISTINTO = 296,
    MENOR_IGUAL = 297,
    MAYOR_IGUAL = 298,
    CORR_DER = 299,
    CORR_IZQ = 300,
    MAS_MAS = 301,
    MENOS_MENOS = 302,
    FLECHA = 303,
    POR_IGUAL = 304,
    DIV_IGUAL = 305,
    MAS_IGUAL = 306,
    MENOS_IGUAL = 307,
    MOD_IGUAL = 308,
    CORR_DER_IGUAL = 309,
    CORR_IZQ_IGUAL = 310,
    Y_IGUAL = 311,
    POT_IGUAL = 312,
    O_IGUAL = 313,
    IDENTIFICADOR = 314,
    LITERAL_CADENA = 315,
    CONST_OCTAL = 316,
    CONST_HEXADECIMAL = 317,
    CONST_DECIMAL = 318,
    CONST_PTOFLOTANTE = 319,
    CONST_CARACTER = 320,
    IFX = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "bison.y"

   int ival;
   double dval;
   char* cval;

#line 212 "bison.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  412

#define YYUNDEFTOK  2
#define YYMAXUTOK   321


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    88,    85,     2,
      70,    78,    68,    66,    75,    67,    91,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    72,
      86,    76,    87,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    81,     2,     2,     2,
       2,     2,     2,    73,    83,    74,    89,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,    99,   100,   101,   104,   105,   108,   109,
     113,   114,   115,   116,   120,   121,   122,   123,   126,   127,
     130,   131,   132,   133,   134,   135,   139,   140,   141,   142,
     143,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   161,   162,   165,   166,   169,   170,   173,
     174,   177,   178,   182,   183,   187,   188,   192,   193,   197,
     198,   199,   200,   204,   205,   209,   210,   211,   215,   216,
     219,   220,   224,   225,   229,   230,   234,   235,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   251,   252,
     253,   254,   258,   259,   263,   264,   268,   269,   273,   274,
     275,   276,   277,   278,   281,   282,   286,   287,   293,   294,
     295,   299,   300,   304,   305,   309,   310,   311,   314,   315,
     316,   317,   318,   320,   321,   322,   323,   326,   330,   331,
     332,   333,   334,   335,   339,   340,   341,   345,   346,   347,
     351,   352,   353,   354,   357,   358,   361,   362,   363,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   378,
     379,   380,   381,   382,   383,   386,   387,   391,   392,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     409,   410,   413,   418,   419,   423,   424,   427,   428,   431,
     432,   435,   436,   439,   440,   441,   445,   446,   447,   448,
     449,   453,   454,   455,   459,   460,   461,   464,   465,   466,
     467,   471,   472,   476,   477,   478,   479,   480,   481,   484,
     485,   486,   487,   488,   489,   492,   493,   494,   495,   496,
     497,   498,   499,   504,   505,   506,   507,   511,   512,   516,
     517,   518,   519,   520,   521
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "DEFINE", "AUTO", "REGISTER",
  "STATIC", "EXTERN", "TYPEDEF", "VOID", "CHAR", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "CONST", "VOLATILE", "ENUM",
  "CASE", "DEFAULT", "IF", "SWITCH", "ELSE", "FOR", "DO", "WHILE", "GOTO",
  "CONTINUE", "BREAK", "STRUCT", "UNION", "RETURN", "SIZEOF", "CTE_OR",
  "CTE_AND", "ELIPSIS", "IGUAL_IGUAL", "DISTINTO", "MENOR_IGUAL",
  "MAYOR_IGUAL", "CORR_DER", "CORR_IZQ", "MAS_MAS", "MENOS_MENOS",
  "FLECHA", "POR_IGUAL", "DIV_IGUAL", "MAS_IGUAL", "MENOS_IGUAL",
  "MOD_IGUAL", "CORR_DER_IGUAL", "CORR_IZQ_IGUAL", "Y_IGUAL", "POT_IGUAL",
  "O_IGUAL", "IDENTIFICADOR", "LITERAL_CADENA", "CONST_OCTAL",
  "CONST_HEXADECIMAL", "CONST_DECIMAL", "CONST_PTOFLOTANTE",
  "CONST_CARACTER", "'+'", "'-'", "'*'", "'/'", "'('", "IFX", "';'", "'{'",
  "'}'", "','", "'='", "':'", "')'", "'['", "']'", "'t'", "'?'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "unidad_de_programa", "unidad_de_traduccion", "declaracion_externa",
  "definicion_de_funcion", "declaracion", "lista_de_declaracion",
  "especificadores_de_declaracion",
  "especificador_categoria_almacenamiento", "especificador_de_tipo",
  "calificador_de_tipo", "especificador_estructura_o_union",
  "especificador_estructura_o_union_SA", "estructura_o_union",
  "lista_declaraciones_struct", "lista_declaradores_init",
  "declarador_init", "declaracion_struct",
  "lista_calificador_especificador", "lista_declaradores_struct",
  "declarador_struct", "especificador_enum", "especificador_enum_SA",
  "lista_de_enumerador", "enumerador", "declarador", "declarador_directo",
  "apuntador", "lista_calificadores_de_tipo", "lista_tipos_de_parametro",
  "lista_de_parametros", "declaracion_parametro", "apuntadorOpt",
  "lista_de_identificadores", "inicializador", "lista_de_inicializadores",
  "nombre_de_tipo", "declarador_abstracto", "declarador_abstracto_directo",
  "nombre_typedef", "sentencia", "sentencia_etiquetada",
  "sentencia_expresion", "sentencia_compuesta", "lista_de_sentencias",
  "sentencia_de_seleccion", "sentencia_de_iteracion", "sentencia_de_salto",
  "expresion", "expresion_de_asignacion", "operador_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_OR",
  "expresion_logica_AND", "expresion_OR_inclusivo",
  "expresion_OR_exclusivo", "expresion_AND", "expresion_de_igualdad",
  "expresion_relacional", "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "operador_unario", "expresion_posfija", "expresion_primaria",
  "lista_expresiones_argumento", "constante", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    43,    45,    42,    47,
      40,   321,    59,   123,   125,    44,    61,    58,    41,    91,
      93,   116,    63,   124,    94,    38,    60,    62,    37,   126,
      33,    46
};
# endif

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     784,   973,   784,    95,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     -45,  -246,  -246,    70,    28,   -19,  1357,  -246,    21,   973,
    -246,  -246,  -246,    19,  1211,  1211,  1211,  -246,   -14,  -246,
    1246,  -246,    60,  -246,   973,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  2113,   784,  -246,   -11,   750,  1673,
    -246,  -246,    28,    -8,     2,  1434,  1434,  1384,  -246,  1284,
     197,  -246,  -246,  -246,     4,  -246,    14,  -246,  1003,  -246,
    -246,  -246,    32,   407,  -246,  1246,    19,  -246,  -246,  2146,
    2179,  2179,  -246,  -246,  -246,   663,  -246,  -246,  -246,    66,
    -246,  -246,   -10,    83,    79,    38,    58,   258,   -31,   259,
     239,    25,  -246,   304,  2113,   195,  -246,  -246,   111,  -246,
    -246,   -45,  -246,   106,     5,   110,  -246,     9,  -246,  -246,
    -246,   125,  -246,  -246,  -246,  -246,  2113,  -246,  -246,  -246,
    -246,  2113,   373,    71,  -246,   130,  -246,   111,  -246,   139,
    -246,   -19,  1706,  1246,  -246,  1434,  -246,  2113,   138,   179,
     184,   210,  1607,   215,   180,   217,   229,  1739,   146,  -246,
    -246,   494,  1053,  1083,  -246,  -246,  -246,  -246,  1465,  -246,
    -246,  -246,    24,  -246,  -246,   190,   663,  -246,  -246,  -246,
      56,   234,  2113,  -246,  2113,  2113,  2113,  2113,  2113,  2113,
    2113,  2113,  2113,  2113,  2113,  2113,  2113,  2113,  2113,  2113,
    2113,  2113,  2113,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  2113,  -246,  -246,  -246,   256,  1772,
    2113,   260,   236,  -246,    -6,  -246,  -246,  1133,  -246,    95,
    -246,  -246,  -246,  -246,  -246,  -246,    63,  2113,  -246,  -246,
    -246,  1706,  -246,  -246,  -246,  1409,   248,  1607,  2113,  2113,
    1807,   251,   581,   303,  2113,   261,  -246,  -246,  -246,    41,
    1607,  -246,  1536,  -246,  -246,  -246,  -246,   264,   895,  1840,
      96,  -246,    97,  2113,  -246,    83,    23,    79,    38,    58,
     258,   -31,   -31,   259,   259,   259,   259,   239,   239,    25,
      25,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   128,    39,
    -246,  -246,    98,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     242,  -246,  1607,  -246,   151,   152,  1873,    99,   267,   169,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,   265,   266,  -246,
     257,    97,  1168,  1906,  -246,  2113,  2113,  -246,  -246,   862,
    2113,  -246,  1640,  -246,  1607,  1607,  1939,   107,  1974,  2113,
    1607,  -246,  -246,  -246,  -246,   272,  -246,   271,  -246,  -246,
     284,   177,   283,  -246,  -246,   313,  -246,  1607,   185,  2007,
    2042,   108,   187,  -246,  -246,  -246,  -246,  -246,  -246,  1607,
    -246,  1607,  1607,   192,  1607,   203,  2078,   268,  -246,  -246,
    -246,  1607,  -246,  1607,  1607,   221,  -246,  -246,  -246,  -246,
    1607,  -246
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    26,    27,    28,    29,    30,    36,
      32,    35,    31,    37,    33,    34,    38,    39,    43,    44,
       0,    49,    50,    78,    89,     0,     0,   127,     0,     4,
       6,     8,     9,     0,    21,    23,    25,    40,     0,    41,
       0,    77,     0,    42,     5,     2,   244,   233,   235,   239,
     240,   241,   243,   242,     0,     0,   234,    71,     0,     0,
      92,    91,    88,     0,    74,    60,    62,     0,    51,     0,
       0,    72,     1,     7,     0,    15,     0,    53,    55,    20,
      22,    24,    48,     0,    18,     0,     0,    13,    76,     0,
       0,     0,   221,   222,   220,     0,   219,   223,   224,     0,
     165,   167,   180,   183,   185,   187,   189,   191,   193,   196,
     201,   204,   207,   211,     0,   213,   225,     3,     0,    68,
      87,   244,    84,   105,     0,    94,    96,     0,   106,    81,
     182,     0,   211,    93,    90,    79,     0,    59,    61,    46,
      52,     0,     0,     0,    63,    65,    69,     0,    17,     0,
      14,     0,     0,     0,    12,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,   139,
     141,     0,    23,    25,   144,   128,   129,   130,     0,   132,
     131,   133,     0,    19,    11,    55,     0,   217,   215,   214,
     114,     0,     0,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,   172,   173,   175,   174,
     176,   177,   178,   179,     0,   216,   232,   231,     0,     0,
       0,     0,     0,   104,   103,    85,    82,     0,    86,     0,
      83,    80,    75,    67,    58,    57,     0,     0,    73,    16,
      54,     0,    56,   108,    10,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,   160,   161,   164,     0,
       0,   142,     0,   143,   145,   138,   137,     0,     0,     0,
     115,   113,   117,     0,   166,   184,     0,   186,   188,   190,
     192,   194,   195,   199,   200,   197,   198,   203,   202,   205,
     206,   208,   209,   210,   168,   230,   228,   237,     0,     0,
     229,    70,    98,   102,    95,    97,   107,    64,    66,   111,
       0,    47,     0,   136,     0,     0,     0,     0,     0,     0,
     159,   163,   162,   134,   140,   218,   124,     0,     0,   120,
       0,   116,     0,     0,   212,     0,     0,   227,   226,     0,
       0,   109,     0,   135,     0,     0,     0,     0,     0,     0,
       0,   126,   118,   122,   125,     0,   121,     0,   181,   238,
       0,     0,     0,   110,   112,   146,   148,     0,     0,     0,
       0,     0,     0,   149,   123,   119,   100,   101,    99,     0,
     158,     0,     0,     0,     0,     0,     0,     0,   147,   157,
     156,     0,   154,     0,     0,     0,   150,   155,   153,   152,
       0,   151
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,    17,   345,    -1,  -246,   -18,    -3,     0,  -246,   225,
     193,  -246,  -246,  -246,   -60,  -246,   218,   -50,   -34,  -246,
     124,  -246,  -246,   250,   224,   -17,   330,   -21,  -246,  -245,
    -246,   136,  -246,    26,  -244,  -246,   191,  -210,   102,  -246,
    -108,  -246,  -246,    -2,   205,  -246,  -246,  -246,   -49,  -126,
    -246,   -29,  -118,  -246,   201,   182,   199,   202,   200,   122,
      31,   118,   119,  -101,    -9,  -246,  -246,     1,  -246,  -246
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,    31,    32,   171,    86,    34,    35,
      36,    37,   156,    38,    67,    76,    77,    68,    69,   143,
     144,    39,   119,    70,    71,    40,    41,    42,    62,   124,
     125,   126,   234,   127,   252,   320,   191,   281,   282,    43,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   100,
     224,   101,   131,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   308,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    33,    33,    61,    55,    99,   235,   319,    63,   142,
     238,   202,   203,   225,    57,   149,    78,   140,   242,    45,
      74,    72,    84,   243,   313,   275,   253,   194,    73,    33,
     130,   137,   138,   337,    79,    80,    81,    85,    87,   256,
      23,   134,   331,    73,    33,    82,    99,    18,    19,    24,
     132,    25,   145,   312,   263,    33,   204,   205,   123,   128,
      84,   190,    24,   118,   278,    84,   284,   183,   338,   185,
     274,   135,   117,   195,   279,   153,   154,   148,    23,   136,
     187,   188,   189,   184,   236,   239,   150,    24,   240,    25,
     151,    75,   140,   210,   211,   255,   276,   365,   304,   192,
     192,   345,   233,   307,   370,   132,   155,   130,   374,   301,
     302,   303,   130,   332,   212,   192,    46,   192,   269,    23,
     348,   196,    23,   198,    24,   253,   278,   132,   130,   318,
      25,    24,   132,    25,   185,   183,   279,    99,   137,   138,
      58,   141,   192,   245,   199,   193,   286,   246,   132,   323,
      59,   254,   190,   183,    47,    48,    49,    50,    51,    52,
      53,   340,   333,   197,   274,    54,   278,   342,   349,   280,
      64,   358,    80,    81,    24,   192,   279,   343,   350,   379,
     396,   309,   344,   192,   192,   132,   237,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   346,   140,   241,   347,   247,   324,
     325,   327,   249,   280,   353,   329,   257,    60,   130,    66,
     369,   -74,   -74,   136,   270,   367,   253,   192,   192,   145,
     354,   355,   372,   293,   294,   295,   296,   123,   132,   265,
     316,   226,   227,   228,    84,   192,   375,   376,   360,   258,
     130,    65,   383,   239,   259,   133,   387,   280,    66,    66,
      66,   192,    66,   192,   391,   229,   397,   152,   192,   390,
     132,   401,   146,   147,   132,   230,   173,   357,   123,   192,
     260,   398,   403,   399,   400,   264,   402,   231,    66,   266,
      65,    65,    65,   407,    65,   408,   409,   192,   200,   201,
     410,   267,   411,   206,   207,   208,   209,   378,   172,   381,
     382,   311,   147,   283,   130,   305,   368,   351,   352,   310,
      65,   130,   291,   292,   297,   298,   322,   299,   300,   270,
     393,   395,   328,   330,   132,    66,   132,   359,   363,   389,
     406,   132,   123,   335,   361,   362,    44,   405,    66,   123,
     128,   384,   385,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   386,   388,   173,   173,    65,   232,   250,
     317,   248,    88,   315,   244,   371,   272,   277,   287,    66,
      65,   223,   341,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   285,   288,   172,   172,   290,
     289,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,    65,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   121,   157,
     158,   159,   160,     0,   161,   162,   163,   164,   165,   166,
      21,    22,   167,    89,     0,     0,     0,    26,    66,     0,
       0,     0,     0,    90,    91,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,    48,    49,    50,
      51,    52,    53,    92,    93,    94,     0,    95,     0,   169,
      65,    83,   170,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,    96,     0,     0,     0,    97,    98,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   121,   157,   158,   159,   160,
       0,   161,   162,   163,   164,   165,   166,    21,    22,   167,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,    48,    49,    50,    51,    52,    53,
      92,    93,    94,     0,    95,     0,   169,     0,    83,   271,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
      96,     0,     0,     0,    97,    98,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   121,   157,   158,   159,   160,     0,   161,   162,
     163,   164,   165,   166,    21,    22,   167,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,    48,    49,    50,    51,    52,    53,    92,    93,    94,
       0,    95,     0,   169,     0,    83,   170,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,    96,     0,     0,
       0,    97,    98,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,     0,    95,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,    96,
       0,   120,     0,    97,    98,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,    47,
      48,    49,    50,    51,    52,    53,     0,    21,    22,     0,
      54,     0,     0,     0,    26,     0,     0,     0,     0,   122,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    27,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,    47,    48,    49,    50,    51,    52,    53,    21,    22,
       0,     0,    54,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,   278,     0,     0,     0,    26,
       0,     0,     0,     0,   336,   279,     0,    27,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,    21,    22,     0,     0,
       0,    24,     0,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    83,     0,     0,
     152,     0,     0,     0,     0,    27,    21,    22,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,   -60,     0,     0,     0,    27,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    26,     0,     0,
       0,   -62,     0,     0,     0,    27,    21,    22,     0,     0,
       0,     0,   314,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    27,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    21,    22,     0,   364,     0,     0,
      27,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,     0,    26,     0,
       0,     0,   141,     0,     0,     0,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    21,    22,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    26,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    21,    22,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,    26,   139,
       0,     0,     0,     0,     0,     0,    27,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,   321,     0,    46,   157,   158,   159,
     160,    27,   161,   162,   163,   164,   165,   166,     0,     0,
     167,    89,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    90,    91,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,   261,    48,    49,    50,    51,    52,
      53,    92,    93,    94,     0,    95,     0,   169,     0,   262,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,     0,    97,    98,    46,   157,   158,
     159,   160,     0,   161,   162,   163,   164,   165,   166,     0,
       0,   167,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,    48,    49,    50,    51,
      52,    53,    92,    93,    94,     0,    95,     0,   169,     0,
     262,   334,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,    97,    98,    46,   157,
     158,   159,   160,     0,   161,   162,   163,   164,   165,   166,
       0,     0,   167,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,   261,    48,    49,    50,
      51,    52,    53,    92,    93,    94,    89,    95,     0,   169,
       0,   262,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,    96,    46,     0,     0,    97,    98,    47,
      48,    49,    50,    51,    52,    53,    92,    93,    94,    89,
      95,     0,     0,     0,   251,   373,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,    96,    46,     0,     0,
      97,    98,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,    89,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,   129,     0,     0,     0,     0,    96,
      46,     0,     0,    97,    98,    47,    48,    49,    50,    51,
      52,    53,    92,    93,    94,    89,    95,     0,     0,     0,
     251,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,    96,    46,     0,     0,    97,    98,    47,    48,
      49,    50,    51,    52,    53,    92,    93,    94,    89,    95,
       0,   268,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,    96,     0,     0,    46,    97,
      98,    47,    48,    49,    50,    51,    52,    53,    92,    93,
      94,     0,    95,    89,     0,     0,     0,     0,     0,     0,
       0,   306,     0,    90,    91,     0,     0,     0,    96,     0,
       0,    46,    97,    98,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    92,    93,    94,    89,    95,     0,   326,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,    96,    46,     0,     0,    97,    98,    47,
      48,    49,    50,    51,    52,    53,    92,    93,    94,    89,
      95,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,   339,     0,     0,     0,     0,    96,    46,     0,     0,
      97,    98,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,    89,    95,     0,   356,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,    96,
      46,     0,     0,    97,    98,    47,    48,    49,    50,    51,
      52,    53,    92,    93,    94,    89,    95,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,   366,     0,     0,
       0,     0,    96,     0,     0,    46,    97,    98,    47,    48,
      49,    50,    51,    52,    53,    92,    93,    94,     0,    95,
      89,     0,     0,     0,     0,     0,     0,     0,   377,     0,
      90,    91,     0,     0,     0,    96,     0,     0,    46,    97,
      98,     0,     0,    47,    48,    49,    50,    51,    52,    53,
      92,    93,    94,    89,    95,     0,   380,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
      96,     0,     0,    46,    97,    98,    47,    48,    49,    50,
      51,    52,    53,    92,    93,    94,     0,    95,    89,     0,
       0,     0,     0,     0,     0,     0,   392,     0,    90,    91,
       0,     0,     0,    96,     0,     0,     0,    97,    98,    46,
       0,    47,    48,    49,    50,    51,    52,    53,    92,    93,
      94,     0,    95,     0,    89,     0,     0,     0,     0,     0,
       0,   394,     0,     0,    90,    91,     0,     0,    96,     0,
       0,     0,    97,    98,    46,     0,     0,    47,    48,    49,
      50,    51,    52,    53,    92,    93,    94,     0,    95,    89,
       0,     0,     0,     0,     0,     0,     0,   404,     0,    90,
      91,     0,     0,     0,    96,     0,     0,    46,    97,    98,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,    89,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,    96,
      46,     0,     0,    97,    98,    47,    48,    49,    50,    51,
      52,    53,    92,    93,    94,    89,   186,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,    96,     0,     0,     0,    97,    98,    47,    48,
      49,    50,    51,    52,    53,    92,    93,    94,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,    97,
      98
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    24,     3,    54,     1,   251,    25,    69,
       1,    42,    43,   114,    59,     1,    33,    67,   136,     2,
       1,     0,    40,   141,   234,     1,   152,    37,    29,    29,
      59,    65,    66,   278,    34,    35,    36,    40,    40,   157,
      59,    62,     1,    44,    44,    59,    95,    19,    20,    68,
      59,    70,    69,    59,   162,    55,    87,    88,    58,    58,
      78,    95,    68,    74,    70,    83,   192,    85,   278,    86,
     178,    79,    55,    83,    80,    78,    78,    73,    59,    77,
      89,    90,    91,    85,    79,    76,    72,    68,    79,    70,
      76,    72,   142,    68,    69,   155,    72,   342,   224,    76,
      76,    78,   123,   229,   349,   114,    74,   136,   352,   210,
     211,   212,   141,    72,    89,    76,    21,    76,   167,    59,
      81,    38,    59,    85,    68,   251,    70,   136,   157,   247,
      70,    68,   141,    70,   151,   153,    80,   186,   172,   173,
      70,    78,    76,    72,    86,    79,   195,    76,   157,   257,
      80,   153,   186,   171,    59,    60,    61,    62,    63,    64,
      65,   279,   270,    84,   272,    70,    70,    70,    70,   190,
      59,    72,   172,   173,    68,    76,    80,    80,    80,    72,
      72,   230,   283,    76,    76,   194,    76,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,    76,   255,    81,    79,    78,   258,
     259,   260,    73,   234,   322,   264,    78,    24,   247,    26,
     346,    75,    76,    77,    78,   343,   352,    76,    76,   246,
      79,    79,   350,   202,   203,   204,   205,   237,   247,    59,
     239,    46,    47,    48,   262,    76,   354,   355,    79,    70,
     279,    26,   360,    76,    70,    62,    79,   278,    65,    66,
      67,    76,    69,    76,    79,    70,    79,    77,    76,   377,
     279,    79,    75,    76,   283,    80,    83,   326,   278,    76,
      70,   389,    79,   391,   392,    70,   394,    92,    95,    72,
      65,    66,    67,   401,    69,   403,   404,    76,    40,    41,
      79,    72,   410,    44,    45,    66,    67,   356,    83,   358,
     359,    75,    76,    79,   343,    59,   345,    75,    76,    59,
      95,   350,   200,   201,   206,   207,    78,   208,   209,    78,
     379,   380,    29,    72,   343,   142,   345,    70,    81,    26,
      72,   350,   342,    79,    79,    79,     1,   396,   155,   349,
     349,    79,    81,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    79,    81,   172,   173,   142,   118,   151,
     246,   147,    42,   237,     1,   349,   171,   186,   196,   186,
     155,    77,   280,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   194,   197,   172,   173,   199,
     198,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,   186,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    74,   255,    -1,
      -1,    -1,    -1,    46,    47,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    -1,    72,
     255,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,     1,    -1,    90,    91,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    33,    34,    -1,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    33,    34,
      -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    33,    34,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    82,    33,    34,    -1,    -1,
      -1,    -1,    39,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    33,    34,    -1,    79,    -1,    -1,
      82,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    82,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    33,    34,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    33,    34,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    -1,    21,    22,    23,    24,
      25,    82,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    46,    47,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    86,    21,    -1,    -1,    90,    91,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    36,
      70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    86,    21,    -1,    -1,
      90,    91,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    81,    -1,    -1,    -1,    -1,    86,
      21,    -1,    -1,    90,    91,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    36,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    86,    21,    -1,    -1,    90,    91,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    36,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,
      91,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    46,    47,    -1,    -1,    -1,    86,    -1,
      -1,    21,    90,    91,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    86,    21,    -1,    -1,    90,    91,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    36,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    81,    -1,    -1,    -1,    -1,    86,    21,    -1,    -1,
      90,    91,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    86,
      21,    -1,    -1,    90,    91,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    36,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    21,    90,    91,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      46,    47,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,
      91,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    36,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    21,    90,    91,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    46,    47,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    46,    47,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    21,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    46,
      47,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    86,
      21,    -1,    -1,    90,    91,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    36,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    68,    70,    74,    82,    94,    95,
      96,    97,    98,   100,   101,   102,   103,   104,   106,   114,
     118,   119,   120,   132,    95,    94,    21,    59,    60,    61,
      62,    63,    64,    65,    70,   160,   162,    59,    70,    80,
     103,   120,   121,   118,    59,   102,   103,   107,   110,   111,
     116,   117,     0,    96,     1,    72,   108,   109,   118,   100,
     100,   100,    59,    74,    98,    99,   100,   136,   119,    36,
      46,    47,    66,    67,    68,    70,    86,    90,    91,   141,
     142,   144,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    94,    74,   115,
       1,    21,    79,   100,   122,   123,   124,   126,   160,    81,
     144,   145,   157,   103,   120,    79,    77,   111,   111,    75,
     110,    78,   107,   112,   113,   118,    75,    76,    73,     1,
      72,    76,    77,    99,   136,    74,   105,    22,    23,    24,
      25,    27,    28,    29,    30,    31,    32,    35,    59,    72,
      75,    99,   102,   103,   133,   134,   135,   136,   137,   138,
     139,   140,   141,    98,   136,   118,    70,   157,   157,   157,
     111,   129,    76,    79,    37,    83,    38,    84,    85,    86,
      40,    41,    42,    43,    87,    88,    44,    45,    66,    67,
      68,    69,    89,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    77,   143,   156,    46,    47,    48,    70,
      80,    92,   116,   120,   125,     1,    79,    76,     1,    76,
      79,    81,   145,   145,     1,    72,    76,    78,   117,    73,
     109,    74,   127,   142,   136,   107,   145,    78,    70,    70,
      70,    59,    74,   133,    70,    59,    72,    72,    72,   141,
      78,    75,   137,    75,   133,     1,    72,   129,    70,    80,
     120,   130,   131,    79,   142,   147,   141,   148,   149,   150,
     151,   152,   152,   153,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   156,   142,    59,    79,   142,   161,   141,
      59,    75,    59,   130,    39,   124,   160,   113,   145,   127,
     128,    75,    78,   133,   141,   141,    72,   141,    29,   141,
      72,     1,    72,   133,    75,    79,    79,   122,   130,    81,
     145,   131,    70,    80,   156,    78,    76,    79,    81,    70,
      80,    75,    76,   133,    79,    79,    72,   141,    72,    70,
      79,    79,    79,    81,    79,   122,    81,   145,   144,   142,
     122,   126,   145,    75,   127,   133,   133,    79,   141,    72,
      72,   141,   141,   133,    79,    81,    79,    79,    81,    26,
     133,    79,    79,   141,    79,   141,    72,    79,   133,   133,
     133,    79,   133,    79,    79,   141,    72,   133,   133,   133,
      79,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   135,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     144,   144,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   151,   152,   152,   152,   152,
     152,   153,   153,   153,   154,   154,   154,   155,   155,   155,
     155,   156,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   160,   161,   161,   162,
     162,   162,   162,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       4,     3,     3,     2,     3,     2,     4,     3,     1,     2,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     0,     1,
       1,     1,     2,     1,     3,     1,     3,     3,     3,     2,
       1,     2,     1,     1,     3,     1,     3,     2,     3,     3,
       3,     0,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     4,     4,     3,     2,     1,
       3,     2,     1,     2,     1,     3,     1,     3,     3,     6,
       6,     6,     3,     2,     1,     0,     1,     3,     1,     3,
       4,     1,     3,     2,     1,     1,     2,     1,     3,     4,
       2,     3,     3,     4,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     2,     1,
       4,     2,     3,     3,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     8,     7,     8,     7,     7,     6,     3,
       2,     2,     3,     3,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     3,
       3,     2,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 10:
#line 113 "bison.y"
                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[-3].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2089 "bison.tab.c"
    break;

  case 11:
#line 114 "bison.y"
                                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[-2].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2095 "bison.tab.c"
    break;

  case 12:
#line 115 "bison.y"
                                                                                                                                    {aux_tFuncion = obtenerTipo((yyvsp[-2].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2101 "bison.tab.c"
    break;

  case 13:
#line 116 "bison.y"
                                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[-1].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2107 "bison.tab.c"
    break;

  case 16:
#line 122 "bison.y"
                                                                                                                 {printf("[ERROR] Falta punto y coma\n");yyerrok;yyclearin;}
#line 2113 "bison.tab.c"
    break;

  case 17:
#line 123 "bison.y"
                                                                                                                {/*printf("[ERROR] Falta punto y coma\n")*/;yyerrok;yyclearin;}
#line 2119 "bison.tab.c"
    break;

  case 31:
#line 147 "bison.y"
                                                   {aux_tIdentificador="int";}
#line 2125 "bison.tab.c"
    break;

  case 32:
#line 148 "bison.y"
                                                               {aux_tIdentificador="char";}
#line 2131 "bison.tab.c"
    break;

  case 33:
#line 149 "bison.y"
                                                               {aux_tIdentificador="float";}
#line 2137 "bison.tab.c"
    break;

  case 34:
#line 150 "bison.y"
                                                               {aux_tIdentificador="double";}
#line 2143 "bison.tab.c"
    break;

  case 35:
#line 151 "bison.y"
                                                       {aux_tIdentificador="short";}
#line 2149 "bison.tab.c"
    break;

  case 36:
#line 152 "bison.y"
                                                               {aux_tIdentificador="void";}
#line 2155 "bison.tab.c"
    break;

  case 37:
#line 153 "bison.y"
                                                               {aux_tIdentificador="long";}
#line 2161 "bison.tab.c"
    break;

  case 38:
#line 154 "bison.y"
                                                               {aux_tIdentificador="signed";}
#line 2167 "bison.tab.c"
    break;

  case 39:
#line 155 "bison.y"
                                                                           {aux_tIdentificador="unsigned";}
#line 2173 "bison.tab.c"
    break;

  case 58:
#line 193 "bison.y"
                                                                                               {printf("[ERROR] Falta punto y coma\n");yyerrok;yyclearin;}
#line 2179 "bison.tab.c"
    break;

  case 78:
#line 238 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[0].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[0].cval)), aux_tIdentificador);}
#line 2185 "bison.tab.c"
    break;

  case 80:
#line 240 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-3].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-3].cval)), aux_tIdentificador);}
#line 2191 "bison.tab.c"
    break;

  case 81:
#line 241 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-2].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-2].cval)), aux_tIdentificador);}
#line 2197 "bison.tab.c"
    break;

  case 82:
#line 242 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2203 "bison.tab.c"
    break;

  case 83:
#line 243 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2209 "bison.tab.c"
    break;

  case 84:
#line 244 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-2].cval));}
#line 2215 "bison.tab.c"
    break;

  case 85:
#line 245 "bison.y"
                                                                                  {printf("[ERROR] Falta paréntesis de cierre\n"); yyclearin;}
#line 2221 "bison.tab.c"
    break;

  case 86:
#line 246 "bison.y"
                                                                                  {printf("[ERROR] Falta paréntesis de cierre\n"); yyclearin;}
#line 2227 "bison.tab.c"
    break;

  case 87:
#line 247 "bison.y"
                                                                                  {printf("[ERROR] Falta paréntesis de cierre\n"); yyclearin;}
#line 2233 "bison.tab.c"
    break;

  case 96:
#line 268 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2239 "bison.tab.c"
    break;

  case 97:
#line 269 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2245 "bison.tab.c"
    break;

  case 98:
#line 273 "bison.y"
                                                                                                                       {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[0].cval)));}
#line 2251 "bison.tab.c"
    break;

  case 99:
#line 274 "bison.y"
                                                                                                                        {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[-3].cval)));}
#line 2257 "bison.tab.c"
    break;

  case 100:
#line 275 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2263 "bison.tab.c"
    break;

  case 101:
#line 276 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2269 "bison.tab.c"
    break;

  case 106:
#line 286 "bison.y"
                                                                                 {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2275 "bison.tab.c"
    break;

  case 128:
#line 330 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
#line 2281 "bison.tab.c"
    break;

  case 129:
#line 331 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
#line 2287 "bison.tab.c"
    break;

  case 130:
#line 332 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
#line 2293 "bison.tab.c"
    break;

  case 131:
#line 333 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
#line 2299 "bison.tab.c"
    break;

  case 132:
#line 334 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
#line 2305 "bison.tab.c"
    break;

  case 133:
#line 335 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
#line 2311 "bison.tab.c"
    break;

  case 138:
#line 346 "bison.y"
                                                      {printf("[ERROR] Falta punto y coma\n");yyerrok;yyclearin;}
#line 2317 "bison.tab.c"
    break;

  case 163:
#line 382 "bison.y"
                                                          {printf("[ERROR] Falta punto y coma\n");yyerrok;yyclearin;}
#line 2323 "bison.tab.c"
    break;

  case 205:
#line 460 "bison.y"
                                                                                        {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[-2].cval)) , (yyvsp[-1].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);}
#line 2329 "bison.tab.c"
    break;

  case 206:
#line 461 "bison.y"
                                                                                        {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[-2].cval)) , (yyvsp[-1].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);}
#line 2335 "bison.tab.c"
    break;

  case 208:
#line 465 "bison.y"
                                                                                            {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[-2].cval)) , (yyvsp[-1].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);}
#line 2341 "bison.tab.c"
    break;

  case 209:
#line 466 "bison.y"
                                                                                            {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[-2].cval)) , (yyvsp[-1].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);}
#line 2347 "bison.tab.c"
    break;

  case 210:
#line 467 "bison.y"
                                                                                            {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[-2].cval)) , (yyvsp[-1].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);}
#line 2353 "bison.tab.c"
    break;

  case 227:
#line 494 "bison.y"
                                                                                    {comprobar_tipos_funcion(lista_funciones, (yyvsp[-3].cval));}
#line 2359 "bison.tab.c"
    break;


#line 2363 "bison.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 524 "bison.y"

int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        yydebug = 1;
    #endif
    
    if(argv[1] == NULL){
        printf("Debe especificar un archivo para analizar\n");
    }

    else{

        printf("Abriendo archivos\n");

        yyin = fopen(argv[1], "r");

        printf("Creando estructuras\n");

        analisisCorrecto = 1;
        identificadores_variables = inicializarListaIdentificadores(identificadores_variables);
        lista_funciones = inicializarListaFunciones(lista_funciones);   //especifico tp5

        identificadores_funciones = inicializarListaIdentificadores(identificadores_funciones);
        lista_sentencias          = inicializarListaSentencias     (lista_sentencias);
        lista_parametros          = inicializarListaIdentificadores(lista_parametros);

        printf("Comenzando anlisis lexico y sintactico\n");

        yyparse();
        fclose(yyin);

        if(analisisCorrecto){

            printf("Imprimiendo reporte\n");

            crearListadoIdentificadores(identificadores_variables, "VARIABLES DECLARADAS");
            crearListadoIdentificadores(identificadores_funciones, "FUNCIONES DECLARADAS");
            mostrarListadoFunciones(lista_funciones);
            //crearListadoSentencias     (lista_sentencias,          "SENTENCIAS");
        }

    }



    return 0;
}

int yyerror(const char *msg)
{
	printf("\n[ERROR] Fallo el analisis en la linea: %d %s\n", yylineno, msg);
	analisisCorrecto = 0;
	return 0;
}
