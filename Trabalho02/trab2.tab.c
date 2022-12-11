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
#line 1 "trab2.y"


#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
extern int count_label;

void yyerror(const char* s);

#line 84 "trab2.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_TOKEN = 258,               /* INT_TOKEN  */
    FLOAT_TOKEN = 259,             /* FLOAT_TOKEN  */
    INTEGER_TYPE_TOKEN = 260,      /* INTEGER_TYPE_TOKEN  */
    FLOAT_TYPE_TOKEN = 261,        /* FLOAT_TYPE_TOKEN  */
    VOID_TYPE_TOKEN = 262,         /* VOID_TYPE_TOKEN  */
    BOOL_TYPE_TOKEN = 263,         /* BOOL_TYPE_TOKEN  */
    STRING_TYPE_TOKEN = 264,       /* STRING_TYPE_TOKEN  */
    TRUE_TOKEN = 265,              /* TRUE_TOKEN  */
    FALSE_TOKEN = 266,             /* FALSE_TOKEN  */
    IF_TOKEN = 267,                /* IF_TOKEN  */
    ELSE_TOKEN = 268,              /* ELSE_TOKEN  */
    WHILE_TOKEN = 269,             /* WHILE_TOKEN  */
    RETURN_TOKEN = 270,            /* RETURN_TOKEN  */
    ADD_TOKEN = 271,               /* ADD_TOKEN  */
    SUB_TOKEN = 272,               /* SUB_TOKEN  */
    MULT_TOKEN = 273,              /* MULT_TOKEN  */
    DIV_TOKEN = 274,               /* DIV_TOKEN  */
    BIGGER_TOKEN = 275,            /* BIGGER_TOKEN  */
    SMALLER_EQUAL_TOKEN = 276,     /* SMALLER_EQUAL_TOKEN  */
    BIGGER_EQUAL_TOKEN = 277,      /* BIGGER_EQUAL_TOKEN  */
    SMALLER_TOKEN = 278,           /* SMALLER_TOKEN  */
    COMPARE_TOKEN = 279,           /* COMPARE_TOKEN  */
    DIFF_TOKEN = 280,              /* DIFF_TOKEN  */
    EQUAL_TOKEN = 281,             /* EQUAL_TOKEN  */
    CHAR_TOKEN = 282,              /* CHAR_TOKEN  */
    ID_TOKEN = 283,                /* ID_TOKEN  */
    OPEN_BRACKET_TOKEN = 284,      /* OPEN_BRACKET_TOKEN  */
    CLOSE_BRACKET_TOKEN = 285,     /* CLOSE_BRACKET_TOKEN  */
    OPEN_PARENTHESES_TOKEN = 286,  /* OPEN_PARENTHESES_TOKEN  */
    CLOSE_PARENTHESES_TOKEN = 287, /* CLOSE_PARENTHESES_TOKEN  */
    OPEN_KEYS_TOKEN = 288,         /* OPEN_KEYS_TOKEN  */
    CLOSE_KEYS_TOKEN = 289,        /* CLOSE_KEYS_TOKEN  */
    COMMA_TOKEN = 290,             /* COMMA_TOKEN  */
    SEMICOLON_TOKEN = 291,         /* SEMICOLON_TOKEN  */
    SYMBOLS_TOKEN = 292            /* SYMBOLS_TOKEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "trab2.y"

	int ival;
	float fval;
	char cval;
	char *sval;

#line 175 "trab2.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_TOKEN = 3,                  /* INT_TOKEN  */
  YYSYMBOL_FLOAT_TOKEN = 4,                /* FLOAT_TOKEN  */
  YYSYMBOL_INTEGER_TYPE_TOKEN = 5,         /* INTEGER_TYPE_TOKEN  */
  YYSYMBOL_FLOAT_TYPE_TOKEN = 6,           /* FLOAT_TYPE_TOKEN  */
  YYSYMBOL_VOID_TYPE_TOKEN = 7,            /* VOID_TYPE_TOKEN  */
  YYSYMBOL_BOOL_TYPE_TOKEN = 8,            /* BOOL_TYPE_TOKEN  */
  YYSYMBOL_STRING_TYPE_TOKEN = 9,          /* STRING_TYPE_TOKEN  */
  YYSYMBOL_TRUE_TOKEN = 10,                /* TRUE_TOKEN  */
  YYSYMBOL_FALSE_TOKEN = 11,               /* FALSE_TOKEN  */
  YYSYMBOL_IF_TOKEN = 12,                  /* IF_TOKEN  */
  YYSYMBOL_ELSE_TOKEN = 13,                /* ELSE_TOKEN  */
  YYSYMBOL_WHILE_TOKEN = 14,               /* WHILE_TOKEN  */
  YYSYMBOL_RETURN_TOKEN = 15,              /* RETURN_TOKEN  */
  YYSYMBOL_ADD_TOKEN = 16,                 /* ADD_TOKEN  */
  YYSYMBOL_SUB_TOKEN = 17,                 /* SUB_TOKEN  */
  YYSYMBOL_MULT_TOKEN = 18,                /* MULT_TOKEN  */
  YYSYMBOL_DIV_TOKEN = 19,                 /* DIV_TOKEN  */
  YYSYMBOL_BIGGER_TOKEN = 20,              /* BIGGER_TOKEN  */
  YYSYMBOL_SMALLER_EQUAL_TOKEN = 21,       /* SMALLER_EQUAL_TOKEN  */
  YYSYMBOL_BIGGER_EQUAL_TOKEN = 22,        /* BIGGER_EQUAL_TOKEN  */
  YYSYMBOL_SMALLER_TOKEN = 23,             /* SMALLER_TOKEN  */
  YYSYMBOL_COMPARE_TOKEN = 24,             /* COMPARE_TOKEN  */
  YYSYMBOL_DIFF_TOKEN = 25,                /* DIFF_TOKEN  */
  YYSYMBOL_EQUAL_TOKEN = 26,               /* EQUAL_TOKEN  */
  YYSYMBOL_CHAR_TOKEN = 27,                /* CHAR_TOKEN  */
  YYSYMBOL_ID_TOKEN = 28,                  /* ID_TOKEN  */
  YYSYMBOL_OPEN_BRACKET_TOKEN = 29,        /* OPEN_BRACKET_TOKEN  */
  YYSYMBOL_CLOSE_BRACKET_TOKEN = 30,       /* CLOSE_BRACKET_TOKEN  */
  YYSYMBOL_OPEN_PARENTHESES_TOKEN = 31,    /* OPEN_PARENTHESES_TOKEN  */
  YYSYMBOL_CLOSE_PARENTHESES_TOKEN = 32,   /* CLOSE_PARENTHESES_TOKEN  */
  YYSYMBOL_OPEN_KEYS_TOKEN = 33,           /* OPEN_KEYS_TOKEN  */
  YYSYMBOL_CLOSE_KEYS_TOKEN = 34,          /* CLOSE_KEYS_TOKEN  */
  YYSYMBOL_COMMA_TOKEN = 35,               /* COMMA_TOKEN  */
  YYSYMBOL_SEMICOLON_TOKEN = 36,           /* SEMICOLON_TOKEN  */
  YYSYMBOL_SYMBOLS_TOKEN = 37,             /* SYMBOLS_TOKEN  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_programa = 39,                  /* programa  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_declaracao_lista = 41,       /* declaracao-lista  */
  YYSYMBOL_declaracao = 42,                /* declaracao  */
  YYSYMBOL_43_var_declaracao = 43,         /* var-declaracao  */
  YYSYMBOL_44_tipo_especificador = 44,     /* tipo-especificador  */
  YYSYMBOL_45_fun_declaracao = 45,         /* fun-declaracao  */
  YYSYMBOL_params = 46,                    /* params  */
  YYSYMBOL_47_param_lista = 47,            /* param-lista  */
  YYSYMBOL_param = 48,                     /* param  */
  YYSYMBOL_49_composto_decl = 49,          /* composto-decl  */
  YYSYMBOL_50_local_declaracoes = 50,      /* local-declaracoes  */
  YYSYMBOL_51_statement_lista = 51,        /* statement-lista  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_53_expressao_decl = 53,         /* expressao-decl  */
  YYSYMBOL_54_selecao_decl = 54,           /* selecao-decl  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_56_3 = 56,                      /* $@3  */
  YYSYMBOL_57_4 = 57,                      /* $@4  */
  YYSYMBOL_58_iteracao_decl = 58,          /* iteracao-decl  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_61_retorno_decl = 61,           /* retorno-decl  */
  YYSYMBOL_expressao = 62,                 /* expressao  */
  YYSYMBOL_var = 63,                       /* var  */
  YYSYMBOL_64_simples_expressao = 64,      /* simples-expressao  */
  YYSYMBOL_relacional = 65,                /* relacional  */
  YYSYMBOL_66_soma_expressao = 66,         /* soma-expressao  */
  YYSYMBOL_soma = 67,                      /* soma  */
  YYSYMBOL_termo = 68,                     /* termo  */
  YYSYMBOL_mult = 69,                      /* mult  */
  YYSYMBOL_fator = 70,                     /* fator  */
  YYSYMBOL_ativacao = 71,                  /* ativacao  */
  YYSYMBOL_args = 72,                      /* args  */
  YYSYMBOL_73_arg_lista = 73,              /* arg-lista  */
  YYSYMBOL_vazio = 74                      /* vazio  */
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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   97

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  109

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    50,    53,    54,    57,    58,    61,    62,
      65,    66,    69,    72,    73,    76,    77,    80,    81,    84,
      87,    88,    91,    92,    95,    96,    97,    98,    99,   102,
     103,   106,   106,   107,   107,   107,   110,   110,   110,   113,
     114,   117,   118,   121,   122,   125,   126,   129,   130,   131,
     132,   133,   134,   137,   138,   141,   142,   145,   146,   149,
     150,   153,   154,   155,   156,   159,   162,   163,   166,   167,
     169
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_TOKEN",
  "FLOAT_TOKEN", "INTEGER_TYPE_TOKEN", "FLOAT_TYPE_TOKEN",
  "VOID_TYPE_TOKEN", "BOOL_TYPE_TOKEN", "STRING_TYPE_TOKEN", "TRUE_TOKEN",
  "FALSE_TOKEN", "IF_TOKEN", "ELSE_TOKEN", "WHILE_TOKEN", "RETURN_TOKEN",
  "ADD_TOKEN", "SUB_TOKEN", "MULT_TOKEN", "DIV_TOKEN", "BIGGER_TOKEN",
  "SMALLER_EQUAL_TOKEN", "BIGGER_EQUAL_TOKEN", "SMALLER_TOKEN",
  "COMPARE_TOKEN", "DIFF_TOKEN", "EQUAL_TOKEN", "CHAR_TOKEN", "ID_TOKEN",
  "OPEN_BRACKET_TOKEN", "CLOSE_BRACKET_TOKEN", "OPEN_PARENTHESES_TOKEN",
  "CLOSE_PARENTHESES_TOKEN", "OPEN_KEYS_TOKEN", "CLOSE_KEYS_TOKEN",
  "COMMA_TOKEN", "SEMICOLON_TOKEN", "SYMBOLS_TOKEN", "$accept", "programa",
  "$@1", "declaracao-lista", "declaracao", "var-declaracao",
  "tipo-especificador", "fun-declaracao", "params", "param-lista", "param",
  "composto-decl", "local-declaracoes", "statement-lista", "statement",
  "expressao-decl", "selecao-decl", "$@2", "$@3", "$@4", "iteracao-decl",
  "$@5", "$@6", "retorno-decl", "expressao", "var", "simples-expressao",
  "relacional", "soma-expressao", "soma", "termo", "mult", "fator",
  "ativacao", "args", "arg-lista", "vazio", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -92,    24,    46,   -92,   -92,   -92,    46,   -92,   -92,   -27,
     -92,   -92,    19,    22,    46,   -92,     8,     2,    26,    17,
     -92,   -92,    18,    30,    28,    46,   -92,    34,   -92,   -92,
     -92,   -92,    46,   -92,    41,     0,    20,   -92,    31,   -92,
       1,   -10,    14,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,    40,    51,   -92,    50,   -13,   -92,   -92,    14,    47,
     -92,    43,    14,    14,    48,   -92,    14,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,    14,    14,   -92,   -92,    14,
      49,    14,   -92,    52,   -92,    53,    54,   -92,   -92,   -92,
      -6,   -13,   -92,   -92,    55,   -92,   -92,    14,    32,    32,
     -92,   -92,   -92,   -92,    32,    70,   -92,    32,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    10,    11,     3,     5,     6,     0,
       7,     4,     0,     0,    70,     8,     0,     0,     0,    13,
      16,    14,     0,    17,     0,     0,     9,     0,    21,    12,
      15,    18,    23,    20,     0,     0,     0,    64,     0,    36,
       0,    43,     0,    19,    30,    25,    22,    24,    26,    27,
      28,     0,    62,    42,    46,    54,    58,    63,     0,     0,
      39,     0,     0,    67,     0,    29,     0,    55,    56,    49,
      47,    50,    48,    51,    52,     0,     0,    59,    60,     0,
       0,     0,    40,     0,    69,     0,    66,    61,    41,    62,
      45,    53,    57,    31,     0,    44,    65,     0,     0,     0,
      37,    68,    32,    34,     0,     0,    38,     0,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,   -92,    78,    56,    -5,   -92,   -92,   -92,
      61,    66,   -92,   -92,   -91,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -40,   -36,   -92,   -92,    16,   -92,
      21,   -92,    13,   -92,   -92,   -92,   -92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,     9,    10,    18,    19,
      20,    45,    32,    35,    46,    47,    48,    98,    99,   105,
      49,    59,   104,    50,    51,    52,    53,    75,    54,    76,
      55,    79,    56,    57,    85,    86,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      61,    12,    64,    37,    37,    77,    78,   102,   103,    17,
      67,    68,    38,   106,    39,    40,   108,    37,    80,    62,
      17,    63,    83,    84,     3,    16,    88,    34,    41,    41,
      23,    42,    42,    28,    43,    37,    44,    60,    22,    89,
      89,    94,    41,    89,    38,    42,    39,    40,    13,    13,
      14,     4,    25,     5,    26,    15,    15,   101,    24,    27,
      41,    28,    58,    42,    31,    28,    67,    68,    44,    36,
      69,    70,    71,    72,    73,    74,    65,    66,    81,    82,
      87,    93,    95,   107,    11,    96,    30,   100,    33,    97,
      29,    90,    92,     0,     0,     0,     0,    91
};

