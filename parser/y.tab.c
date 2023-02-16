/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170709

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0


#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define LB 257
#define RB 258
#define SEMICOLON 259
#define ASSIGN_OP 260
#define LESS_EQ_THAN 261
#define GREATER_EQ_THAN 262
#define LESS_THAN 263
#define GREATER_THAN 264
#define LP 265
#define RP 266
#define PLUS_OP 267
#define DIV_OP 268
#define SUB_OP 269
#define MULT_OP 270
#define FACTOR_OP 271
#define LOGICAL_AND 272
#define LOGICAL_OR 273
#define COMMA 274
#define FOR 275
#define WHILE 276
#define IF 277
#define ELSE 278
#define ELSEIF 279
#define RT_VOID 280
#define PLEASE 281
#define RETURN 282
#define NEWLINE 283
#define NOT_EQUALS_TO 284
#define ENDPLS 285
#define FUNC_ID_TIMESTAMP 286
#define FUNC_ID_CONNECT_URL 287
#define FUNC_ID_GET_DATA 288
#define FUNC_ID_SEND_DATA 289
#define FUNC_ID_CONNECT_INT 290
#define FUNC_ID_IS_CONNECT_INT 291
#define FUNC_ID_PRINT 292
#define FUNC_ID_ENTER 293
#define FUNC_ID_SWITCH_ON 294
#define FUNC_ID_SWITCH_OFF 295
#define FUNC_ID_READ_SENSOR_DATA 296
#define INTEGER 297
#define FLOATING_POINT 298
#define BL_TRUE 299
#define BL_FALSE 300
#define STRING_LITERAL 301
#define IDENTIFIER 302
#define COMMENT 303
#define FUNC 304
#define CHAR_LITERAL 305
#define DOT 306
#define EQUALS_TO 307
#define START 308
#define DT_INT 309
#define DT_LONG 310
#define DT_FLOAT 311
#define DT_DOUBLE 312
#define DT_BOOLEAN 313
#define DT_STRING 314
#define DT_CHAR 315
#define DT_SENSOR 316
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    2,    2,    5,    5,    5,    5,    6,
    6,    6,    6,    6,    6,    6,    9,    9,    9,    9,
   14,   15,   16,   17,   13,   11,   11,   11,   11,   11,
   11,   12,   21,   21,   10,   23,   23,   24,   24,    7,
    8,   25,   26,   28,   28,   28,   30,   31,   32,   33,
   34,   34,   34,   35,   35,   36,   36,   37,   38,   38,
   38,   38,   38,   38,   38,   38,   38,   38,   38,   29,
   29,   39,   39,   39,   19,   22,   22,   40,   40,   41,
   41,   41,   42,   42,   42,   42,   42,   43,   43,   43,
   44,   44,   44,   44,   45,   45,   45,   45,   45,   45,
   45,   27,   27,   27,   27,   46,   46,   46,    3,    3,
   47,   48,   48,   49,   49,   20,   20,    4,    4,   18,
   18,   18,   18,   18,   18,   18,
};
static const YYINT yylen[] = {                            2,
    3,    5,    7,    2,    1,    2,    1,    2,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    4,    5,    1,    2,    3,    3,    3,    3,    3,
    2,    1,    1,    1,    9,    0,    8,    0,    4,    7,
   10,    3,    4,    4,    4,    4,    6,    3,    3,    4,
    6,    6,    4,    4,    4,    4,    4,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    5,
    2,    3,    1,    0,    1,    1,    3,    1,    3,    1,
    3,    3,    1,    3,    3,    3,    3,    1,    3,    3,
    1,    3,    3,    3,    1,    1,    1,    1,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    1,
    9,    3,    1,    2,    0,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
  119,  120,  121,  122,  123,  124,  125,  126,    0,    0,
    0,  118,    5,    0,    0,    4,    1,    0,    0,  110,
    0,    0,    0,    0,    2,  109,    0,    0,    0,   24,
    0,    0,    0,    0,    0,    0,    9,  116,  117,   33,
   34,   97,    0,   32,   98,    0,    7,   10,   11,   12,
   13,   14,   15,   16,   17,   18,   19,   20,    0,    0,
   96,   95,    0,  101,    0,    0,    0,    0,    0,   91,
    0,    0,  113,  100,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   59,   60,   61,   62,   63,   64,   65,   66,   67,   68,
   69,   71,   31,    0,    0,    0,    0,    0,    0,    3,
    8,    6,    0,   25,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  114,    0,    0,
   99,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   28,   26,   30,
   27,   29,    0,   21,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   93,   92,   94,    0,  112,
    0,    0,    0,   42,  107,  102,  108,  103,  106,    0,
  104,  105,    0,    0,    0,    0,   48,   49,    0,   58,
    0,    0,    0,    0,    0,   73,    0,   22,    0,    0,
    0,    0,    0,   43,   44,   45,   46,    0,   50,   56,
   57,   54,   55,   53,    0,   70,    0,   23,  111,    0,
    0,    0,    0,    0,    0,   72,    0,   40,    0,   47,
   52,   51,    0,    0,    0,    0,    0,    0,   35,   41,
    0,    0,    0,    0,    0,   39,    0,    0,   37,
};
static const YYINT yydgoto[] = {                          9,
   10,   14,   18,   19,   46,   47,   48,   49,   50,   51,
   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,
   62,   63,  235,  239,   91,   92,  180,   93,   64,   94,
   95,   96,   97,   98,   99,  100,  101,  102,  197,   65,
   66,   67,   68,   69,   70,  182,   20,   72,   73,
};
static const YYINT yysindex[] = {                        23,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -237,
 -256,    0,    0, -186, -164,    0,    0, -237, -217,    0,
 -152,   82, -185, -114,    0,    0, -135,  448,   59,    0,
   12, -131, -113, -112,  590,  -26,    0,    0,    0,    0,
    0,    0, -105,    0,    0,  -15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -140,  -89,
    0,    0, -101,    0,  -93, -275,  -68, -149, -111,    0,
 -121, -252,    0,    0,  -79, -246,   12,   12,  -77,  -66,
  -65,  -58,  -54,  -47,  -31,  -30,  -20,  -19,  -18,  -17,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -62,  -10,   -8,   -7,   -6,   12,    0,
    0,    0, -236,    0,   12,   12,   12,   12,   12,   12,
   12,   12,   12,   12,   12,   12,   12,    0,   -2,   59,
    0, -105,   12, -248, -191,   -9,  128, -264,  128,   -3,
   -1,   12,    3, -224, -160, -125,  128,    0,    0,    0,
    0,    0,   11,    0,   12,  -93, -275,  -68,  -68, -149,
 -149, -149, -149, -111, -111,    0,    0,    0,  448,    0,
 -238,    1,    2,    0,    0,    0,    0,    0,    0,   14,
    0,    0,   15,   25,   26,    4,    0,    0,   38,    0,
   39,   40,   41,   49, -230,    0, -221,    0,   30,   43,
 -246,  448,  448,    0,    0,    0,    0,  128,    0,    0,
    0,    0,    0,    0, -240,    0,  128,    0,    0,   50,
  101,  159,   55,   56,   57,    0,    7,    0,   48,    0,
    0,    0,  448,   63,  -22,  217,   12,   72,    0,    0,
 -175,  448,   73,  275,  448,    0,  333,   48,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -195,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -123,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -150,    0, -218, -189, -212, -233,  505,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -195,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -178,    0,    0,    0,
    0,    0,    0,    0,    0, -108, -166, -151,  -53,  -95,
  552,  568,  584,  521,  537,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -73,    0,
    0,    0,    0,    0,  391,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -73,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  313,    0,  339, -153,  -46,    0,    0,  -70,    0,
    0,    0,    0,    0,    0,    0,    0,    5,  -23,  -35,
  -34,  -74,   99,    0,    0,    0, -132,    0, -127,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  234,
  235,  -75,   95,  -13,   96,    0,  328,    0,  231,
};
#define YYTABLESIZE 892
static const YYINT yytable[] = {                        112,
  107,  108,  134,  135,   12,  133,  186,   75,  117,  181,
  185,  181,   30,  129,  196,  200,   35,  172,   12,  181,
  201,  130,  154,  155,  115,   83,   12,   83,   83,   83,
   83,  118,   83,   71,  115,  214,  183,  184,   83,   83,
   76,  158,  159,  215,  216,   13,   80,   76,  221,  222,
   83,   15,  217,   80,   76,  132,   38,   39,  171,   80,
   80,  224,    2,    3,    4,    5,    6,    7,    8,   78,
  115,   80,  191,   83,  173,  223,   78,  192,  115,  236,
  181,  115,   78,   78,  226,  153,   23,   74,  244,  181,
  243,  247,   79,    1,   80,   74,   16,  115,   17,   79,
   21,  178,  179,  178,  179,   79,   79,   82,   75,  164,
  165,  178,  179,   24,   82,   75,   27,  123,  189,  124,
   82,   82,    2,    3,    4,    5,    6,    7,    8,   29,
  220,  199,   82,   76,   71,  100,  193,  100,  100,  100,
  100,  194,   28,  100,  100,  100,  100,  100,  100,  100,
   77,   77,   78,  112,  109,   82,  125,   77,  126,  127,
  100,  113,  241,   86,   77,   86,   86,   86,   86,  114,
   86,  115,  178,  179,  112,  112,   86,   86,  116,  225,
  128,  178,  179,  100,   36,   36,  131,  136,   86,  112,
  195,   36,  119,  120,  121,  122,  148,  112,  137,  138,
  112,   36,   36,   36,   36,   81,  139,   36,   36,   36,
  140,   86,   81,  160,  161,  162,  163,  141,   81,   81,
  166,  167,  168,   36,   36,   36,   36,   36,   36,   36,
   81,   36,  103,  142,  143,   36,   36,   36,   36,   36,
   36,   36,  110,   30,  144,  145,  146,  147,  149,   31,
  150,  151,  152,   81,  169,  238,  174,  202,  203,   32,
   33,   34,  187,  233,  188,   35,   36,  111,  190,  198,
   38,   39,   40,   41,  104,  105,   31,  208,  106,  204,
  205,   38,   39,   40,   41,   42,   43,   44,  218,   45,
  206,  207,   35,    2,    3,    4,    5,    6,    7,    8,
  219,   30,    1,  209,  210,  211,  212,   31,   38,   39,
   40,   41,   42,   74,  213,  227,   45,   32,   33,   34,
  230,  231,  232,   35,   36,  111,  234,  237,  242,  245,
   22,    2,    3,    4,    5,    6,    7,    8,   11,   38,
   39,   40,   41,   42,   43,   44,  249,   45,  156,   26,
  157,    2,    3,    4,    5,    6,    7,    8,  228,   30,
  170,    1,    0,    0,   16,   31,   25,    2,    3,    4,
    5,    6,    7,    8,    0,   32,   33,   34,    0,    0,
    0,   35,   36,  111,    0,    0,    0,    0,    0,    0,
    2,    3,    4,    5,    6,    7,    8,   38,   39,   40,
   41,   42,   43,   44,    0,   45,    0,    0,   35,    2,
    3,    4,    5,    6,    7,    8,  229,   30,    0,    0,
    0,    0,    0,   31,   38,   39,   40,   41,  175,  176,
    0,    0,  177,   32,   33,   34,    0,    0,    0,   35,
   36,  111,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   38,   39,   40,   41,   42,
   43,   44,    0,   45,    0,    0,    0,    2,    3,    4,
    5,    6,    7,    8,  240,   30,    0,    0,    0,    0,
    0,   31,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   32,   33,   34,    0,    0,    0,   35,   36,  111,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   38,   39,   40,   41,   42,   43,   44,
    0,   45,    0,    0,    0,    2,    3,    4,    5,    6,
    7,    8,  246,   30,    0,    0,    0,    0,    0,   31,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   32,
   33,   34,    0,    0,    0,   35,   36,  111,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   38,   39,   40,   41,   42,   43,   44,    0,   45,
    0,    0,    0,    2,    3,    4,    5,    6,    7,    8,
  248,   30,    0,    0,    0,    0,    0,   31,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   32,   33,   34,
    0,    0,    0,   35,   36,  111,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   38,
   39,   40,   41,   42,   43,   44,    0,   45,    0,    0,
    0,    2,    3,    4,    5,    6,    7,    8,   38,   38,
    0,    0,    0,    0,    0,   38,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   38,   38,   38,    0,    0,
    0,   38,   38,   38,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   38,   38,   38,
   38,   38,   38,   38,    0,   38,    0,    0,    0,   38,
   38,   38,   38,   38,   38,   38,   30,    0,    0,    0,
    0,    0,   31,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   32,   33,   34,    0,    0,    0,   35,   36,
   37,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   38,   39,   40,   41,   42,   43,
   44,    0,   45,    0,    0,    0,    2,    3,    4,    5,
    6,    7,    8,   88,    0,   88,   88,   88,   88,    0,
   88,   88,    0,   88,    0,    0,   88,   88,    0,   89,
    0,   89,   89,   89,   89,    0,   89,   89,   88,   89,
    0,    0,   89,   89,    0,   90,    0,   90,   90,   90,
   90,    0,   90,   90,   89,   90,    0,    0,   90,   90,
   87,   88,   87,   87,   87,   87,    0,   87,    0,    0,
   90,    0,    0,   87,   87,    0,   84,   89,   84,   84,
   84,   84,    0,   84,    0,   87,    0,    0,    0,   84,
   84,    0,   85,   90,   85,   85,   85,   85,    0,   85,
    0,   84,    0,    0,    0,   85,   85,    0,   87,    0,
    0,    0,    0,    0,    0,    0,    0,   85,    0,    0,
    0,    0,    0,    0,   84,   79,   80,   81,   82,   83,
   84,   85,   86,   87,   88,   89,    0,    0,    0,    0,
   85,   90,
};
static const YYINT yycheck[] = {                         46,
   36,   36,   77,   78,    0,   76,  139,   31,  284,  137,
  138,  139,  259,  266,  147,  169,  281,  266,   14,  147,
  259,  274,  259,  260,  273,  259,   22,  261,  262,  263,
  264,  307,  266,   29,  273,  266,  301,  302,  272,  273,
  259,  117,  118,  274,  266,  283,  259,  266,  202,  203,
  284,  308,  274,  266,  273,  302,  297,  298,  133,  272,
  273,  302,  309,  310,  311,  312,  313,  314,  315,  259,
  266,  284,  297,  307,  266,  208,  266,  302,  274,  233,
  208,  273,  272,  273,  217,  109,  304,  266,  242,  217,
  266,  245,  259,  280,  307,  274,  283,  273,  285,  266,
  265,  137,  137,  139,  139,  272,  273,  259,  259,  123,
  124,  147,  147,  266,  266,  266,  302,  267,  142,  269,
  272,  273,  309,  310,  311,  312,  313,  314,  315,  265,
  201,  155,  284,  265,  130,  259,  297,  261,  262,  263,
  264,  302,  257,  267,  268,  269,  270,  271,  272,  273,
  259,  265,  265,  200,  260,  307,  268,  266,  270,  271,
  284,  302,  237,  259,  273,  261,  262,  263,  264,  259,
  266,  273,  208,  208,  221,  222,  272,  273,  272,  215,
  302,  217,  217,  307,  258,  259,  266,  265,  284,  236,
  316,  265,  261,  262,  263,  264,  259,  244,  265,  265,
  247,  275,  276,  277,  278,  259,  265,  281,  282,  283,
  265,  307,  266,  119,  120,  121,  122,  265,  272,  273,
  125,  126,  127,  297,  298,  299,  300,  301,  302,  303,
  284,  305,  259,  265,  265,  309,  310,  311,  312,  313,
  314,  315,  258,  259,  265,  265,  265,  265,  259,  265,
  259,  259,  259,  307,  257,  278,  266,  257,  257,  275,
  276,  277,  266,  257,  266,  281,  282,  283,  266,  259,
  297,  298,  299,  300,  301,  302,  265,  274,  305,  266,
  266,  297,  298,  299,  300,  301,  302,  303,  259,  305,
  266,  266,  281,  309,  310,  311,  312,  313,  314,  315,
  258,  259,  280,  266,  266,  266,  266,  265,  297,  298,
  299,  300,  301,  302,  266,  266,  305,  275,  276,  277,
  266,  266,  266,  281,  282,  283,  279,  265,  257,  257,
   18,  309,  310,  311,  312,  313,  314,  315,    0,  297,
  298,  299,  300,  301,  302,  303,  248,  305,  115,   22,
  116,  309,  310,  311,  312,  313,  314,  315,  258,  259,
  130,  280,   -1,   -1,  283,  265,  285,  309,  310,  311,
  312,  313,  314,  315,   -1,  275,  276,  277,   -1,   -1,
   -1,  281,  282,  283,   -1,   -1,   -1,   -1,   -1,   -1,
  309,  310,  311,  312,  313,  314,  315,  297,  298,  299,
  300,  301,  302,  303,   -1,  305,   -1,   -1,  281,  309,
  310,  311,  312,  313,  314,  315,  258,  259,   -1,   -1,
   -1,   -1,   -1,  265,  297,  298,  299,  300,  301,  302,
   -1,   -1,  305,  275,  276,  277,   -1,   -1,   -1,  281,
  282,  283,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  297,  298,  299,  300,  301,
  302,  303,   -1,  305,   -1,   -1,   -1,  309,  310,  311,
  312,  313,  314,  315,  258,  259,   -1,   -1,   -1,   -1,
   -1,  265,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  275,  276,  277,   -1,   -1,   -1,  281,  282,  283,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  297,  298,  299,  300,  301,  302,  303,
   -1,  305,   -1,   -1,   -1,  309,  310,  311,  312,  313,
  314,  315,  258,  259,   -1,   -1,   -1,   -1,   -1,  265,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  275,
  276,  277,   -1,   -1,   -1,  281,  282,  283,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  297,  298,  299,  300,  301,  302,  303,   -1,  305,
   -1,   -1,   -1,  309,  310,  311,  312,  313,  314,  315,
  258,  259,   -1,   -1,   -1,   -1,   -1,  265,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  275,  276,  277,
   -1,   -1,   -1,  281,  282,  283,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,
  298,  299,  300,  301,  302,  303,   -1,  305,   -1,   -1,
   -1,  309,  310,  311,  312,  313,  314,  315,  258,  259,
   -1,   -1,   -1,   -1,   -1,  265,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  275,  276,  277,   -1,   -1,
   -1,  281,  282,  283,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,  299,
  300,  301,  302,  303,   -1,  305,   -1,   -1,   -1,  309,
  310,  311,  312,  313,  314,  315,  259,   -1,   -1,   -1,
   -1,   -1,  265,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  275,  276,  277,   -1,   -1,   -1,  281,  282,
  283,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,  299,  300,  301,  302,
  303,   -1,  305,   -1,   -1,   -1,  309,  310,  311,  312,
  313,  314,  315,  259,   -1,  261,  262,  263,  264,   -1,
  266,  267,   -1,  269,   -1,   -1,  272,  273,   -1,  259,
   -1,  261,  262,  263,  264,   -1,  266,  267,  284,  269,
   -1,   -1,  272,  273,   -1,  259,   -1,  261,  262,  263,
  264,   -1,  266,  267,  284,  269,   -1,   -1,  272,  273,
  259,  307,  261,  262,  263,  264,   -1,  266,   -1,   -1,
  284,   -1,   -1,  272,  273,   -1,  259,  307,  261,  262,
  263,  264,   -1,  266,   -1,  284,   -1,   -1,   -1,  272,
  273,   -1,  259,  307,  261,  262,  263,  264,   -1,  266,
   -1,  284,   -1,   -1,   -1,  272,  273,   -1,  307,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  284,   -1,   -1,
   -1,   -1,   -1,   -1,  307,  286,  287,  288,  289,  290,
  291,  292,  293,  294,  295,  296,   -1,   -1,   -1,   -1,
  307,  302,
};
#define YYFINAL 9
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 316
#define YYUNDFTOKEN 368
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"LB","RB","SEMICOLON","ASSIGN_OP",
"LESS_EQ_THAN","GREATER_EQ_THAN","LESS_THAN","GREATER_THAN","LP","RP","PLUS_OP",
"DIV_OP","SUB_OP","MULT_OP","FACTOR_OP","LOGICAL_AND","LOGICAL_OR","COMMA",
"FOR","WHILE","IF","ELSE","ELSEIF","RT_VOID","PLEASE","RETURN","NEWLINE",
"NOT_EQUALS_TO","ENDPLS","FUNC_ID_TIMESTAMP","FUNC_ID_CONNECT_URL",
"FUNC_ID_GET_DATA","FUNC_ID_SEND_DATA","FUNC_ID_CONNECT_INT",
"FUNC_ID_IS_CONNECT_INT","FUNC_ID_PRINT","FUNC_ID_ENTER","FUNC_ID_SWITCH_ON",
"FUNC_ID_SWITCH_OFF","FUNC_ID_READ_SENSOR_DATA","INTEGER","FLOATING_POINT",
"BL_TRUE","BL_FALSE","STRING_LITERAL","IDENTIFIER","COMMENT","FUNC",
"CHAR_LITERAL","DOT","EQUALS_TO","START","DT_INT","DT_LONG","DT_FLOAT",
"DT_DOUBLE","DT_BOOLEAN","DT_STRING","DT_CHAR","DT_SENSOR",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : start_function newline_list ENDPLS",
"program : start_function newline_list function_list newline_list ENDPLS",
"start_function : return_type START LP RP LB statement_list RB",
"newline_list : newline_list NEWLINE",
"newline_list : NEWLINE",
"statement_list : statement_list statement",
"statement_list : statement",
"statement_list : statement_list NEWLINE",
"statement_list : NEWLINE",
"statement : while_statement",
"statement : for_statement",
"statement : definition_statement",
"statement : if_statement",
"statement : return_statement",
"statement : comment_statement",
"statement : expression_statement",
"definition_statement : declaration_statement",
"definition_statement : assignment_statement",
"definition_statement : initialization_statement",
"definition_statement : empty_statement",
"declaration_statement : data_type IDENTIFIER SEMICOLON",
"assignment_statement : IDENTIFIER ASSIGN_OP expression SEMICOLON",
"initialization_statement : data_type IDENTIFIER ASSIGN_OP expression SEMICOLON",
"empty_statement : SEMICOLON",
"expression_statement : expression SEMICOLON",
"return_statement : RETURN IDENTIFIER SEMICOLON",
"return_statement : RETURN number SEMICOLON",
"return_statement : RETURN STRING_LITERAL SEMICOLON",
"return_statement : RETURN boolean_literal SEMICOLON",
"return_statement : RETURN CHAR_LITERAL SEMICOLON",
"return_statement : RETURN SEMICOLON",
"comment_statement : COMMENT",
"boolean_literal : BL_TRUE",
"boolean_literal : BL_FALSE",
"if_statement : IF LP conditional_expression RP LB statement_list RB else_if_statement else_statement",
"else_if_statement :",
"else_if_statement : ELSEIF LP conditional_expression RP LB statement_list RB else_if_statement",
"else_statement :",
"else_statement : ELSE LB statement_list RB",
"while_statement : WHILE LP conditional_expression RP LB statement_list RB",
"for_statement : FOR LP definition_statement conditional_expression SEMICOLON definition_statement RP LB statement_list RB",
"builtin_get_current_timestamp : FUNC_ID_TIMESTAMP LP RP",
"builtin_connect_to_url : FUNC_ID_CONNECT_URL LP returnable RP",
"builtin_get_data_from_url : FUNC_ID_GET_DATA LP STRING_LITERAL RP",
"builtin_get_data_from_url : FUNC_ID_GET_DATA LP IDENTIFIER RP",
"builtin_get_data_from_url : FUNC_ID_GET_DATA LP function_call RP",
"builtin_send_data_to_url : FUNC_ID_SEND_DATA LP returnable COMMA returnable RP",
"builtin_connect_to_internet : FUNC_ID_CONNECT_INT LP RP",
"builtin_is_connected_to_internet : FUNC_ID_IS_CONNECT_INT LP RP",
"builtin_print : FUNC_ID_PRINT LP expression RP",
"builtin_read_sensor_data : FUNC_ID_READ_SENSOR_DATA LP DT_SENSOR COMMA number RP",
"builtin_read_sensor_data : FUNC_ID_READ_SENSOR_DATA LP DT_SENSOR COMMA IDENTIFIER RP",
"builtin_read_sensor_data : FUNC_ID_READ_SENSOR_DATA LP DT_SENSOR RP",
"builtin_toggle_switch_off : FUNC_ID_SWITCH_OFF LP INTEGER RP",
"builtin_toggle_switch_off : FUNC_ID_SWITCH_OFF LP IDENTIFIER RP",
"builtin_toggle_switch_on : FUNC_ID_SWITCH_ON LP INTEGER RP",
"builtin_toggle_switch_on : FUNC_ID_SWITCH_ON LP IDENTIFIER RP",
"builtin_enter : FUNC_ID_ENTER LP RP",
"builtin_function : builtin_get_current_timestamp",
"builtin_function : builtin_connect_to_url",
"builtin_function : builtin_get_data_from_url",
"builtin_function : builtin_send_data_to_url",
"builtin_function : builtin_connect_to_internet",
"builtin_function : builtin_is_connected_to_internet",
"builtin_function : builtin_print",
"builtin_function : builtin_read_sensor_data",
"builtin_function : builtin_toggle_switch_off",
"builtin_function : builtin_toggle_switch_on",
"builtin_function : builtin_enter",
"function_call : PLEASE IDENTIFIER LP argument_list RP",
"function_call : PLEASE builtin_function",
"argument_list : argument_list COMMA returnable",
"argument_list : returnable",
"argument_list :",
"expression : conditional_expression",
"conditional_expression : conditional_and",
"conditional_expression : conditional_expression LOGICAL_OR conditional_and",
"conditional_and : equality_expr",
"conditional_and : conditional_and LOGICAL_AND equality_expr",
"equality_expr : relational_expr",
"equality_expr : equality_expr EQUALS_TO relational_expr",
"equality_expr : equality_expr NOT_EQUALS_TO relational_expr",
"relational_expr : arithmetic_add_expr",
"relational_expr : relational_expr LESS_THAN arithmetic_add_expr",
"relational_expr : relational_expr GREATER_THAN arithmetic_add_expr",
"relational_expr : relational_expr LESS_EQ_THAN arithmetic_add_expr",
"relational_expr : relational_expr GREATER_EQ_THAN arithmetic_add_expr",
"arithmetic_add_expr : arithmetic_mult_expr",
"arithmetic_add_expr : arithmetic_add_expr PLUS_OP arithmetic_mult_expr",
"arithmetic_add_expr : arithmetic_add_expr SUB_OP arithmetic_mult_expr",
"arithmetic_mult_expr : arithmetic_base",
"arithmetic_mult_expr : arithmetic_mult_expr MULT_OP arithmetic_base",
"arithmetic_mult_expr : arithmetic_mult_expr DIV_OP arithmetic_base",
"arithmetic_mult_expr : arithmetic_mult_expr FACTOR_OP arithmetic_base",
"arithmetic_base : boolean_literal",
"arithmetic_base : number",
"arithmetic_base : STRING_LITERAL",
"arithmetic_base : CHAR_LITERAL",
"arithmetic_base : LP expression RP",
"arithmetic_base : IDENTIFIER",
"arithmetic_base : function_call",
"returnable : IDENTIFIER",
"returnable : number",
"returnable : function_call",
"returnable : literal",
"literal : boolean_literal",
"literal : STRING_LITERAL",
"literal : CHAR_LITERAL",
"function_list : function_list newline_list function",
"function_list : function",
"function : return_type FUNC IDENTIFIER LP parameter_list RP LB statement_list RB",
"parameter_list : parameter_list COMMA parameter",
"parameter_list : parameter",
"parameter : data_type IDENTIFIER",
"parameter :",
"number : INTEGER",
"number : FLOATING_POINT",
"return_type : data_type",
"return_type : RT_VOID",
"data_type : DT_INT",
"data_type : DT_LONG",
"data_type : DT_FLOAT",
"data_type : DT_DOUBLE",
"data_type : DT_BOOLEAN",
"data_type : DT_STRING",
"data_type : DT_CHAR",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 139 "rude.y"

#include "lex.yy.c"
int lineno=1;
int yyerror(char *s) { printf("%s on line: %d! pls checkRudelangDocumentation()\n.", s, lineno); }
int main() {
    return yyparse();
}
#line 634 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 12 "rude.y"
	{printf("Parsing is successfully completed. We hope you are pleased with our language!"); return 1;}
break;
case 2:
#line 13 "rude.y"
	{printf("Parsing is successfully completed. We hope you are pleased with our language!\n"); return 1;}
break;
#line 841 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
