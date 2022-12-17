/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"

    #include <stdio.h> 
    #include "../inc/parser.h"
    #include "../inc/sym_table.h" 
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    extern int line_num;
    extern char* Curr_Type;
    extern bool Curr_Const;
    extern char* Curr_Scope;
    int division=0;
    void yyerror();
    int yylex();

#line 87 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_VAL = 3,                    /* INT_VAL  */
  YYSYMBOL_NEG_INT_VAL = 4,                /* NEG_INT_VAL  */
  YYSYMBOL_FLOAT_VAL = 5,                  /* FLOAT_VAL  */
  YYSYMBOL_NEG_FLOAT_VAL = 6,              /* NEG_FLOAT_VAL  */
  YYSYMBOL_BOOL_VAL = 7,                   /* BOOL_VAL  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_ADD = 9,                        /* ADD  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_MULT = 11,                      /* MULT  */
  YYSYMBOL_SUB = 12,                       /* SUB  */
  YYSYMBOL_LANG = 13,                      /* LANG  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_INT = 15,                       /* INT  */
  YYSYMBOL_FLOAT = 16,                     /* FLOAT  */
  YYSYMBOL_CONST = 17,                     /* CONST  */
  YYSYMBOL_BOOL = 18,                      /* BOOL  */
  YYSYMBOL_START = 19,                     /* START  */
  YYSYMBOL_END = 20,                       /* END  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_RET = 23,                       /* RET  */
  YYSYMBOL_FUNC = 24,                      /* FUNC  */
  YYSYMBOL_ASSIGN = 25,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 26,                     /* EQUAL  */
  YYSYMBOL_GREATER = 27,                   /* GREATER  */
  YYSYMBOL_GREATER_EQ = 28,                /* GREATER_EQ  */
  YYSYMBOL_LESS = 29,                      /* LESS  */
  YYSYMBOL_LESS_EQ = 30,                   /* LESS_EQ  */
  YYSYMBOL_INSTR_END = 31,                 /* INSTR_END  */
  YYSYMBOL_SEP = 32,                       /* SEP  */
  YYSYMBOL_TYPE_SEP = 33,                  /* TYPE_SEP  */
  YYSYMBOL_LEFT_PAR = 34,                  /* LEFT_PAR  */
  YYSYMBOL_RIGHT_PAR = 35,                 /* RIGHT_PAR  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_S = 37,                         /* S  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_variables_opt = 39,             /* variables_opt  */
  YYSYMBOL_list_var = 40,                  /* list_var  */
  YYSYMBOL_var_names = 41,                 /* var_names  */
  YYSYMBOL_var_type = 42,                  /* var_type  */
  YYSYMBOL_list_const = 43,                /* list_const  */
  YYSYMBOL_const_names = 44,               /* const_names  */
  YYSYMBOL_const_type = 45,                /* const_type  */
  YYSYMBOL_math = 46,                      /* math  */
  YYSYMBOL_singletons = 47,                /* singletons  */
  YYSYMBOL_neg_singletons = 48,            /* neg_singletons  */
  YYSYMBOL_idf = 49,                       /* idf  */
  YYSYMBOL_condition = 50,                 /* condition  */
  YYSYMBOL_relational_operators = 51,      /* relational_operators  */
  YYSYMBOL_types = 52,                     /* types  */
  YYSYMBOL_instructions_opt = 53,          /* instructions_opt  */
  YYSYMBOL_assign = 54,                    /* assign  */
  YYSYMBOL_if = 55,                        /* if  */
  YYSYMBOL_while = 56,                     /* while  */
  YYSYMBOL_functions_opt = 57,             /* functions_opt  */
  YYSYMBOL_function_declaration = 58,      /* function_declaration  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_return = 60                     /* return  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    50,    61,    62,    63,    67,    68,    69,
      71,    72,    74,    75,    76,    82,    83,    84,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    97,    98,
      99,   102,   103,   104,   106,   110,   111,   112,   113,   115,
     119,   120,   121,   122,   124,   128,   129,   130,   131,   132,
     133,   135,   139,   140,   141,   142,   143,   144,   147,   151,
     155,   159,   163,   167,   171,   179,   179,   181,   181,   181,
     181,   181,   183,   183,   183,   187,   187,   187,   187,   189,
     198,   200,   204,   204,   206,   206,   208,   208,   208,   208
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_VAL",
  "NEG_INT_VAL", "FLOAT_VAL", "NEG_FLOAT_VAL", "BOOL_VAL", "IDENTIFIER",
  "ADD", "DIV", "MULT", "SUB", "LANG", "VAR", "INT", "FLOAT", "CONST",
  "BOOL", "START", "END", "IF", "WHILE", "RET", "FUNC", "ASSIGN", "EQUAL",
  "GREATER", "GREATER_EQ", "LESS", "LESS_EQ", "INSTR_END", "SEP",
  "TYPE_SEP", "LEFT_PAR", "RIGHT_PAR", "$accept", "S", "$@1",
  "variables_opt", "list_var", "var_names", "var_type", "list_const",
  "const_names", "const_type", "math", "singletons", "neg_singletons",
  "idf", "condition", "relational_operators", "types", "instructions_opt",
  "assign", "if", "while", "functions_opt", "function_declaration", "$@2",
  "return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,     1,    28,    81,   -95,   -95,   -95,   -95,    11,   -95,
      81,    34,    38,   -95,   -95,    48,    50,     6,    83,   -95,
      48,   -95,    48,    48,    76,    68,    85,   -95,     8,   -95,
     -95,   -95,   -95,    87,    86,    88,    90,    92,    95,    97,
     -95,    67,    84,   100,   101,    98,    98,   113,     8,     8,
       8,     8,   109,   117,   -95,   109,   -95,   109,   -95,   109,
     -95,   109,   -95,   -95,   -95,   -95,    66,    66,   116,   118,
     -95,   -95,   -95,   -95,   115,   111,   -95,    89,   -95,   -95,
     -95,   -95,    99,    75,   102,    79,    56,   108,   -95,   -95,
     -95,    -3,     8,     8,    70,   120,   110,   112,   114,    46,
      66,    66,    46,    66,    66,    46,    46,    66,    66,    46,
      66,    66,    46,    46,    66,    66,   134,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,    66,   124,   126,   119,   121,
     122,   123,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   125,   -95,   -95,   -95,   -95,   -95,   -95,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    82,     1,    73,    74,    72,     0,     2,
      82,     0,     0,    83,    84,     4,     0,     0,     0,     5,
       7,     6,    15,     4,     0,     0,     0,    10,    75,     8,
       9,    17,    16,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,    75,    75,
      75,    75,     0,     0,    18,     0,    19,     0,    22,     0,
      23,     0,    26,    12,    13,    14,     0,     0,     0,     0,
       3,    76,    77,    78,     0,     0,    20,     0,    21,    24,
      25,    27,    34,    44,    39,    51,    58,     0,    31,    32,
      33,     0,    75,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    79,    67,
      68,    69,    70,    71,    66,     0,     0,     0,     0,     0,
       0,     0,    85,    28,    29,    30,    35,    36,    38,    37,
      45,    46,    50,    49,    47,    48,    40,    41,    43,    42,
      52,    53,    57,    56,    54,    55,    61,    62,    64,    63,
      60,     0,    80,    81,    86,    87,    88,    89,    65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   128,    41,   130,   -95,    94,    -2,    57,
     -67,   -92,    61,   -94,   103,   -95,   -95,   -47,   -95,   -95,
     -95,   138,   -95,   -95,   -95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    12,    18,    19,    20,    27,    21,    22,    54,
      87,    88,    89,    90,    68,   125,     8,    47,    48,    49,
      50,     9,    10,    16,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      91,    71,    72,    73,    74,   137,     1,   136,   141,     3,
     140,   145,   147,   144,   146,   151,    44,   150,   155,   157,
     154,   156,   160,   119,   120,   121,   122,   123,     4,    45,
      46,    24,   124,   138,   139,    11,   142,   143,    25,    26,
     148,   149,    14,   152,   153,   126,   127,   158,   159,    82,
      76,    84,    15,    78,    86,    79,    17,    80,   161,    81,
      83,    29,    85,    31,    23,   113,   114,   115,   116,    82,
      83,    84,    85,   128,    86,   129,    39,   130,   131,    34,
      35,    36,    37,    38,   102,   103,   104,   105,   109,   110,
     111,   112,    56,    58,    60,    62,     5,     6,    63,     7,
      41,    42,    28,    43,    96,    97,    51,    98,    99,   100,
     101,   106,   107,   108,    30,    64,    32,    75,    52,    53,
      55,    53,    57,    53,    59,    53,    66,    61,    53,    25,
      26,    65,    67,    70,    77,    92,    24,    93,    94,   118,
     132,   133,    86,   134,   162,   135,   163,   117,    13,    69,
     164,    33,   165,   166,   167,    40,     0,     0,     0,     0,
     168
};

static const yytype_int8 yycheck[] =
{
      67,    48,    49,    50,    51,    99,    13,    99,   102,     8,
     102,   105,   106,   105,   106,   109,     8,   109,   112,   113,
     112,   113,   116,    26,    27,    28,    29,    30,     0,    21,
      22,    25,    35,   100,   101,    24,   103,   104,    32,    33,
     107,   108,     8,   110,   111,    92,    93,   114,   115,     3,
      52,     5,    14,    55,     8,    57,     8,    59,   125,    61,
       4,    20,     6,    22,    14,     9,    10,    11,    12,     3,
       4,     5,     6,     3,     8,     5,     8,     7,     8,     3,
       4,     5,     6,     7,     9,    10,    11,    12,     9,    10,
      11,    12,    35,    36,    37,    38,    15,    16,    31,    18,
      15,    16,    19,    18,    15,    16,    19,    18,     9,    10,
      11,     9,    10,    11,    20,    31,    22,     8,    32,    33,
      32,    33,    32,    33,    32,    33,    25,    32,    33,    32,
      33,    31,    34,    20,    17,    19,    25,    19,    23,    31,
      20,    31,     8,    31,    20,    31,    20,    86,    10,    46,
      31,    23,    31,    31,    31,    25,    -1,    -1,    -1,    -1,
      35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    37,     8,     0,    15,    16,    18,    52,    57,
      58,    24,    38,    57,     8,    14,    59,     8,    39,    40,
      41,    43,    44,    14,    25,    32,    33,    42,    19,    40,
      43,    40,    43,    39,     3,     4,     5,     6,     7,     8,
      41,    15,    16,    18,     8,    21,    22,    53,    54,    55,
      56,    19,    32,    33,    45,    32,    45,    32,    45,    32,
      45,    32,    45,    31,    31,    31,    25,    34,    50,    50,
      20,    53,    53,    53,    53,     8,    44,    17,    44,    44,
      44,    44,     3,     4,     5,     6,     8,    46,    47,    48,
      49,    46,    19,    19,    23,    60,    15,    16,    18,     9,
      10,    11,     9,    10,    11,    12,     9,    10,    11,     9,
      10,    11,    12,     9,    10,    11,    12,    48,    31,    26,
      27,    28,    29,    30,    35,    51,    53,    53,     3,     5,
       7,     8,    20,    31,    31,    31,    47,    49,    46,    46,
      47,    49,    46,    46,    47,    49,    47,    49,    46,    46,
      47,    49,    46,    46,    47,    49,    47,    49,    46,    46,
      49,    46,    20,    20,    31,    31,    31,    31,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    38,    37,    39,    39,    39,    40,    40,    40,
      41,    41,    42,    42,    42,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    45,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    52,    52,    52,    53,    53,    53,    53,    54,
      55,    56,    57,    57,    59,    58,    60,    60,    60,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     0,     1,     1,     1,     2,     2,
       2,     3,     3,     3,     3,     1,     2,     2,     4,     4,
       5,     5,     4,     4,     5,     5,     4,     5,     4,     4,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     2,
       3,     3,     3,     3,     3,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     2,     2,     4,
       5,     5,     0,     2,     0,    10,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* $@1: %empty  */