static const yytype_int8 yycheck[] =
{
      40,    28,    42,     3,     3,    18,    19,    98,    99,    14,
      16,    17,    12,   104,    14,    15,   107,     3,    58,    29,
      25,    31,    62,    63,     0,     3,    66,    32,    28,    28,
      28,    31,    31,    33,    34,     3,    36,    36,    30,    75,
      76,    81,    28,    79,    12,    31,    14,    15,    29,    29,
      31,     5,    35,     7,    36,    36,    36,    97,    32,    29,
      28,    33,    31,    31,    30,    33,    16,    17,    36,    28,
      20,    21,    22,    23,    24,    25,    36,    26,    31,    36,
      32,    32,    30,    13,     6,    32,    25,    32,    32,    35,
      24,    75,    79,    -1,    -1,    -1,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    40,     0,     5,     7,    41,    42,    43,    44,
      45,    42,    28,    29,    31,    36,     3,    44,    46,    47,
      48,    74,    30,    28,    32,    35,    36,    29,    33,    49,
      48,    30,    50,    43,    44,    51,    28,     3,    12,    14,
      15,    28,    31,    34,    36,    49,    52,    53,    54,    58,
      61,    62,    63,    64,    66,    68,    70,    71,    31,    59,
      36,    62,    29,    31,    62,    36,    26,    16,    17,    20,
      21,    22,    23,    24,    25,    65,    67,    18,    19,    69,
      62,    31,    36,    62,    62,    72,    73,    32,    62,    63,
      66,    68,    70,    32,    62,    30,    32,    35,    55,    56,
      32,    62,    52,    52,    60,    57,    52,    13,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    46,    46,    47,    47,    48,    48,    49,
      50,    50,    51,    51,    52,    52,    52,    52,    52,    53,
      53,    55,    54,    56,    57,    54,    59,    60,    58,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    72,    72,    73,    73,
      74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     3,     6,
       1,     1,     6,     1,     1,     3,     1,     2,     4,     4,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       1,     0,     6,     0,     0,     9,     0,     0,     7,     2,
       3,     3,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     0,     3,     1,
       0
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
#line 50 "trab2.y"
                {generateHeader(); generateMainHeader();}
#line 1308 "trab2.tab.c"
    break;

  case 3: /* programa: $@1 declaracao-lista  */
#line 50 "trab2.y"
                                                                                 {generateMainFooter();}
#line 1314 "trab2.tab.c"
    break;

  case 10: /* tipo-especificador: INTEGER_TYPE_TOKEN  */
#line 65 "trab2.y"
                                           {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1320 "trab2.tab.c"
    break;

  case 11: /* tipo-especificador: VOID_TYPE_TOKEN  */
#line 66 "trab2.y"
                                        {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1326 "trab2.tab.c"
    break;

  case 31: /* $@2: %empty  */
#line 106 "trab2.y"
                                                                                          {(yyvsp[-3].ival) = count_label; onlyLabelForIf((yyvsp[-3].ival)); count_label+=2}
#line 1332 "trab2.tab.c"
    break;

  case 32: /* selecao-decl: IF_TOKEN OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN $@2 statement  */
#line 106 "trab2.y"
                                                                                                                                                           {onlyGoTo((yyvsp[-5].ival) + 1); onlyLabel((yyvsp[-5].ival));}
#line 1338 "trab2.tab.c"
    break;

  case 33: /* $@3: %empty  */
#line 107 "trab2.y"
                                                                                          {(yyvsp[-3].ival) = count_label; onlyLabelForIf((yyvsp[-3].ival)); count_label+=2}
#line 1344 "trab2.tab.c"
    break;

  case 34: /* $@4: %empty  */
#line 107 "trab2.y"
                                                                                                                                                           {onlyGoTo((yyvsp[-5].ival) + 1); onlyLabel((yyvsp[-5].ival));}
#line 1350 "trab2.tab.c"
    break;

  case 35: /* selecao-decl: IF_TOKEN OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN $@3 statement $@4 ELSE_TOKEN statement  */
#line 107 "trab2.y"
                                                                                                                                                                                                                   {onlyLabel((yyvsp[-8].ival) + 1);}
#line 1356 "trab2.tab.c"
    break;

  case 36: /* $@5: %empty  */
#line 110 "trab2.y"
                                    {(yyvsp[0].ival) = count_label; onlyLabel((yyvsp[0].ival)); count_label+=2;}
#line 1362 "trab2.tab.c"
    break;

  case 37: /* $@6: %empty  */
#line 110 "trab2.y"
                                                                                                                                                {onlyLabelForIf((yyvsp[-4].ival) + 1);}
#line 1368 "trab2.tab.c"
    break;

  case 38: /* iteracao-decl: WHILE_TOKEN $@5 OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN $@6 statement  */
#line 110 "trab2.y"
                                                                                                                                                                                    {onlyGoTo((yyvsp[-6].ival)); onlyLabel((yyvsp[-6].ival) + 1)}
#line 1374 "trab2.tab.c"
    break;

  case 41: /* expressao: var EQUAL_TOKEN expressao  */
#line 117 "trab2.y"
                                                  {atributeVariable((yyvsp[-2].sval));}
#line 1380 "trab2.tab.c"
    break;

  case 43: /* var: ID_TOKEN  */
#line 121 "trab2.y"
                                 { (yyval.sval) = strdup((yyvsp[0].sval));}
#line 1386 "trab2.tab.c"
    break;

  case 45: /* simples-expressao: soma-expressao relacional soma-expressao  */
#line 125 "trab2.y"
                                                                 { putOpInStack('-'); ifStackInverse((yyvsp[-1].sval));}
#line 1392 "trab2.tab.c"
    break;

  case 47: /* relacional: SMALLER_EQUAL_TOKEN  */
#line 129 "trab2.y"
                                            {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1398 "trab2.tab.c"
    break;

  case 48: /* relacional: SMALLER_TOKEN  */
#line 130 "trab2.y"
                                      {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1404 "trab2.tab.c"
    break;

  case 49: /* relacional: BIGGER_TOKEN  */
#line 131 "trab2.y"
                                     {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1410 "trab2.tab.c"
    break;

  case 50: /* relacional: BIGGER_EQUAL_TOKEN  */
#line 132 "trab2.y"
                                           {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1416 "trab2.tab.c"
    break;

  case 51: /* relacional: COMPARE_TOKEN  */
#line 133 "trab2.y"
                                      {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1422 "trab2.tab.c"
    break;

  case 52: /* relacional: DIFF_TOKEN  */
#line 134 "trab2.y"
                                   {(yyval.sval) = strdup((yyvsp[0].sval));}
#line 1428 "trab2.tab.c"
    break;

  case 53: /* soma-expressao: soma-expressao soma termo  */
#line 137 "trab2.y"
                                                  {putOpInStack((yyvsp[-1].cval));}
#line 1434 "trab2.tab.c"
    break;

  case 55: /* soma: ADD_TOKEN  */
#line 141 "trab2.y"
                                  {(yyval.cval) = strdup((yyvsp[0].cval));}
#line 1440 "trab2.tab.c"
    break;

  case 56: /* soma: SUB_TOKEN  */
#line 142 "trab2.y"
                                  {(yyval.cval) = strdup((yyvsp[0].cval));}
#line 1446 "trab2.tab.c"
    break;

  case 57: /* termo: termo mult fator  */
#line 145 "trab2.y"
                                         {putOpInStack((yyvsp[-1].cval));}
#line 1452 "trab2.tab.c"
    break;

  case 59: /* mult: MULT_TOKEN  */
#line 149 "trab2.y"
                                   {(yyval.cval) = strdup((yyvsp[0].cval));}
#line 1458 "trab2.tab.c"
    break;

  case 60: /* mult: DIV_TOKEN  */
#line 150 "trab2.y"
                                  {(yyval.cval) = strdup((yyvsp[0].cval));}
#line 1464 "trab2.tab.c"
    break;

  case 62: /* fator: var  */
#line 154 "trab2.y"
                            {loadVariableValue(getLocation((yyvsp[0].sval)));}
#line 1470 "trab2.tab.c"
    break;


#line 1474 "trab2.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 172 "trab2.y"


int main() {
	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Erro de análise (sintática): %s\n", s);
	exit(1);
}