#line 50 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                 {Curr_Scope = "main"; puts("change current scope to main1");}
#line 1511 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 3: /* S: LANG IDENTIFIER functions_opt $@1 VAR variables_opt START instructions_opt END  */
#line 50 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                                                                                                             {printf("yay\n");YYACCEPT;}
#line 1517 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 10: /* var_names: IDENTIFIER var_type  */
#line 71 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                 {puts((yyvsp[-1].u_idf)); Sym_List_Add((yyvsp[-1].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1523 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 11: /* var_names: IDENTIFIER SEP var_names  */
#line 72 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                    {puts((yyvsp[-2].u_idf)); Sym_List_Add((yyvsp[-2].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1529 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 12: /* var_type: TYPE_SEP INT INSTR_END  */
#line 74 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                 {Curr_Type = "int"; Curr_Const = false;}
#line 1535 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 13: /* var_type: TYPE_SEP FLOAT INSTR_END  */
#line 75 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                   {Curr_Type = "float"; Curr_Const = false;}
#line 1541 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 14: /* var_type: TYPE_SEP BOOL INSTR_END  */
#line 76 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                  {Curr_Type = "bool"; Curr_Const = false;}
#line 1547 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 18: /* const_names: IDENTIFIER ASSIGN INT_VAL const_type  */
#line 86 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-3].u_idf)); Sym_List_Add((yyvsp[-3].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1553 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 19: /* const_names: IDENTIFIER ASSIGN NEG_INT_VAL const_type  */
#line 87 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-3].u_idf)); Sym_List_Add((yyvsp[-3].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1559 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 20: /* const_names: IDENTIFIER ASSIGN INT_VAL SEP const_names  */
#line 88 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-4].u_idf)); Sym_List_Add((yyvsp[-4].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1565 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 21: /* const_names: IDENTIFIER ASSIGN NEG_INT_VAL SEP const_names  */
#line 89 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-4].u_idf)); Sym_List_Add((yyvsp[-4].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1571 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 22: /* const_names: IDENTIFIER ASSIGN FLOAT_VAL const_type  */
#line 90 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-3].u_idf)); Sym_List_Add((yyvsp[-3].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1577 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 23: /* const_names: IDENTIFIER ASSIGN NEG_FLOAT_VAL const_type  */
#line 91 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-3].u_idf)); Sym_List_Add((yyvsp[-3].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1583 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 24: /* const_names: IDENTIFIER ASSIGN FLOAT_VAL SEP const_names  */
#line 92 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-4].u_idf)); Sym_List_Add((yyvsp[-4].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1589 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 25: /* const_names: IDENTIFIER ASSIGN NEG_FLOAT_VAL SEP const_names  */
#line 93 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-4].u_idf)); Sym_List_Add((yyvsp[-4].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1595 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 26: /* const_names: IDENTIFIER ASSIGN BOOL_VAL const_type  */
#line 94 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-3].u_idf)); Sym_List_Add((yyvsp[-3].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1601 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 27: /* const_names: IDENTIFIER ASSIGN BOOL_VAL SEP const_names  */
#line 95 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                                               {puts((yyvsp[-4].u_idf)); Sym_List_Add((yyvsp[-4].u_idf), "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
#line 1607 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 28: /* const_type: TYPE_SEP CONST INT INSTR_END  */
#line 97 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                         {Curr_Type = "int"; Curr_Const = true;}
#line 1613 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 29: /* const_type: TYPE_SEP CONST FLOAT INSTR_END  */
#line 98 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                           {Curr_Type = "float"; Curr_Const = true;}
#line 1619 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 30: /* const_type: TYPE_SEP CONST BOOL INSTR_END  */
#line 99 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                          {Curr_Type = "bool"; Curr_Const = true;}
#line 1625 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 34: /* singletons: INT_VAL  */
#line 106 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                    {
            if(division == 1 && (yyvsp[0].u_val_int) == 0)
                puts("division par 0");
            }
#line 1634 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 38: /* singletons: INT_VAL DIV math  */
#line 113 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                             {division=1;}
#line 1640 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 39: /* singletons: FLOAT_VAL  */
#line 115 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                      {
            if(division == 1 && (yyvsp[0].u_val_float) == 0)
                puts("division par 0");
            }
#line 1649 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 43: /* singletons: FLOAT_VAL DIV math  */
#line 122 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                               {division=1;}
#line 1655 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 44: /* neg_singletons: NEG_INT_VAL  */
#line 124 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                            {
            if(division == 1 && (yyvsp[0].u_val_int) == 0)
                puts("division par 0");
            }
#line 1664 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 50: /* neg_singletons: NEG_INT_VAL DIV math  */
#line 133 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                     {division=1;}
#line 1670 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 51: /* neg_singletons: NEG_FLOAT_VAL  */
#line 135 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                              {
            if(division == 1 && (yyvsp[0].u_val_float) == 0)
                puts("division par 0");
            }
#line 1679 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 57: /* neg_singletons: NEG_FLOAT_VAL DIV math  */
#line 144 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                       {division=1;}
#line 1685 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 58: /* idf: IDENTIFIER  */
#line 147 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                {
     if(search_ID(strdup((yyvsp[0].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[0].u_idf));
}
#line 1694 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 59: /* idf: IDENTIFIER neg_singletons  */
#line 151 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                               {
     if(search_ID(strdup((yyvsp[-1].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-1].u_idf));
}
#line 1703 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 60: /* idf: IDENTIFIER SUB idf  */
#line 155 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                        {
     if(search_ID(strdup((yyvsp[-2].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-2].u_idf));
}
#line 1712 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 61: /* idf: IDENTIFIER ADD singletons  */
#line 159 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                               {
     if(search_ID(strdup((yyvsp[-2].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-2].u_idf));
}
#line 1721 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 62: /* idf: IDENTIFIER ADD idf  */
#line 163 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                        {
     if(search_ID(strdup((yyvsp[-2].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-2].u_idf));
}
#line 1730 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 63: /* idf: IDENTIFIER MULT math  */
#line 167 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                          {
     if(search_ID(strdup((yyvsp[-2].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-2].u_idf));
}
#line 1739 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 64: /* idf: IDENTIFIER DIV math  */
#line 171 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                         {
    {division=1;}
     if(search_ID(strdup((yyvsp[-2].u_idf)))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-2].u_idf));
}
#line 1749 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 79: /* assign: IDENTIFIER ASSIGN math INSTR_END  */
#line 190 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
{
    Sym* temp=search_ID(strdup((yyvsp[-3].u_idf)));
    if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,(yyvsp[-3].u_idf));
    if(temp!=NULL && is_constant(strdup((yyvsp[-3].u_idf))))
        printf("ERROR !In line %d the variable \"%s\" is a constant, you cannot change it.\n",line_num,(yyvsp[-3].u_idf));
}
#line 1761 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;

  case 84: /* $@2: %empty  */
#line 206 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"
                                            {Curr_Scope = (yyvsp[0].u_idf); printf("change current scope to %s\n", (yyvsp[0].u_idf));}
#line 1767 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"
    break;


#line 1771 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 209 "/home/rachid/Bureau/tp_compil_final/compil_final/test_Compil/src/parser.y"


/* void yyerror(){ */
    /* printf("syntax error at line %d\n", line_num); */
/* } */
