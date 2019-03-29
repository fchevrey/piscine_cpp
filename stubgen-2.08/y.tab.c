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
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     CHAR = 261,
     SHORT = 262,
     INT = 263,
     LONG = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     FLOAT = 267,
     DOUBLE = 268,
     VOID = 269,
     NEW = 270,
     DELETE = 271,
     TEMPLATE = 272,
     THROW = 273,
     PTR_OP = 274,
     INC_OP = 275,
     DEC_OP = 276,
     LEFT_OP = 277,
     RIGHT_OP = 278,
     LE_OP = 279,
     GE_OP = 280,
     EQ_OP = 281,
     NE_OP = 282,
     AND_OP = 283,
     OR_OP = 284,
     MUL_ASSIGN = 285,
     DIV_ASSIGN = 286,
     MOD_ASSIGN = 287,
     ADD_ASSIGN = 288,
     SUB_ASSIGN = 289,
     LEFT_ASSIGN = 290,
     RIGHT_ASSIGN = 291,
     AND_ASSIGN = 292,
     XOR_ASSIGN = 293,
     OR_ASSIGN = 294,
     CLCL = 295,
     MEM_PTR_OP = 296,
     FRIEND = 297,
     OPERATOR = 298,
     CONST = 299,
     CLASS = 300,
     STRUCT = 301,
     UNION = 302,
     ENUM = 303,
     PROTECTED = 304,
     PRIVATE = 305,
     PUBLIC = 306,
     EXTERN = 307,
     ELIPSIS = 308
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define CHAR 261
#define SHORT 262
#define INT 263
#define LONG 264
#define SIGNED 265
#define UNSIGNED 266
#define FLOAT 267
#define DOUBLE 268
#define VOID 269
#define NEW 270
#define DELETE 271
#define TEMPLATE 272
#define THROW 273
#define PTR_OP 274
#define INC_OP 275
#define DEC_OP 276
#define LEFT_OP 277
#define RIGHT_OP 278
#define LE_OP 279
#define GE_OP 280
#define EQ_OP 281
#define NE_OP 282
#define AND_OP 283
#define OR_OP 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define ADD_ASSIGN 288
#define SUB_ASSIGN 289
#define LEFT_ASSIGN 290
#define RIGHT_ASSIGN 291
#define AND_ASSIGN 292
#define XOR_ASSIGN 293
#define OR_ASSIGN 294
#define CLCL 295
#define MEM_PTR_OP 296
#define FRIEND 297
#define OPERATOR 298
#define CONST 299
#define CLASS 300
#define STRUCT 301
#define UNION 302
#define ENUM 303
#define PROTECTED 304
#define PRIVATE 305
#define PUBLIC 306
#define EXTERN 307
#define ELIPSIS 308




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

/*
 *  FILE: parser.y
 *  AUTH: Michael J. Radwin <michael@radwin.org>
 *
 *  DESC: stubgen grammar description.  Portions borrowed from
 *  Newcastle University's Arjuna project (http://arjuna.ncl.ac.uk/),
 *  and Jeff Lee's ANSI Grammar
 *  (ftp://ftp.uu.net/usenet/net.sources/ansi.c.grammar.Z)
 *  This grammar is only a subset of the real C++ language.
 *
 *  DATE: Thu Aug 15 13:10:06 EDT 1996
 *
 *  Copyright (c) 2004  Michael J. Radwin
 *
 *  Redistribution and use in source and binary forms, with or
 *  without modification, are permitted provided that the following
 *  conditions are met:
 *
 *  - Redistributions of source code must retain the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer.
 *
 *  - Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 *  - Neither the name of stubgen nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *  CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 *  USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 *  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 *  THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  --------------------------------------------------------------------
 * 
 *  $Log: parser.y,v $
 *  Revision 1.72  1998/07/07 00:14:06  mradwin
 *  removed extra space from throw_decl, cleaned up memory leak
 *  in ctor skeleton
 *
 *  Revision 1.71  1998/06/11 14:52:09  mradwin
 *  allow for empty class declarations, such as
 *  class Element {};
 *  also, differentiate structs from classes with
 *  new STRUCT_KIND tag.
 *  New version: 2.04
 *
 *  Revision 1.70  1998/05/11 19:49:11  mradwin
 *  Version 2.03 (updated copyright information).
 *
 *  Revision 1.69  1998/04/07 23:43:34  mradwin
 *  changed error-handling code significantly.
 *  several functions now return a value, and instead of
 *  calling fatal(), we do a YYABORT or YYERROR to get out
 *  of the parsing state.
 *  New version: 2.02.
 *
 *  Revision 1.68  1998/03/28 02:59:41  mradwin
 *  working on slightly better error recovery; not done yet.
 *
 *  Revision 1.67  1998/03/28 02:34:56  mradwin
 *  added multi-line function parameters
 *  also changed pointer and reference (* and &) types so there
 *  is no trailing space before the parameter name.
 *
 *  Revision 1.66  1998/01/12 19:39:11  mradwin
 *  modified rcsid
 *
 *  Revision 1.65  1997/11/13 22:50:55  mradwin
 *  moved copyright from parser.y to main.c
 *
 *  Revision 1.64  1997/11/13 22:40:15  mradwin
 *  fixed a silly comment bug
 *
 *  Revision 1.63  1997/11/13 22:37:31  mradwin
 *  changed char[] to char * to make non-gcc compilers
 *  a little happier.  We need to #define const to nothing
 *  for other compilers as well.
 *
 *  Revision 1.62  97/11/13  21:29:30  21:29:30  mradwin (Michael Radwin)
 *  moved code from parser.y to main.c
 * 
 *  Revision 1.61  1997/11/13 21:10:17  mradwin
 *  renamed stubgen.[ly] to parser.y lexer.l
 *
 *  Revision 1.60  1997/11/11 04:11:29  mradwin
 *  fixed command-line flags: invalid options now force usgage.
 *
 *  Revision 1.59  1997/11/11 04:03:56  mradwin
 *  changed version info
 *
 *  Revision 1.58  1997/11/11 03:54:05  mradwin
 *  fixed a long-standing bug with -b option.  a typo was causing
 *  the -b flag to be ignored.
 *
 *  Revision 1.57  1997/11/11 03:52:06  mradwin
 *  changed fatal()
 *
 *  Revision 1.56  1997/11/05 03:02:02  mradwin
 *  Modified logging routines.
 *
 *  Revision 1.55  1997/11/05 02:14:38  mradwin
 *  Made some compiler warnings disappear.
 *
 *  Revision 1.54  1997/11/01 23:26:13  mradwin
 *  new Revision string and usage info
 *
 *  Revision 1.53  1997/11/01 23:12:43  mradwin
 *  greatly improved error-recovery.  errors no longer spill over
 *  into other files because the yyerror state is properly reset.
 *
 *  Revision 1.52  1997/10/27 01:14:23  mradwin
 *  fixed constant_value so it supports simple arithmetic.  it's
 *  not as robust as full expressions, but this will handle the
 *  char buffer[BUFSIZE + 1] problem.
 *
 *  Also removed expansion rules that simply did { $$ = $1; } because
 *  that action is implicit anyway.
 *
 *  Revision 1.51  1997/10/26 23:16:32  mradwin
 *  changed inform_user and fatal functions to use varargs
 *
 *  Revision 1.50  1997/10/26 22:27:07  mradwin
 *  Fixed this bug:
 *  stubgen dies on the following because the protected section is empty:
 *
 *  class WidgetCsg : public WidgetLens {
 *   protected:
 *
 *   public:
 *       virtual ~WidgetCsg() {}
 *                WidgetCsg();
 *  };
 *
 *  Error:
 *  stubgen version 2.0-beta $Revision: 1.72 $.
 *  parse error at line 4, file test.H:
 *   public:
 *        ^
 *
 *  Revision 1.49  1997/10/16 19:42:48  mradwin
 *  added support for elipses, static member/array initializers,
 *  and bitfields.
 *
 *  Revision 1.48  1997/10/16 17:35:39  mradwin
 *  cleaned up usage info
 *
 *  Revision 1.47  1997/10/16 17:12:59  mradwin
 *  handle extern "C" blocks better now, and support multi-line
 *  macros.  still need error-checking.
 *
 *  Revision 1.46  1997/10/15 22:09:06  mradwin
 *  changed tons of names.  stubelem -> sytaxelem,
 *  stubin -> infile, stubout -> outfile, stublog -> logfile.
 *
 *  Revision 1.45  1997/10/15 21:33:36  mradwin
 *  fixed up function_hdr
 *
 *  Revision 1.44  1997/10/15 21:33:02  mradwin
 *  *** empty log message ***
 *
 *  Revision 1.43  1997/10/15 17:42:37  mradwin
 *  added support for 'extern "C" { ... }' blocks.
 *
 *  Revision 1.42  1997/09/26 20:59:18  mradwin
 *  now allow "struct foobar *f" to appear in a parameter
 *  list or as a variable decl.  Had to remove the
 *  class_or_struct rule and blow up the class_specifier
 *  description.
 *
 *  Revision 1.41  1997/09/26 19:02:18  mradwin
 *  fixed memory leak involving template decls in skeleton code.
 *  Leads me to believe that skel_elemcmp() is flawed, because
 *  it may rely in parent->templ info.
 *
 *  Revision 1.40  1997/09/26 18:44:22  mradwin
 *  changed parameter handing from char *'s to an argument type
 *  to facilitate comparisons between skeleton code
 *  and header code.  Now we can correctly recognize different
 *  parameter names while still maintaining the same signature.
 *
 *  Revision 1.39  1997/09/26 00:47:29  mradwin
 *  added better base type support -- recognize things like
 *  "long long" and "short int" now.
 *
 *  Revision 1.38  1997/09/19 18:16:37  mradwin
 *  allowed an instance name to come after a class, struct,
 *  union, or enum.  This improves parseability of typedefs
 *  commonly found in c header files, although true typedefs are
 *  not understood.
 *
 *  Revision 1.37  1997/09/15 22:38:28  mradwin
 *  did more revision on the SGDEBUG stuff
 *
 *  Revision 1.36  1997/09/15 19:05:26  mradwin
 *  allow logging to be compiled out by turning off SGDEBUG
 *
 *  Revision 1.35  1997/09/12 00:58:43  mradwin
 *  duh, silly me.  messed up compilation.
 *
 *  Revision 1.34  1997/09/12 00:57:49  mradwin
 *  Revision string inserted in usage
 *
 *  Revision 1.33  1997/09/12 00:51:19  mradwin
 *  string copyright added to code for binary copyright.
 *
 *  Revision 1.32  1997/09/12 00:47:21  mradwin
 *  some more compactness of grammar with parameter_list_opt
 *  and also ampersand_opt
 *
 *  Revision 1.31  1997/09/12 00:26:19  mradwin
 *  better template support, but still poor
 *
 *  Revision 1.30  1997/09/08 23:24:51  mradwin
 *  changes to error-handling code.
 *  also got rid of the %type <flag> for the top-level rules
 *
 *  Revision 1.30  1997/09/08 23:20:02  mradwin
 *  some error reporting changes and default values for top-level
 *  grammar stuff.
 *
 *  Revision 1.29  1997/09/08 17:54:24  mradwin
 *  cleaned up options and usage info.
 *
 *  Revision 1.28  1997/09/05 19:38:04  mradwin
 *  changed options for .ext instead of -l or -x
 *
 *  Revision 1.27  1997/09/05 19:17:06  mradwin
 *  works for scanning old versions, except for parameter
 *  names that differ between .H and .C files.
 *
 *  Revision 1.26  1997/09/05 16:34:36  mradwin
 *  GPL-ized code.
 *
 *  Revision 1.25  1997/09/05 16:11:44  mradwin
 *  some simple cleanup before GPL-izing the code
 *
 *  Revision 1.24  1997/09/04 19:50:34  mradwin
 *  whoo-hoo!  by blowing up the description
 *  exponentially, it works!
 *
 *  Revision 1.23  1997/03/20 16:05:41  mjr
 *  renamed syntaxelem to syntaxelem_t, cleaned up throw_decl
 *
 *  Revision 1.22  1996/10/02 15:16:57  mjr
 *  using pathname.h instead of libgen.h
 *
 *  Revision 1.21  1996/09/12 14:44:49  mjr
 *  Added throw decl recognition (great, another 4 bytes in syntaxelem)
 *  and cleaned up the grammar so that const_opt appears in far fewer
 *  places.  const_opt is by default 0 as well, so we don't need to
 *  pass it as an arg to new_elem().
 *
 *  I also added a fix to a potential bug with the MINIT and INLIN
 *  exclusive start states.  I think they could have been confused
 *  by braces within comments, so now I'm grabbing comments in those
 *  states as well.
 *
 *  Revision 1.20  1996/09/12 04:55:22  mjr
 *  changed expand strategy.  Don't expand while parsing now;
 *  enqueue as we go along and expand at the end.  Eventually
 *  we'll need to provide similar behavior for when we parse
 *  .C files
 *
 *  Revision 1.19  1996/09/12 03:46:10  mjr
 *  No concrete changes in code.  Just added some sanity by
 *  factoring out code into util.[ch] and putting some prototypes
 *  that were in table.h into stubgen.y where they belong.
 *
 *  Revision 1.18  1996/09/06 14:32:48  mjr
 *  defined the some_KIND constants for clarity, and made
 *  expandClass return immediately if it was give something other
 *  than a CLASS_KIND element.
 *
 *  Revision 1.17  1996/09/06 14:05:44  mjr
 *  Almost there with expanded operator goodies.  Still need
 *  to get OPERATOR type_name to work.
 *
 *  Revision 1.16  1996/09/04 22:28:09  mjr
 *  nested classes work and default arguments are now removed
 *  from the parameter lists.
 *
 *  Revision 1.15  1996/09/04 20:01:57  mjr
 *  non-functional expanded code.  needs work.
 *
 *  Revision 1.14  1996/09/01 21:29:34  mjr
 *  put the expanded_operator code back in as a useless rule.
 *  oughta think about fixing it up if possible
 *
 *  Revision 1.13  1996/09/01 20:59:48  mjr
 *  Added collectMemberInitList() function, which is similar
 *  to collectInlineDef() and also the exclusive state MINIT
 *
 *  Revision 1.12  1996/08/23 05:09:19  mjr
 *  fixed up some more portability things
 *
 *  Revision 1.11  1996/08/22 02:43:47  mjr
 *  added parse error message (using O'Reilly p. 274)
 *
 *  Revision 1.10  1996/08/21 18:33:50  mjr
 *  added support for template instantiation in the type_name
 *  rule.  surprisingly it didn't cause any shift/reduce conflicts.
 *
 *  Revision 1.9  1996/08/21 17:40:56  mjr
 *  added some cpp directives for porting to WIN32
 *
 *  Revision 1.8  1996/08/21 00:00:19  mjr
 *  approaching stability and usability.  command line arguments
 *  are handled now and the fopens and fcloses appear to work.
 *
 *  Revision 1.7  1996/08/20 20:44:23  mjr
 *  added initial support for optind but it is incomplete.
 *
 *  Revision 1.6  1996/08/19 17:14:59  mjr
 *  misordered args, fixed bug
 *
 *  Revision 1.5  1996/08/19 17:11:41  mjr
 *  RCS got confused with the RCS-style header goodies.
 *  got it cleaned up now.
 *
 *  Revision 1.4  1996/08/19 17:01:33  mjr
 *  Removed the expanded code checking and added
 *  lots of code that duplicates what stubgen.pl did.
 *  still need options pretty badly
 *
 *  Revision 1.3  1996/08/17 23:21:10  mjr
 *  added the expanded operator code, cleaned up tabs.
 *  consider putting all of the expanded code in another
 *  grammar - this one is getting cluttered.
 *
 */
#line 347 "parser.y"

#include "table.h"
#include "util.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef WIN32
#include <malloc.h> /* defintion of alloca */
#endif /* WIN32 */

#ifndef WIN32
#include <pwd.h>
#endif /* WIN32 */

/* defined in lexer.l */
extern int collectInlineDef();
extern int collectMemberInitList();

/* defined here in parser.y */
static int error_recovery();
static int yyerror(char *);
//static const char rcsid[] = "$Id: parser.y,v 1.72 1998/07/07 00:14:06 mradwin Exp $";

/* defined in main.c */
extern FILE *outfile;
extern char *currentFile;
extern int lineno;



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
#line 378 "parser.y"
{
  char *string;
  syntaxelem_t *elt;
  arg_t *arg;
  int flag;
}
/* Line 193 of yacc.c.  */
#line 585 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 598 "y.tab.c"

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
#define YYFINAL  87
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   881

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNRULES -- Number of states.  */
#define YYNSTATES  463

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,     2,     2,    73,    55,     2,
      64,    65,    58,    69,    63,    70,     2,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    54,
      56,    62,    57,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    75,    68,    66,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    34,    36,    39,    43,
      46,    49,    52,    55,    57,    59,    62,    67,    72,    78,
      84,    87,    90,    94,    96,    99,   101,   104,   107,   109,
     111,   114,   116,   118,   121,   124,   128,   130,   132,   134,
     136,   140,   144,   146,   149,   151,   154,   157,   160,   165,
     169,   171,   175,   177,   180,   185,   189,   191,   194,   198,
     200,   204,   207,   211,   212,   214,   218,   220,   222,   224,
     228,   232,   234,   238,   243,   247,   250,   251,   256,   260,
     261,   267,   270,   271,   276,   280,   282,   284,   288,   290,
     292,   298,   309,   311,   317,   319,   328,   335,   344,   351,
     358,   363,   364,   366,   367,   372,   374,   378,   383,   390,
     397,   407,   417,   423,   429,   440,   451,   452,   456,   461,
     467,   470,   472,   476,   478,   482,   483,   485,   488,   492,
     494,   496,   498,   500,   502,   504,   506,   508,   510,   512,
     514,   516,   518,   520,   522,   524,   526,   528,   530,   532,
     534,   536,   538,   540,   542,   544,   546,   548,   550,   552,
     554,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   576,   578,   580,   583,   586,   588,   590,   592,   594,
     597,   599,   601,   603,   607,   609,   613,   617,   621,   623,
     627,   631,   637,   642,   645,   651,   659,   666,   675,   680,
     686,   694,   701,   710,   712,   716,   719,   722,   725,   726,
     728,   730,   733,   735,   737,   739,   742,   745,   748,   750,
     752,   754,   756,   759,   763,   765,   767,   770,   774,   779,
     782,   785,   787,   791,   793,   795,   797,   801
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      77,     0,    -1,    78,    -1,    77,    78,    -1,    79,    54,
      -1,    52,     5,   117,    -1,   102,    -1,    99,    -1,    54,
      -1,     1,    -1,   144,    -1,    83,    -1,   134,    -1,   119,
      -1,   135,    -1,    -1,    55,    -1,    84,    81,    -1,    44,
      84,    81,    -1,    45,     3,    -1,    45,    87,    -1,    46,
       3,    -1,    46,    87,    -1,    87,    -1,     3,    -1,    46,
       3,    -1,    87,    56,   149,    57,    -1,     3,    56,   149,
      57,    -1,    87,    56,   149,    57,    88,    -1,     3,    56,
     149,    57,    88,    -1,    87,    88,    -1,     3,    88,    -1,
      46,     3,    88,    -1,    85,    -1,    85,    88,    -1,    86,
      -1,    10,    86,    -1,    11,    86,    -1,     6,    -1,     7,
      -1,     7,     8,    -1,     8,    -1,     9,    -1,     9,     8,
      -1,     9,     9,    -1,     9,     9,     8,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,     3,    40,     3,    -1,
      87,    40,     3,    -1,    89,    -1,    88,    89,    -1,    58,
      -1,    58,    44,    -1,    82,    91,    -1,    82,    87,    -1,
      90,    59,   129,    60,    -1,    90,    59,    60,    -1,     3,
      -1,     3,    61,     4,    -1,    91,    -1,    88,     3,    -1,
      92,    59,   129,    60,    -1,    92,    59,    60,    -1,    90,
      -1,    52,    90,    -1,    90,    62,   129,    -1,    93,    -1,
      94,    63,    92,    -1,    94,    54,    -1,    95,    94,    54,
      -1,    -1,    97,    -1,    97,    63,    53,    -1,    53,    -1,
      93,    -1,    98,    -1,    97,    63,    93,    -1,    97,    63,
      98,    -1,    82,    -1,    82,    62,   129,    -1,    98,    59,
     129,    60,    -1,    98,    59,    60,    -1,   104,   117,    -1,
      -1,   116,    61,   100,   117,    -1,   150,   104,   117,    -1,
      -1,   150,   116,    61,   101,   117,    -1,   105,   117,    -1,
      -1,   115,    61,   103,   117,    -1,   106,   110,   111,    -1,
     116,    -1,   114,    -1,   107,   110,   111,    -1,   115,    -1,
     113,    -1,    82,    87,    64,    96,    65,    -1,    82,     3,
      56,   149,    57,    40,     3,    64,    96,    65,    -1,   108,
      -1,    82,     3,    64,    96,    65,    -1,   109,    -1,    82,
      87,    40,    43,   128,    64,    96,    65,    -1,    87,    40,
      43,    82,    64,    65,    -1,    82,     3,    40,    43,   128,
      64,    96,    65,    -1,     3,    40,    43,    82,    64,    65,
      -1,    82,    43,   128,    64,    96,    65,    -1,    43,    82,
      64,    65,    -1,    -1,    44,    -1,    -1,    18,    64,   112,
      65,    -1,    82,    -1,   112,    63,    82,    -1,    66,     3,
      64,    65,    -1,    87,    40,    66,     3,    64,    65,    -1,
       3,    40,    66,     3,    64,    65,    -1,     3,    56,   149,
      57,    40,    66,     3,    64,    65,    -1,    87,    56,   149,
      57,    40,    66,     3,    64,    65,    -1,     3,    64,    96,
      65,   111,    -1,    87,    64,    96,    65,   111,    -1,     3,
      56,   149,    57,    40,     3,    64,    96,    65,   111,    -1,
      87,    56,   149,    57,    40,     3,    64,    96,    65,   111,
      -1,    -1,    67,   118,    68,    -1,    48,    67,   120,    68,
      -1,    48,     3,    67,   120,    68,    -1,    48,     3,    -1,
     121,    -1,   120,    63,   121,    -1,     3,    -1,     3,    62,
     129,    -1,    -1,   124,    -1,   124,    61,    -1,   123,   124,
      61,    -1,    51,    -1,    50,    -1,    49,    -1,    55,    -1,
      58,    -1,    69,    -1,    70,    -1,    66,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    56,    -1,
      57,    -1,    63,    -1,    62,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,   127,    -1,   125,    -1,
     126,    -1,    15,    -1,    16,    -1,    19,    -1,    41,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      59,    60,    -1,    64,    65,    -1,   130,    -1,   117,    -1,
     133,    -1,     4,    -1,    70,     4,    -1,     5,    -1,     3,
      -1,    87,    -1,    64,   130,    65,    -1,   131,    -1,   132,
      58,   131,    -1,   132,    72,   131,    -1,   132,    73,   131,
      -1,   132,    -1,   133,    69,   132,    -1,   133,    70,   132,
      -1,    47,     3,    67,    95,    68,    -1,    47,    67,    95,
      68,    -1,    47,     3,    -1,    45,     3,    67,   139,    68,
      -1,    45,     3,    61,   136,    67,   139,    68,    -1,   150,
      45,     3,    67,   139,    68,    -1,   150,    45,     3,    61,
     136,    67,   139,    68,    -1,    46,    67,   139,    68,    -1,
      46,     3,    67,   139,    68,    -1,    46,     3,    61,   136,
      67,   139,    68,    -1,   150,    46,     3,    67,   139,    68,
      -1,   150,    46,     3,    61,   136,    67,   139,    68,    -1,
     137,    -1,   136,    63,   137,    -1,   122,    82,    -1,    42,
     105,    -1,    42,    83,    -1,    -1,   140,    -1,   142,    -1,
     140,   142,    -1,   143,    -1,     1,    -1,   141,    -1,   123,
     141,    -1,   144,    54,    -1,   138,    54,    -1,   102,    -1,
      54,    -1,    94,    -1,   105,    -1,    52,   105,    -1,   105,
      62,     4,    -1,   145,    -1,    80,    -1,    80,     3,    -1,
     145,    59,    60,    -1,   145,    59,   129,    60,    -1,    45,
       3,    -1,    82,     3,    -1,   146,    -1,   147,    63,   146,
      -1,     4,    -1,    82,    -1,   148,    -1,   149,    63,   148,
      -1,    17,    56,   147,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   427,   427,   428,   432,   433,   438,   445,   453,   454,
     468,   483,   487,   494,   501,   505,   506,   510,   519,   529,
     530,   531,   532,   536,   537,   538,   546,   554,   562,   571,
     580,   588,   596,   604,   605,   616,   617,   626,   638,   639,
     640,   646,   647,   648,   654,   660,   667,   668,   669,   670,
     674,   682,   694,   695,   707,   708,   712,   721,   730,   741,
     754,   755,   759,   760,   768,   776,   787,   788,   789,   797,
     802,   813,   820,   832,   835,   839,   848,   860,   861,   862,
     867,   875,   884,   894,   905,   918,   920,   919,   921,   929,
     928,   939,   941,   940,   945,   951,   952,   956,   962,   963,
     968,   975,   987,   993,  1000,  1004,  1015,  1027,  1038,  1053,
    1063,  1076,  1077,  1081,  1082,  1092,  1093,  1104,  1117,  1129,
    1141,  1153,  1168,  1179,  1187,  1200,  1216,  1216,  1220,  1227,
    1235,  1245,  1246,  1257,  1258,  1268,  1270,  1274,  1275,  1279,
    1280,  1281,  1285,  1286,  1287,  1288,  1289,  1290,  1294,  1295,
    1296,  1297,  1298,  1299,  1300,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1318,  1319,  1320,  1321,
    1322,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,
    1332,  1333,  1334,  1335,  1336,  1340,  1341,  1345,  1349,  1350,
    1357,  1358,  1359,  1360,  1370,  1371,  1379,  1387,  1398,  1399,
    1407,  1419,  1427,  1434,  1444,  1457,  1470,  1484,  1498,  1512,
    1525,  1538,  1552,  1569,  1570,  1574,  1578,  1579,  1583,  1584,
    1588,  1595,  1607,  1608,  1623,  1624,  1628,  1629,  1630,  1631,
    1635,  1642,  1643,  1644,  1645,  1649,  1650,  1651,  1652,  1660,
    1667,  1678,  1679,  1690,  1691,  1695,  1696,  1707
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "VOID", "NEW", "DELETE", "TEMPLATE", "THROW",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "CLCL", "MEM_PTR_OP", "FRIEND",
  "OPERATOR", "CONST", "CLASS", "STRUCT", "UNION", "ENUM", "PROTECTED",
  "PRIVATE", "PUBLIC", "EXTERN", "ELIPSIS", "';'", "'&'", "'<'", "'>'",
  "'*'", "'['", "']'", "':'", "'='", "','", "'('", "')'", "'~'", "'{'",
  "'}'", "'+'", "'-'", "'!'", "'/'", "'%'", "'^'", "'|'", "$accept",
  "translation_unit", "declaration", "declaration_specifiers",
  "type_specifier", "ampersand_opt", "type_name", "forward_decl",
  "non_reference_type", "simple_signed_type", "simple_type_name",
  "scoped_identifier", "pointer", "asterisk", "variable_or_parameter",
  "bitfield_savvy_identifier", "variable_name", "variable_specifier",
  "multiple_variable_specifier", "variable_specifier_list",
  "parameter_list_opt", "parameter_list", "unnamed_parameter",
  "function_skeleton", "@1", "@2", "member_func_inlined", "@3",
  "member_func_skel", "member_func_specifier", "member_func_skel_spec",
  "function_specifier", "overloaded_op_skeleton",
  "overloaded_op_specifier", "const_opt", "throw_decl", "throw_list",
  "destructor", "destructor_skeleton", "constructor",
  "constructor_skeleton", "compound_statement", "@4", "enum_specifier",
  "enumerator_list", "enumerator", "access_specifier_opt",
  "access_specifier_list", "access_specifier", "unary_operator",
  "binary_operator", "assignment_operator", "any_operator",
  "constant_value", "expression", "primary_expression",
  "multiplicative_expression", "additive_expression", "union_specifier",
  "class_specifier", "superclass_list", "superclass", "friend_specifier",
  "member_list_opt", "member_list", "member_or_error",
  "member_with_access", "member", "member_specifier", "mem_type_specifier",
  "template_arg", "template_arg_list", "template_instance_arg",
  "template_instance_arg_list", "template_specifier", 0
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
     305,   306,   307,   308,    59,    38,    60,    62,    42,    91,
      93,    58,    61,    44,    40,    41,   126,   123,   125,    43,
      45,    33,    47,    37,    94,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    97,
      97,    98,    98,    98,    98,    99,   100,    99,    99,   101,
      99,   102,   103,   102,   104,   104,   104,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   114,   114,
     114,   114,   115,   116,   116,   116,   118,   117,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   125,   125,   125,   125,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     3,     2,
       2,     2,     2,     1,     1,     2,     4,     4,     5,     5,
       2,     2,     3,     1,     2,     1,     2,     2,     1,     1,
       2,     1,     1,     2,     2,     3,     1,     1,     1,     1,
       3,     3,     1,     2,     1,     2,     2,     2,     4,     3,
       1,     3,     1,     2,     4,     3,     1,     2,     3,     1,
       3,     2,     3,     0,     1,     3,     1,     1,     1,     3,
       3,     1,     3,     4,     3,     2,     0,     4,     3,     0,
       5,     2,     0,     4,     3,     1,     1,     3,     1,     1,
       5,    10,     1,     5,     1,     8,     6,     8,     6,     6,
       4,     0,     1,     0,     4,     1,     3,     4,     6,     6,
       9,     9,     5,     5,    10,    10,     0,     3,     4,     5,
       2,     1,     3,     1,     3,     0,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     1,     3,     3,     3,     1,     3,
       3,     5,     4,     2,     5,     7,     6,     8,     4,     5,
       7,     6,     8,     1,     3,     2,     2,     2,     0,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     3,     1,     1,     2,     3,     4,     2,
       2,     1,     3,     1,     1,     1,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    24,    38,    39,    41,    42,     0,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     2,     0,   235,     0,    11,    15,    33,
      35,    23,    66,    69,   230,     7,     6,     0,   231,   111,
     111,   102,   104,    99,    96,    98,    95,    13,    12,    14,
      10,   234,     0,     0,     0,    54,    73,    31,    52,    40,
      43,    44,    46,    36,    37,     0,    24,     0,     0,    23,
      15,    19,    20,    25,     0,    22,   203,     0,   130,     0,
      24,     0,     0,    67,   232,    98,     0,     1,     3,     4,
     236,    60,     0,    57,    56,    16,    17,    34,     0,     0,
      73,    30,     0,     0,     0,   126,    85,     0,    91,   112,
     113,   113,    92,    86,     0,    24,     0,     0,     0,     0,
      95,    50,     0,     0,   243,   244,   245,     0,    55,     0,
      76,    81,    77,     0,    74,    78,    53,    45,     0,     0,
     241,     0,     0,     0,    25,     0,     0,     0,    18,   135,
       0,   135,     0,    32,   223,     0,     0,     0,   141,   140,
     139,     0,   229,   228,     0,     0,     0,     0,     0,   224,
     220,   222,     0,     0,     0,     0,     0,     0,     0,   133,
       0,   131,     5,    60,    57,     0,     0,     0,     0,    73,
     169,   170,   171,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   172,   142,   152,   153,   143,     0,   155,
     154,     0,   146,   144,   145,   147,   148,   149,   150,   151,
     167,   168,   166,     0,     0,    73,    51,     0,     0,     0,
       0,   191,   188,   190,    59,     0,     0,   192,   186,     0,
     185,   194,   198,   187,    68,    60,     0,    62,    70,     0,
     233,     0,    94,    97,     0,     0,   237,     0,     0,    25,
       0,     0,    88,    89,     0,     0,    27,     0,    60,     0,
     113,     0,     0,   239,   240,   247,     0,     0,   110,     0,
       0,   136,     0,   213,     0,     0,     0,     0,     0,     0,
     217,   216,     0,    25,     0,   225,   137,   227,   208,   221,
     226,     0,     0,    71,   202,     0,     0,     0,     0,   128,
     117,     0,     0,    61,     0,   183,   184,    73,     0,     0,
       0,     0,    26,   113,     0,   189,    58,     0,     0,     0,
       0,     0,    63,     0,   127,     0,    93,    87,   238,   135,
       0,   135,     0,     0,     0,     0,     0,    29,   246,    82,
     122,    75,    79,    80,    84,     0,   242,    27,    26,   215,
     135,     0,   204,     0,   209,    19,    25,     0,   138,     0,
     201,    72,   129,   134,   132,     0,     0,   103,     0,     0,
     100,     0,     0,     0,    28,   123,   193,   195,   196,   197,
     199,   200,    65,     0,   115,     0,     0,     0,     0,     0,
      90,   108,   119,     0,     0,    83,   214,     0,     0,    73,
       0,   109,    73,   106,   118,     0,     0,    64,     0,   114,
       0,   206,     0,   211,    73,     0,   205,   210,     0,     0,
       0,    73,     0,   116,     0,     0,     0,     0,   107,    73,
     105,     0,     0,   207,   212,   113,   120,     0,   113,   121,
     124,   101,   125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,    96,    82,    27,    28,    29,
      30,    69,   153,    58,    32,    94,   258,    33,    34,   177,
     133,   134,   135,    35,   265,   353,   163,   264,    37,    38,
      39,    40,    41,    42,   110,   262,   405,    43,    44,    45,
      46,   248,   259,    47,   180,   181,   290,   164,   165,   230,
     231,   232,   233,   249,   250,   251,   252,   253,    48,    49,
     292,   293,   166,   167,   168,   169,   170,   171,   172,    51,
     140,   141,   126,   127,   173
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
     612,  -166,   139,  -166,    93,  -166,   119,   369,   369,  -166,
    -166,  -166,    33,   835,   286,   112,     8,    21,    27,   474,
    -166,   164,   536,  -166,   -17,   166,    37,  -166,   135,   143,
    -166,   159,   225,  -166,   148,  -166,  -166,   155,   -12,   189,
     189,  -166,  -166,  -166,  -166,   183,   244,  -166,  -166,  -166,
    -166,   190,   548,    26,   781,   266,   709,   143,  -166,  -166,
    -166,   307,  -166,  -166,  -166,   823,   125,   323,   301,   146,
     135,     3,   328,   117,   457,   328,   296,   769,   326,   371,
     187,   155,    54,   338,  -166,  -166,   347,  -166,  -166,  -166,
    -166,   160,   672,    95,  -166,  -166,  -166,   143,    38,   781,
     709,   143,    23,    56,    18,  -166,  -166,   406,  -166,  -166,
     397,   397,  -166,  -166,    81,   248,   413,   414,   415,   155,
     359,  -166,   835,   418,  -166,  -166,  -166,   131,  -166,   835,
    -166,    17,  -166,   358,   361,   366,  -166,  -166,   423,   424,
    -166,   193,   426,   781,   143,   365,   428,   781,  -166,   290,
     457,   290,   457,   143,  -166,   346,   429,    31,  -166,  -166,
    -166,   624,  -166,  -166,   597,   374,   382,   370,   521,  -166,
    -166,  -166,   386,   216,   769,   439,   142,   257,   371,   381,
     145,  -166,  -166,    85,   328,   379,   110,   781,   442,   709,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,   387,  -166,
    -166,   383,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   388,   118,   709,  -166,   835,   447,   222,
     407,   411,  -166,  -166,  -166,    69,   458,   328,  -166,   416,
    -166,  -166,   181,   315,  -166,   412,    20,  -166,   419,   421,
    -166,   427,  -166,  -166,   155,   155,  -166,   430,   241,   -19,
       6,    95,  -166,  -166,   431,   432,    -5,   781,    79,    56,
     397,   757,   106,  -166,  -166,  -166,   823,   254,  -166,   256,
     835,  -166,   268,  -166,   425,   270,   444,   472,   489,   121,
    -166,  -166,   253,   215,   433,  -166,  -166,  -166,  -166,  -166,
    -166,   494,   393,  -166,  -166,   220,   212,    56,   371,  -166,
    -166,   672,   265,  -166,   445,  -166,  -166,   709,   672,   448,
     434,   450,   104,   397,   451,  -166,  -166,    69,    69,    69,
      69,    69,  -166,   188,  -166,   835,  -166,  -166,  -166,   290,
     457,   290,   457,   155,   454,   456,    29,   143,  -166,  -166,
    -166,  -166,  -166,   366,  -166,   455,  -166,   143,   143,  -166,
     290,   457,  -166,   457,  -166,   411,   174,   462,  -166,   262,
    -166,  -166,  -166,  -166,  -166,   477,   512,  -166,   509,   513,
    -166,   511,   520,    46,   143,  -166,  -166,  -166,  -166,  -166,
     181,   181,  -166,   518,  -166,   283,   275,   523,   299,   527,
    -166,  -166,  -166,   522,   593,  -166,  -166,   529,   531,   709,
     598,  -166,   709,  -166,  -166,   552,   609,  -166,   835,  -166,
     457,  -166,   457,  -166,   709,   553,  -166,  -166,   563,   586,
     587,   709,   589,  -166,   594,   601,   596,   600,  -166,   709,
    -166,   606,   607,  -166,  -166,   397,  -166,   608,   397,  -166,
    -166,  -166,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,   632,  -166,  -166,   604,     0,   524,   661,  -166,
     380,   116,     2,   -50,   -11,   572,  -166,   -55,   -72,   503,
     -98,  -166,   399,  -166,  -166,  -166,    44,  -166,   629,    -3,
    -166,  -166,  -166,  -166,   642,  -108,  -166,  -166,  -166,    -1,
     631,   -23,  -166,  -166,   506,   367,  -166,  -166,  -139,  -166,
    -166,  -166,  -165,   -97,   441,    34,    68,  -166,  -166,  -166,
    -142,   319,  -166,  -114,  -166,   550,   556,  -166,   108,  -166,
     440,  -166,   460,   -80,   114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -220
static const yytype_int16 yytable[] =
{
      26,   132,   240,   263,    57,   176,   254,   136,    83,   295,
     291,    73,   291,    68,   106,   108,    84,   267,    85,   239,
     278,   255,    26,   342,    76,   304,   241,   242,   243,   121,
      78,    97,   413,   101,   303,   356,   294,    89,   296,    55,
      91,   236,   351,   142,    36,   132,   186,   136,   352,   425,
     107,   136,   118,    55,   125,   105,   131,   183,   182,   241,
     242,   243,   187,   287,   149,   139,    36,   289,    57,   122,
     150,   101,   241,   242,   243,    74,    55,   175,    55,   279,
      92,   237,    57,   244,   241,   242,   243,   245,    77,    65,
     105,   324,   123,   246,    79,   414,   272,    92,    74,   125,
     131,    59,   176,   136,   238,   315,   256,   322,    50,   241,
     242,   243,   426,   121,    52,    71,    31,    57,    83,   142,
     245,   236,   274,   105,   377,   142,   246,    60,    61,   175,
      50,    72,    75,   245,   132,   234,    52,   329,    31,   246,
     188,   266,    93,   125,   393,   245,   188,   125,   105,   189,
      83,   246,   301,   321,    85,   299,   385,   142,    84,   235,
      85,   328,    55,   389,    92,   142,   364,    86,    31,    90,
     245,   -21,   360,   105,   175,    55,   246,   175,   151,    53,
     132,   143,   359,    55,   152,   365,   146,   125,   276,   131,
      95,   241,   242,   243,   277,    54,   313,    55,   184,    98,
     186,    55,   147,    56,    55,   104,   136,   406,   318,   408,
     291,   104,   291,   319,   142,    99,   187,    55,   247,   247,
     383,   188,   105,   100,   189,   395,   362,   142,   -21,   388,
     247,   291,    55,   109,   271,   131,   407,   330,   409,   337,
     315,   346,   347,   143,   112,    55,   403,   184,   402,   114,
     285,    56,   245,   338,   339,   105,   286,   417,   246,   418,
      66,   116,   311,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   132,    55,   381,   318,   151,   125,   357,   332,
     382,   131,   152,   104,   102,   277,   139,   103,    53,    66,
     369,   184,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    14,   349,    67,    54,   113,    55,   136,   350,   129,
     128,   367,   175,   368,   149,   137,   444,   277,   445,   277,
     150,   438,   386,   351,   440,   314,   144,   131,   277,   352,
     410,   370,    67,   370,   394,   371,   446,   373,   370,   158,
     159,   160,   430,   451,   136,   404,   428,   460,   429,    80,
     462,   457,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   247,   370,   174,   132,   145,   432,   132,   146,   357,
     394,   397,   398,   399,   179,     3,     4,     5,     6,   132,
      62,     9,    10,    11,   340,   341,   132,    63,    64,    13,
      14,   297,   298,   178,   132,   247,    66,   102,   247,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   400,   401,
     260,   185,    21,    72,    75,   261,   268,   269,   270,   131,
     273,   275,   131,   280,   281,   282,   283,   284,   443,   121,
     288,   236,   302,   247,   131,   306,   307,    14,   308,    67,
     310,   131,   278,   317,   320,   129,   323,   325,   326,   131,
     331,   142,   327,   247,   247,   247,   247,   247,   154,   247,
      80,   380,   335,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   333,   188,    12,   375,   336,    80,   343,    81,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   344,
     348,   345,   376,   372,   378,   354,   355,   379,   391,   155,
      13,    14,   156,   157,    17,    18,   158,   159,   160,   161,
     387,   162,   374,   390,   392,   415,   396,    13,    14,   411,
      67,   412,   154,    21,    80,  -218,   189,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    87,     1,    12,     2,
      21,   419,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   115,   420,    12,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   155,    13,    14,   156,   157,    17,    18,
     158,   159,   160,   161,   421,   162,   423,   422,   427,    13,
      14,    15,    16,    17,    18,   424,   434,    21,    19,  -219,
      20,   431,    14,   116,   117,   433,   435,   436,   154,   437,
      80,   439,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   442,     1,    12,     2,   441,   447,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    80,   448,    12,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   155,
      13,    14,   156,   157,    17,    18,   158,   159,   160,   161,
     449,   162,   450,   452,    88,    13,    14,    15,    16,    17,
      18,   455,   453,    21,    19,   456,    20,    13,    14,   454,
      67,   458,   459,   461,   148,    70,   257,   312,    21,   300,
     363,   119,   111,   120,   316,   384,   334,   190,   191,   416,
      21,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,    66,   213,   305,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   309,     0,   366,   214,   215,   216,
     217,   218,     0,     0,   219,   220,   221,   358,   222,     0,
       0,   223,   224,   225,   226,   227,   228,   229,     0,     0,
       0,     0,     0,    14,     0,    67,     0,     0,     0,     0,
      66,   129,   130,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    66,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    66,   124,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
       0,    14,     0,    67,     0,     0,     0,     0,     0,   129,
     361,     0,     0,    14,     0,    67,     0,     0,     0,     0,
       0,   129,     0,     0,     0,    14,    66,    67,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    66,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,   138,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,    67
};

static const yytype_int16 yycheck[] =
{
       0,    56,   100,   111,     2,    77,   103,    57,    19,   151,
     149,     3,   151,    13,    37,    38,    19,   114,    19,    99,
       3,     3,    22,     3,     3,   164,     3,     4,     5,     3,
       3,    29,     3,    31,     3,    40,   150,    54,   152,    58,
       3,     3,    61,    40,     0,   100,    40,    97,    67,     3,
      62,   101,    52,    58,    54,    67,    56,     3,    81,     3,
       4,     5,    56,   143,    61,    65,    22,   147,    66,    43,
      67,    69,     3,     4,     5,    67,    58,    77,    58,    62,
      43,    43,    80,    60,     3,     4,     5,    64,    67,    56,
      67,   189,    66,    70,    67,    66,   119,    43,    67,    99,
     100,     8,   174,   153,    66,   177,   104,   187,     0,     3,
       4,     5,    66,     3,     0,     3,     0,   115,   129,    40,
      64,     3,   122,    67,     3,    40,    70,     8,     9,   129,
      22,    15,    16,    64,   189,    40,    22,   235,    22,    70,
      61,    60,    26,   143,    40,    64,    61,   147,    67,    64,
     161,    70,   155,    43,   155,   155,   321,    40,   161,    64,
     161,    43,    58,   328,    43,    40,    60,     3,    52,     3,
      64,    54,   280,    67,   174,    58,    70,   177,    61,    40,
     235,    56,   279,    58,    67,   282,    40,   187,    57,   189,
      55,     3,     4,     5,    63,    56,    54,    58,    82,    40,
      40,    58,    56,    64,    58,    63,   256,   349,    63,   351,
     349,    63,   351,    68,    40,    56,    56,    58,   102,   103,
     317,    61,    67,    64,    64,   333,   281,    40,    54,   327,
     114,   370,    58,    44,   118,   235,   350,   237,   352,    58,
     312,   264,   265,    56,    61,    58,   343,   131,    60,    59,
      57,    64,    64,    72,    73,    67,    63,   371,    70,   373,
       3,    45,    46,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   327,    58,    54,    63,    61,   277,   276,    57,
      68,   281,    67,    63,    59,    63,   286,    62,    40,     3,
     290,   175,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    44,    61,    46,    56,    61,    58,   357,    67,    52,
      44,    57,   312,    57,    61,     8,   430,    63,   432,    63,
      67,   419,    57,    61,   422,    68,     3,   327,    63,    67,
     353,    63,    46,    63,   332,    67,   434,    67,    63,    49,
      50,    51,    67,   441,   394,   345,    63,   455,    65,     3,
     458,   449,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   245,    63,    67,   419,    64,    67,   422,    40,   367,
     368,   337,   338,   339,     3,     6,     7,     8,     9,   434,
      11,    12,    13,    14,    69,    70,   441,     7,     8,    43,
      44,    45,    46,    67,   449,   279,     3,    59,   282,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   340,   341,
       4,    64,    66,   297,   298,    18,     3,     3,     3,   419,
      61,     3,   422,    65,    63,    59,     3,     3,   428,     3,
      65,     3,     3,   317,   434,    61,    54,    44,    68,    46,
      54,   441,     3,    62,    65,    52,     4,    60,    65,   449,
       3,    40,    64,   337,   338,   339,   340,   341,     1,   343,
       3,    68,     4,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    65,    61,    17,     3,    60,     3,    59,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    68,
      60,    64,     3,    68,    61,    64,    64,     3,    64,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      65,    54,    68,    65,    64,    60,    65,    43,    44,    65,
      46,    65,     1,    66,     3,    68,    64,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     1,    17,     3,
      66,    64,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     3,    40,    17,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    65,    54,    65,    64,    60,    43,
      44,    45,    46,    47,    48,    65,    64,    66,    52,    68,
      54,    68,    44,    45,    46,    68,     3,    68,     1,    68,
       3,     3,    66,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     3,     1,    17,     3,    64,    64,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     3,    65,    17,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      64,    54,    65,    64,    22,    43,    44,    45,    46,    47,
      48,    65,    68,    66,    52,    65,    54,    43,    44,    68,
      46,    65,    65,    65,    70,    14,   104,   174,    66,   155,
     281,    52,    40,    52,   178,   318,   245,    15,    16,   370,
      66,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     3,    41,   164,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   168,    -1,   286,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    64,   277,    66,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,
       3,    52,    53,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     3,    -1,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    44,     3,    46,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     3,    -1,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    17,    43,    44,    45,    46,    47,    48,    52,
      54,    66,    77,    78,    79,    80,    82,    83,    84,    85,
      86,    87,    90,    93,    94,    99,   102,   104,   105,   106,
     107,   108,   109,   113,   114,   115,   116,   119,   134,   135,
     144,   145,   150,    40,    56,    58,    64,    88,    89,     8,
       8,     9,    11,    86,    86,    56,     3,    46,    82,    87,
      84,     3,    87,     3,    67,    87,     3,    67,     3,    67,
       3,     5,    82,    90,   105,   115,     3,     0,    78,    54,
       3,     3,    43,    87,    91,    55,    81,    88,    40,    56,
      64,    88,    59,    62,    63,    67,   117,    62,   117,    44,
     110,   110,    61,    61,    59,     3,    45,    46,    82,   104,
     116,     3,    43,    66,     4,    82,   148,   149,    44,    52,
      53,    82,    93,    96,    97,    98,    89,     8,    45,    82,
     146,   147,    40,    56,     3,    64,    40,    56,    81,    61,
      67,    61,    67,    88,     1,    42,    45,    46,    49,    50,
      51,    52,    54,   102,   123,   124,   138,   139,   140,   141,
     142,   143,   144,   150,    67,    82,    94,    95,    67,     3,
     120,   121,   117,     3,    87,    64,    40,    56,    61,    64,
      15,    16,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    41,    55,    56,    57,    58,    59,    62,
      63,    64,    66,    69,    70,    71,    72,    73,    74,    75,
     125,   126,   127,   128,    40,    64,     3,    43,    66,   149,
      96,     3,     4,     5,    60,    64,    70,    87,   117,   129,
     130,   131,   132,   133,   129,     3,    88,    91,    92,   118,
       4,    18,   111,   111,   103,   100,    60,   129,     3,     3,
       3,    87,   117,    61,    82,     3,    57,    63,     3,    62,
      65,    63,    59,     3,     3,    57,    63,   149,    65,   149,
     122,   124,   136,   137,   139,   136,   139,    45,    46,    82,
      83,   105,     3,     3,   124,   141,    61,    54,    68,   142,
      54,    46,    95,    54,    68,    94,   120,    62,    63,    68,
      65,    43,   149,     4,    96,    60,    65,    64,    43,    96,
      82,     3,    57,    65,   130,     4,    60,    58,    72,    73,
      69,    70,     3,    59,    68,    64,   117,   117,    60,    61,
      67,    61,    67,   101,    64,    64,    40,    88,   148,   129,
     111,    53,    93,    98,    60,   129,   146,    57,    57,    82,
      63,    67,    68,    67,    68,     3,     3,     3,    61,     3,
      68,    54,    68,   129,   121,   128,    57,    65,    96,   128,
      65,    64,    64,    40,    88,   111,    65,   131,   131,   131,
     132,   132,    60,   129,    82,   112,   136,   139,   136,   139,
     117,    65,    65,     3,    66,    60,   137,   139,   139,    64,
      40,    65,    64,    65,    65,     3,    66,    60,    63,    65,
      67,    68,    67,    68,    64,     3,    68,    68,    96,     3,
      96,    64,     3,    82,   139,   139,    96,    64,    65,    64,
      65,    96,    64,    68,    68,    65,    65,    96,    65,    65,
     111,    65,   111
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
        case 5:
#line 434 "parser.y"
    { 
  log_printf("IGNORING extern \"C\" { ... } block.\n");
  free((yyvsp[(2) - (3)].string));
}
    break;

  case 6:
#line 439 "parser.y"
    { 
    (yyvsp[(1) - (1)].elt)->kind = INLINED_KIND; 
    log_printf("\nBEGIN matched dec : m_f_i rule --");
    print_se((yyvsp[(1) - (1)].elt)); 
    log_printf("END   matched dec : m_f_i rule\n");
}
    break;

  case 7:
#line 446 "parser.y"
    { 
    (yyvsp[(1) - (1)].elt)->kind = SKEL_KIND; 
    log_printf("\nBEGIN matched dec : function_skeleton rule --");
    print_se((yyvsp[(1) - (1)].elt)); 
    enqueue_skeleton((yyvsp[(1) - (1)].elt));
    log_printf("END   matched dec : function_skeleton rule\n");
}
    break;

  case 9:
#line 455 "parser.y"
    {
  log_printf("declaration : error.  Attempting to recover...\n");
  yyerrok;
  yyclearin;
  if (error_recovery() != 0) {
      log_printf("ERROR recovery could not complete -- YYABORT.\n");
      YYABORT;
  }
  log_printf("ERROR recovery complete.\n");
}
    break;

  case 10:
#line 469 "parser.y"
    {
    /* the name of the rule "member_specifier" might be misleading, but
     * this is either a class, struct, union, enum, global var, global
     * prototype, etc..  */
    if ((yyvsp[(1) - (1)].elt)->kind == CLASS_KIND || (yyvsp[(1) - (1)].elt)->kind == STRUCT_KIND) {
	enqueue_class((yyvsp[(1) - (1)].elt));
    } else {
	log_printf("\nIGNORING      dec_spec : mem_spec (%s) --",
		  string_kind((yyvsp[(1) - (1)].elt)->kind));
	print_se((yyvsp[(1) - (1)].elt));
	log_printf("END IGNORING  dec_spec : mem_spec (%s)\n",
		  string_kind((yyvsp[(1) - (1)].elt)->kind));
    }
}
    break;

  case 12:
#line 488 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (yyvsp[(1) - (1)].string), NULL, IGNORE_KIND);
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 13:
#line 495 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (yyvsp[(1) - (1)].string), NULL, IGNORE_KIND);
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 15:
#line 505 "parser.y"
    { (yyval.flag) = 0; }
    break;

  case 16:
#line 506 "parser.y"
    { (yyval.flag) = 1; }
    break;

  case 17:
#line 511 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + ((yyvsp[(2) - (2)].flag) ? 2 : 0) + 1);
  strcpy(tmp_str, (yyvsp[(1) - (2)].string));
  if ((yyvsp[(2) - (2)].flag))
    strcat(tmp_str, " &");
  free((yyvsp[(1) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 18:
#line 520 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (3)].string)) + ((yyvsp[(3) - (3)].flag) ? 2 : 0) + 7);
  sprintf(tmp_str, "const %s%s", (yyvsp[(2) - (3)].string), ((yyvsp[(3) - (3)].flag) ? " &" : ""));
  free((yyvsp[(2) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 19:
#line 529 "parser.y"
    { free((yyvsp[(2) - (2)].string)); }
    break;

  case 20:
#line 530 "parser.y"
    { free((yyvsp[(2) - (2)].string)); }
    break;

  case 21:
#line 531 "parser.y"
    { free((yyvsp[(2) - (2)].string)); }
    break;

  case 22:
#line 532 "parser.y"
    { free((yyvsp[(2) - (2)].string)); }
    break;

  case 25:
#line 539 "parser.y"
    {
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 8);
  strcpy(tmp_str, "struct ");
  strcat(tmp_str, (yyvsp[(2) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 26:
#line 547 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (4)].string)) + strlen((yyvsp[(3) - (4)].string)) + 3);
  sprintf(tmp_str, "%s<%s>", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string));
  free((yyvsp[(1) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 27:
#line 555 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (4)].string)) + strlen((yyvsp[(3) - (4)].string)) + 3);
  sprintf(tmp_str, "%s<%s>", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string));
  free((yyvsp[(1) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 28:
#line 563 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (5)].string)) + strlen((yyvsp[(3) - (5)].string)) + strlen((yyvsp[(5) - (5)].string)) + 4);
  sprintf(tmp_str, "%s<%s> %s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string));
  free((yyvsp[(1) - (5)].string));
  free((yyvsp[(3) - (5)].string));
  free((yyvsp[(5) - (5)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 29:
#line 572 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (5)].string)) + strlen((yyvsp[(3) - (5)].string)) + strlen((yyvsp[(5) - (5)].string)) + 4);
  sprintf(tmp_str, "%s<%s> %s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string));
  free((yyvsp[(1) - (5)].string));
  free((yyvsp[(3) - (5)].string));
  free((yyvsp[(5) - (5)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 30:
#line 581 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 2);
  sprintf(tmp_str, "%s %s", (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 31:
#line 589 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 2);
  sprintf(tmp_str, "%s %s", (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 32:
#line 597 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 9);
  sprintf(tmp_str, "struct %s %s", (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(2) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 34:
#line 606 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 2);
  sprintf(tmp_str, "%s %s", (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 36:
#line 618 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 8);
  strcpy(tmp_str,"signed ");
  strcat(tmp_str, (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 37:
#line 627 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 10);
  strcpy(tmp_str,"unsigned ");
  strcat(tmp_str, (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 40:
#line 641 "parser.y"
    { 
  (yyval.string) = strdup("short int");
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
}
    break;

  case 43:
#line 649 "parser.y"
    { 
  (yyval.string) = strdup("long int");
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
}
    break;

  case 44:
#line 655 "parser.y"
    { 
  (yyval.string) = strdup("long long");
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
}
    break;

  case 45:
#line 661 "parser.y"
    { 
  (yyval.string) = strdup("long long int");
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(2) - (3)].string));
  free((yyvsp[(3) - (3)].string));
}
    break;

  case 50:
#line 675 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s::%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 51:
#line 683 "parser.y"
    { 
  /* control-Y programming! */
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s::%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 53:
#line 696 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 1);
  strcpy(tmp_str,(yyvsp[(1) - (2)].string));
  strcat(tmp_str,(yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 54:
#line 707 "parser.y"
    { (yyval.string) = strdup("*"); }
    break;

  case 55:
#line 708 "parser.y"
    { (yyval.string) = strdup("*const "); }
    break;

  case 56:
#line 713 "parser.y"
    { 
  arg_t *new_arg = (arg_t *) malloc(sizeof(arg_t));
  new_arg->type = (yyvsp[(1) - (2)].string);
  new_arg->name = (yyvsp[(2) - (2)].string);
  new_arg->array = NULL;
  new_arg->next = NULL;
  (yyval.arg) = new_arg;
}
    break;

  case 57:
#line 722 "parser.y"
    { 
  arg_t *new_arg = (arg_t *) malloc(sizeof(arg_t));
  new_arg->type = (yyvsp[(1) - (2)].string);
  new_arg->name = (yyvsp[(2) - (2)].string);
  new_arg->array = NULL;
  new_arg->next = NULL;
  (yyval.arg) = new_arg;
}
    break;

  case 58:
#line 731 "parser.y"
    {
  char *old_array = (yyvsp[(1) - (4)].arg)->array;
  int old_len = old_array ? strlen(old_array) : 0;
  (yyvsp[(1) - (4)].arg)->array = (char *) malloc(strlen((yyvsp[(3) - (4)].string)) + old_len + 3);
  sprintf((yyvsp[(1) - (4)].arg)->array, "%s[%s]", old_array ? old_array : "", (yyvsp[(3) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  if (old_array)
    free(old_array);
  (yyval.arg) = (yyvsp[(1) - (4)].arg);
}
    break;

  case 59:
#line 742 "parser.y"
    { 
  char *old_array = (yyvsp[(1) - (3)].arg)->array;
  int old_len = old_array ? strlen(old_array) : 0;
  (yyvsp[(1) - (3)].arg)->array = (char *) malloc(old_len + 3);
  sprintf((yyvsp[(1) - (3)].arg)->array, "%s[]", old_array ? old_array : "");
  if (old_array)
    free(old_array);
  (yyval.arg) = (yyvsp[(1) - (3)].arg);
}
    break;

  case 61:
#line 755 "parser.y"
    { free((yyvsp[(3) - (3)].string)); (yyval.string) = (yyvsp[(1) - (3)].string);}
    break;

  case 63:
#line 761 "parser.y"
    {
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 2);
  sprintf(tmp_str, "%s %s", (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 64:
#line 769 "parser.y"
    {
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (4)].string)) + strlen((yyvsp[(3) - (4)].string)) + 3);
  sprintf(tmp_str, "%s[%s]", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string));
  free((yyvsp[(1) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 65:
#line 777 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + 3);
  strcpy(tmp_str, (yyvsp[(1) - (3)].string));
  strcat(tmp_str, "[]");
  free((yyvsp[(1) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 67:
#line 788 "parser.y"
    { (yyval.arg) = (yyvsp[(2) - (2)].arg); }
    break;

  case 68:
#line 790 "parser.y"
    {
  free((yyvsp[(3) - (3)].string));
  (yyval.arg) = (yyvsp[(1) - (3)].arg);
}
    break;

  case 69:
#line 798 "parser.y"
    {
  (yyval.string) = args_to_string((yyvsp[(1) - (1)].arg), 0);
  free_args((yyvsp[(1) - (1)].arg));
}
    break;

  case 70:
#line 803 "parser.y"
    {
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s, %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 71:
#line 814 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + 2);
  sprintf(tmp_str, "%s;", (yyvsp[(1) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 72:
#line 821 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(2) - (3)].string)) + 3);
  sprintf(tmp_str, "%s\n%s;", (yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(2) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 73:
#line 832 "parser.y"
    { 
  (yyval.arg) = NULL; 
}
    break;

  case 74:
#line 836 "parser.y"
    {
  (yyval.arg) = reverse_arg_list((yyvsp[(1) - (1)].arg));
}
    break;

  case 75:
#line 840 "parser.y"
    {
  arg_t *new_arg = (arg_t *) malloc(sizeof(arg_t));
  new_arg->type = strdup("...");
  new_arg->name = NULL;
  new_arg->array = NULL;
  new_arg->next = (yyvsp[(1) - (3)].arg);
  (yyval.arg) = reverse_arg_list(new_arg);
}
    break;

  case 76:
#line 849 "parser.y"
    {
  arg_t *new_arg = (arg_t *) malloc(sizeof(arg_t));
  new_arg->type = strdup("...");
  new_arg->name = NULL;
  new_arg->array = NULL;
  new_arg->next = NULL;
  (yyval.arg) = new_arg;
}
    break;

  case 79:
#line 863 "parser.y"
    {
  (yyvsp[(3) - (3)].arg)->next = (yyvsp[(1) - (3)].arg);
  (yyval.arg) = (yyvsp[(3) - (3)].arg);
}
    break;

  case 80:
#line 868 "parser.y"
    { 
  (yyvsp[(3) - (3)].arg)->next = (yyvsp[(1) - (3)].arg);
  (yyval.arg) = (yyvsp[(3) - (3)].arg);
}
    break;

  case 81:
#line 876 "parser.y"
    {
  arg_t *new_arg = (arg_t *) malloc(sizeof(arg_t));
  new_arg->type = (yyvsp[(1) - (1)].string);
  new_arg->name = NULL;
  new_arg->array = NULL;
  new_arg->next = NULL;
  (yyval.arg) = new_arg;
}
    break;

  case 82:
#line 885 "parser.y"
    {
  arg_t *new_arg = (arg_t *) malloc(sizeof(arg_t));
  new_arg->type = (yyvsp[(1) - (3)].string);
  new_arg->name = NULL;
  new_arg->array = NULL;
  new_arg->next = NULL;
  free((yyvsp[(3) - (3)].string));
  (yyval.arg) = new_arg;
}
    break;

  case 83:
#line 895 "parser.y"
    {
  char *old_array = (yyvsp[(1) - (4)].arg)->array;
  int old_len = old_array ? strlen(old_array) : 0;
  (yyvsp[(1) - (4)].arg)->array = (char *) malloc(strlen((yyvsp[(3) - (4)].string)) + old_len + 3);
  sprintf((yyvsp[(1) - (4)].arg)->array, "%s[%s]", old_array ? old_array : "", (yyvsp[(3) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  if (old_array)
    free(old_array);
  (yyval.arg) = (yyvsp[(1) - (4)].arg);
}
    break;

  case 84:
#line 906 "parser.y"
    { 
  char *old_array = (yyvsp[(1) - (3)].arg)->array;
  int old_len = old_array ? strlen(old_array) : 0;
  (yyvsp[(1) - (3)].arg)->array = (char *) malloc(old_len + 3);
  sprintf((yyvsp[(1) - (3)].arg)->array, "%s[]", old_array ? old_array : "");
  if (old_array)
    free(old_array);
  (yyval.arg) = (yyvsp[(1) - (3)].arg);
}
    break;

  case 86:
#line 920 "parser.y"
    { if (collectMemberInitList() != 0) YYERROR; }
    break;

  case 88:
#line 922 "parser.y"
    {
  /* I think this is the correct behavior, but skel_elemcmp is wrong */
  /* $2->templ = $1; */
  free((yyvsp[(1) - (3)].string));
  (yyval.elt) = (yyvsp[(2) - (3)].elt);
}
    break;

  case 89:
#line 929 "parser.y"
    { if (collectMemberInitList() != 0) YYERROR; }
    break;

  case 90:
#line 930 "parser.y"
    { 
  /* I think this is the correct behavior, but skel_elemcmp is wrong */
  /* $2->templ = $1; */
  free((yyvsp[(1) - (5)].string));
  (yyval.elt) = (yyvsp[(2) - (5)].elt);
}
    break;

  case 92:
#line 941 "parser.y"
    { if (collectMemberInitList() != 0) YYERROR; }
    break;

  case 94:
#line 946 "parser.y"
    { 
    (yyvsp[(1) - (3)].elt)->const_flag = (yyvsp[(2) - (3)].flag); 
    (yyvsp[(1) - (3)].elt)->throw_decl = (yyvsp[(3) - (3)].string);
    (yyval.elt) = (yyvsp[(1) - (3)].elt); 
}
    break;

  case 97:
#line 957 "parser.y"
    { 
    (yyvsp[(1) - (3)].elt)->const_flag = (yyvsp[(2) - (3)].flag); 
    (yyvsp[(1) - (3)].elt)->throw_decl = (yyvsp[(3) - (3)].string);
    (yyval.elt) = (yyvsp[(1) - (3)].elt); 
}
    break;

  case 100:
#line 969 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem((yyvsp[(1) - (5)].string), (yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].arg), FUNC_KIND);
/*  print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 101:
#line 976 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem((yyvsp[(1) - (10)].string),
			      (char *) malloc(strlen((yyvsp[(2) - (10)].string)) + strlen((yyvsp[(4) - (10)].string)) + strlen((yyvsp[(7) - (10)].string)) + 5),
			      (yyvsp[(9) - (10)].arg), FUNC_KIND);
  sprintf(elem->name,"%s<%s>::%s", (yyvsp[(2) - (10)].string), (yyvsp[(4) - (10)].string), (yyvsp[(7) - (10)].string));
  free((yyvsp[(2) - (10)].string));
  free((yyvsp[(4) - (10)].string));
  free((yyvsp[(7) - (10)].string));
  (yyval.elt) = elem;
}
    break;

  case 103:
#line 994 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem((yyvsp[(1) - (5)].string), (yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].arg), FUNC_KIND);
  print_se(elem);
  (yyval.elt) = elem;
}
    break;

  case 105:
#line 1005 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem((yyvsp[(1) - (8)].string), (char *)malloc(strlen((yyvsp[(2) - (8)].string)) + strlen((yyvsp[(5) - (8)].string)) + 12),
			      (yyvsp[(7) - (8)].arg), FUNC_KIND);
  sprintf(elem->name, "%s::operator%s", (yyvsp[(2) - (8)].string), (yyvsp[(5) - (8)].string));
  free((yyvsp[(2) - (8)].string));
  free((yyvsp[(5) - (8)].string));
/*  print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 106:
#line 1016 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *)malloc(strlen((yyvsp[(1) - (6)].string)) + strlen((yyvsp[(4) - (6)].string)) + 13),
			      NULL, FUNC_KIND);
  sprintf(elem->name, "%s::operator %s", (yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].string));
  free((yyvsp[(1) - (6)].string));
  free((yyvsp[(4) - (6)].string));
/*  print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 107:
#line 1028 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem((yyvsp[(1) - (8)].string), (char *)malloc(strlen((yyvsp[(2) - (8)].string)) + strlen((yyvsp[(5) - (8)].string)) + 12),
			      (yyvsp[(7) - (8)].arg), FUNC_KIND);
  sprintf(elem->name, "%s::operator%s", (yyvsp[(2) - (8)].string), (yyvsp[(5) - (8)].string));
  free((yyvsp[(2) - (8)].string));
  free((yyvsp[(5) - (8)].string));
/*  print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 108:
#line 1039 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""),
			      (char *)malloc(strlen((yyvsp[(1) - (6)].string)) + strlen((yyvsp[(4) - (6)].string)) + 13),
			      NULL, FUNC_KIND);
  sprintf(elem->name, "%s::operator %s", (yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].string));
  free((yyvsp[(1) - (6)].string));
  free((yyvsp[(4) - (6)].string));
/*  print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 109:
#line 1054 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem((yyvsp[(1) - (6)].string), (char *)malloc(strlen((yyvsp[(3) - (6)].string)) + 9), 
			      (yyvsp[(5) - (6)].arg), FUNC_KIND);
  sprintf(elem->name, "operator%s", (yyvsp[(3) - (6)].string));
  free((yyvsp[(3) - (6)].string));
  print_se(elem);
  (yyval.elt) = elem;
}
    break;

  case 110:
#line 1064 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (char *)malloc(strlen((yyvsp[(2) - (4)].string)) + 10),
			      NULL, FUNC_KIND);
  sprintf(elem->name, "operator %s", (yyvsp[(2) - (4)].string));
  free((yyvsp[(2) - (4)].string));
  print_se(elem);
  (yyval.elt) = elem;
}
    break;

  case 111:
#line 1076 "parser.y"
    { (yyval.flag) = 0; }
    break;

  case 112:
#line 1077 "parser.y"
    { (yyval.flag) = 1; }
    break;

  case 113:
#line 1081 "parser.y"
    { (yyval.string) = NULL; }
    break;

  case 114:
#line 1083 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(3) - (4)].string)) + 8);
  sprintf(tmp_str, "throw(%s)", (yyvsp[(3) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 116:
#line 1094 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s, %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 117:
#line 1105 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (char *) malloc(strlen((yyvsp[(2) - (4)].string)) + 2),
			      NULL, FUNC_KIND);
  sprintf(elem->name,"~%s", (yyvsp[(2) - (4)].string));
  free((yyvsp[(2) - (4)].string));
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 118:
#line 1118 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *) malloc(strlen((yyvsp[(1) - (6)].string)) + strlen((yyvsp[(4) - (6)].string)) + 4),
			      NULL, FUNC_KIND);
  sprintf(elem->name,"%s::~%s", (yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].string));
  free((yyvsp[(1) - (6)].string));
  free((yyvsp[(4) - (6)].string));
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 119:
#line 1130 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *) malloc(strlen((yyvsp[(1) - (6)].string)) + strlen((yyvsp[(4) - (6)].string)) + 4),
			      NULL, FUNC_KIND);
  sprintf(elem->name,"%s::~%s", (yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].string));
  free((yyvsp[(1) - (6)].string));
  free((yyvsp[(4) - (6)].string));
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 120:
#line 1142 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *) malloc(strlen((yyvsp[(1) - (9)].string)) + strlen((yyvsp[(3) - (9)].string)) + strlen((yyvsp[(7) - (9)].string)) + 6),
			      NULL, FUNC_KIND);
  sprintf(elem->name,"%s<%s>::~%s", (yyvsp[(1) - (9)].string), (yyvsp[(3) - (9)].string), (yyvsp[(7) - (9)].string));
  free((yyvsp[(1) - (9)].string));
  free((yyvsp[(3) - (9)].string));
  free((yyvsp[(7) - (9)].string));
  (yyval.elt) = elem;
}
    break;

  case 121:
#line 1154 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *) malloc(strlen((yyvsp[(1) - (9)].string)) + strlen((yyvsp[(3) - (9)].string)) + strlen((yyvsp[(7) - (9)].string)) + 6),
			      NULL, FUNC_KIND);
  sprintf(elem->name,"%s<%s>::~%s", (yyvsp[(1) - (9)].string), (yyvsp[(3) - (9)].string), (yyvsp[(7) - (9)].string));
  free((yyvsp[(1) - (9)].string));
  free((yyvsp[(3) - (9)].string));
  free((yyvsp[(7) - (9)].string));
  (yyval.elt) = elem;
}
    break;

  case 122:
#line 1169 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].arg), FUNC_KIND);
  elem->throw_decl = (yyvsp[(5) - (5)].string);
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 123:
#line 1180 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].arg), FUNC_KIND);
  elem->throw_decl = (yyvsp[(5) - (5)].string);
/*  print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 124:
#line 1188 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *) malloc(strlen((yyvsp[(1) - (10)].string)) + strlen((yyvsp[(3) - (10)].string)) + strlen((yyvsp[(6) - (10)].string)) + 5),
			      (yyvsp[(8) - (10)].arg), FUNC_KIND);
  sprintf(elem->name,"%s<%s>::%s", (yyvsp[(1) - (10)].string), (yyvsp[(3) - (10)].string), (yyvsp[(6) - (10)].string));
  free((yyvsp[(1) - (10)].string));
  free((yyvsp[(3) - (10)].string));
  free((yyvsp[(6) - (10)].string));
  elem->throw_decl = (yyvsp[(10) - (10)].string);
  (yyval.elt) = elem;
}
    break;

  case 125:
#line 1201 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), 
			      (char *) malloc(strlen((yyvsp[(1) - (10)].string)) + strlen((yyvsp[(3) - (10)].string)) + strlen((yyvsp[(6) - (10)].string)) + 5),
			      (yyvsp[(8) - (10)].arg), FUNC_KIND);
  sprintf(elem->name,"%s<%s>::%s", (yyvsp[(1) - (10)].string), (yyvsp[(3) - (10)].string), (yyvsp[(6) - (10)].string));
  free((yyvsp[(1) - (10)].string));
  free((yyvsp[(3) - (10)].string));
  free((yyvsp[(6) - (10)].string));
  elem->throw_decl = (yyvsp[(10) - (10)].string);
  (yyval.elt) = elem;
}
    break;

  case 126:
#line 1216 "parser.y"
    { if (collectInlineDef() != 0) YYERROR; }
    break;

  case 128:
#line 1221 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(3) - (4)].string)) + 10);
  sprintf(tmp_str, "enum { %s }", (yyvsp[(3) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 129:
#line 1228 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (5)].string)) + strlen((yyvsp[(4) - (5)].string)) + 11);
  sprintf(tmp_str, "enum %s { %s }", (yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].string));
  free((yyvsp[(2) - (5)].string));
  free((yyvsp[(4) - (5)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 130:
#line 1236 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 6);
  sprintf(tmp_str, "enum %s", (yyvsp[(2) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 132:
#line 1247 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s, %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 134:
#line 1259 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 2);
  sprintf(tmp_str, "%s=%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 142:
#line 1285 "parser.y"
    { (yyval.string) = strdup("&"); }
    break;

  case 143:
#line 1286 "parser.y"
    { (yyval.string) = strdup("*"); }
    break;

  case 144:
#line 1287 "parser.y"
    { (yyval.string) = strdup("+"); }
    break;

  case 145:
#line 1288 "parser.y"
    { (yyval.string) = strdup("-"); }
    break;

  case 146:
#line 1289 "parser.y"
    { (yyval.string) = strdup("~"); }
    break;

  case 147:
#line 1290 "parser.y"
    { (yyval.string) = strdup("!"); }
    break;

  case 148:
#line 1294 "parser.y"
    { (yyval.string) = strdup("/"); }
    break;

  case 149:
#line 1295 "parser.y"
    { (yyval.string) = strdup("%"); }
    break;

  case 150:
#line 1296 "parser.y"
    { (yyval.string) = strdup("^"); }
    break;

  case 151:
#line 1297 "parser.y"
    { (yyval.string) = strdup("|"); }
    break;

  case 152:
#line 1298 "parser.y"
    { (yyval.string) = strdup("<"); }
    break;

  case 153:
#line 1299 "parser.y"
    { (yyval.string) = strdup(">"); }
    break;

  case 154:
#line 1300 "parser.y"
    { (yyval.string) = strdup(","); }
    break;

  case 155:
#line 1304 "parser.y"
    { (yyval.string) = strdup("="); }
    break;

  case 156:
#line 1305 "parser.y"
    { (yyval.string) = strdup("*="); }
    break;

  case 157:
#line 1306 "parser.y"
    { (yyval.string) = strdup("/="); }
    break;

  case 158:
#line 1307 "parser.y"
    { (yyval.string) = strdup("%="); }
    break;

  case 159:
#line 1308 "parser.y"
    { (yyval.string) = strdup("+="); }
    break;

  case 160:
#line 1309 "parser.y"
    { (yyval.string) = strdup("-="); }
    break;

  case 161:
#line 1310 "parser.y"
    { (yyval.string) = strdup("<<="); }
    break;

  case 162:
#line 1311 "parser.y"
    { (yyval.string) = strdup(">>="); }
    break;

  case 163:
#line 1312 "parser.y"
    { (yyval.string) = strdup("&="); }
    break;

  case 164:
#line 1313 "parser.y"
    { (yyval.string) = strdup("^="); }
    break;

  case 165:
#line 1314 "parser.y"
    { (yyval.string) = strdup("|="); }
    break;

  case 169:
#line 1321 "parser.y"
    { (yyval.string) = strdup(" new"); }
    break;

  case 170:
#line 1322 "parser.y"
    { (yyval.string) = strdup(" delete"); }
    break;

  case 171:
#line 1323 "parser.y"
    { (yyval.string) = strdup("->"); }
    break;

  case 172:
#line 1324 "parser.y"
    { (yyval.string) = strdup("->*"); }
    break;

  case 173:
#line 1325 "parser.y"
    { (yyval.string) = strdup("++"); }
    break;

  case 174:
#line 1326 "parser.y"
    { (yyval.string) = strdup("--"); }
    break;

  case 175:
#line 1327 "parser.y"
    { (yyval.string) = strdup("<<"); }
    break;

  case 176:
#line 1328 "parser.y"
    { (yyval.string) = strdup(">>"); }
    break;

  case 177:
#line 1329 "parser.y"
    { (yyval.string) = strdup("<="); }
    break;

  case 178:
#line 1330 "parser.y"
    { (yyval.string) = strdup(">="); }
    break;

  case 179:
#line 1331 "parser.y"
    { (yyval.string) = strdup("=="); }
    break;

  case 180:
#line 1332 "parser.y"
    { (yyval.string) = strdup("!="); }
    break;

  case 181:
#line 1333 "parser.y"
    { (yyval.string) = strdup("&&"); }
    break;

  case 182:
#line 1334 "parser.y"
    { (yyval.string) = strdup("||"); }
    break;

  case 183:
#line 1335 "parser.y"
    { (yyval.string) = strdup("[]"); }
    break;

  case 184:
#line 1336 "parser.y"
    { (yyval.string) = strdup("()"); }
    break;

  case 186:
#line 1341 "parser.y"
    { (yyval.string) = strdup("{ ... }"); }
    break;

  case 189:
#line 1351 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 2);
  sprintf(tmp_str, "-%s", (yyvsp[(2) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 193:
#line 1361 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (3)].string)) + 3);
  sprintf(tmp_str, "(%s)", (yyvsp[(2) - (3)].string));
  free((yyvsp[(2) - (3)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 195:
#line 1372 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 4);
  sprintf(tmp_str, "%s * %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 196:
#line 1380 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 4);
  sprintf(tmp_str, "%s / %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 197:
#line 1388 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 4);
  sprintf(tmp_str, "%s %% %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 199:
#line 1400 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 4);
  sprintf(tmp_str, "%s + %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 200:
#line 1408 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 4);
  sprintf(tmp_str, "%s - %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str; 
}
    break;

  case 201:
#line 1420 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (5)].string)) + strlen((yyvsp[(4) - (5)].string)) + 12);
  sprintf(tmp_str, "union %s { %s }", (yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].string));
  free((yyvsp[(2) - (5)].string));
  free((yyvsp[(4) - (5)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 202:
#line 1428 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(3) - (4)].string)) + 11);
  sprintf(tmp_str, "union { %s }", (yyvsp[(3) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 203:
#line 1435 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 7);
  sprintf(tmp_str, "union %s", (yyvsp[(2) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 204:
#line 1445 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(2) - (5)].string), NULL, CLASS_KIND);
  tmp_elem->children = reverse_list((yyvsp[(4) - (5)].elt));
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 205:
#line 1458 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(2) - (7)].string), NULL, CLASS_KIND);
  tmp_elem->children = reverse_list((yyvsp[(6) - (7)].elt));
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 206:
#line 1471 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(3) - (6)].string), NULL, CLASS_KIND);
  tmp_elem->children = reverse_list((yyvsp[(5) - (6)].elt));
  tmp_elem->templ = (yyvsp[(1) - (6)].string);
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 207:
#line 1485 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(3) - (8)].string), NULL, CLASS_KIND);
  tmp_elem->children = reverse_list((yyvsp[(7) - (8)].elt));
  tmp_elem->templ = (yyvsp[(1) - (8)].string);
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 208:
#line 1499 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), "unnamed_struct",
				    NULL, IGNORE_KIND);
  tmp_elem->children = reverse_list((yyvsp[(3) - (4)].elt));
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 209:
#line 1513 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(2) - (5)].string), NULL, STRUCT_KIND);
  tmp_elem->children = reverse_list((yyvsp[(4) - (5)].elt));
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 210:
#line 1526 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(2) - (7)].string), NULL, STRUCT_KIND);
  tmp_elem->children = reverse_list((yyvsp[(6) - (7)].elt));
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 211:
#line 1539 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(3) - (6)].string), NULL, STRUCT_KIND);
  tmp_elem->children = reverse_list((yyvsp[(5) - (6)].elt));
  tmp_elem->templ = (yyvsp[(1) - (6)].string);
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 212:
#line 1553 "parser.y"
    {
  syntaxelem_t *child;
  /* ret_type, name, args, kind */
  syntaxelem_t *tmp_elem = new_elem(strdup(""), (yyvsp[(3) - (8)].string), NULL, STRUCT_KIND);
  tmp_elem->children = reverse_list((yyvsp[(7) - (8)].elt));
  tmp_elem->templ = (yyvsp[(1) - (8)].string);
  
  for (child = tmp_elem->children; child != NULL; child = child->next)
      child->parent = tmp_elem;

/*   print_se(tmp_elem); */
  (yyval.elt) = tmp_elem;
}
    break;

  case 215:
#line 1574 "parser.y"
    { free((yyvsp[(2) - (2)].string)); }
    break;

  case 216:
#line 1578 "parser.y"
    { (yyvsp[(2) - (2)].elt)->kind = IGNORE_KIND; }
    break;

  case 218:
#line 1583 "parser.y"
    { (yyval.elt) = NULL; }
    break;

  case 220:
#line 1589 "parser.y"
    {
  if ((yyvsp[(1) - (1)].elt) != NULL)
    (yyvsp[(1) - (1)].elt)->next = NULL;
  
  (yyval.elt) = (yyvsp[(1) - (1)].elt); 
}
    break;

  case 221:
#line 1596 "parser.y"
    { 
  if ((yyvsp[(2) - (2)].elt) != NULL) {
    (yyvsp[(2) - (2)].elt)->next = (yyvsp[(1) - (2)].elt);
    (yyval.elt) = (yyvsp[(2) - (2)].elt); 
  } else {
    (yyval.elt) = (yyvsp[(1) - (2)].elt);
  }
}
    break;

  case 223:
#line 1609 "parser.y"
    {
  log_printf("member_with_access : error.  Attempting to recover...\n");
  yyerrok;
  yyclearin;
  if (error_recovery() != 0) {
      log_printf("ERROR recovery could not complete -- YYABORT.\n");
      YYABORT;
  }
  log_printf("ERROR recovery complete.\n");
  (yyval.elt) = NULL;
}
    break;

  case 225:
#line 1624 "parser.y"
    { (yyval.elt) = (yyvsp[(2) - (2)].elt); }
    break;

  case 227:
#line 1629 "parser.y"
    { (yyval.elt) = NULL; }
    break;

  case 228:
#line 1630 "parser.y"
    { (yyvsp[(1) - (1)].elt)->kind = INLINED_KIND; (yyval.elt) = (yyvsp[(1) - (1)].elt); }
    break;

  case 229:
#line 1631 "parser.y"
    { (yyval.elt) = NULL; }
    break;

  case 230:
#line 1636 "parser.y"
    { 
  /* ret_type, name, args, kind */
  syntaxelem_t *elem = new_elem(strdup(""), (yyvsp[(1) - (1)].string), NULL, IGNORE_KIND);
/*   print_se(elem); */
  (yyval.elt) = elem;
}
    break;

  case 232:
#line 1643 "parser.y"
    { (yyval.elt) = (yyvsp[(2) - (2)].elt); }
    break;

  case 233:
#line 1644 "parser.y"
    { (yyvsp[(1) - (3)].elt)->kind = IGNORE_KIND; free((yyvsp[(3) - (3)].string)); (yyval.elt) = (yyvsp[(1) - (3)].elt); }
    break;

  case 236:
#line 1650 "parser.y"
    { free((yyvsp[(2) - (2)].string)); (yyval.elt) = (yyvsp[(1) - (2)].elt); }
    break;

  case 238:
#line 1653 "parser.y"
    {
  free((yyvsp[(3) - (4)].string));
  (yyval.elt) = (yyvsp[(1) - (4)].elt); 
}
    break;

  case 239:
#line 1661 "parser.y"
    {
  char *tmp_str = (char *) malloc(strlen((yyvsp[(2) - (2)].string)) + 7);
  sprintf(tmp_str, "class %s", (yyvsp[(2) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 240:
#line 1668 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 2);
  sprintf(tmp_str, "%s %s", (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
  free((yyvsp[(1) - (2)].string));
  free((yyvsp[(2) - (2)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 242:
#line 1680 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s, %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 246:
#line 1697 "parser.y"
    { 
  char *tmp_str = (char *) malloc(strlen((yyvsp[(1) - (3)].string)) + strlen((yyvsp[(3) - (3)].string)) + 3);
  sprintf(tmp_str, "%s, %s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
  free((yyvsp[(1) - (3)].string));
  free((yyvsp[(3) - (3)].string));
  (yyval.string) = tmp_str;
}
    break;

  case 247:
#line 1708 "parser.y"
    {
  char *tmp_str = (char *) malloc(strlen((yyvsp[(3) - (4)].string)) + 12);
  sprintf(tmp_str, "template <%s>", (yyvsp[(3) - (4)].string));
  free((yyvsp[(3) - (4)].string));
  (yyval.string) = tmp_str;
}
    break;


/* Line 1267 of yacc.c.  */
#line 3924 "y.tab.c"
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


#line 1716 "parser.y"


static int yyerror(char *s /*UNUSED*/)
{
  if (outfile != NULL)
    fflush(outfile);

  return 0;
}

static int error_recovery()
{
  extern char linebuf[];
  extern int lineno;
  extern int column;
  extern int tokens_seen;

#ifdef SGDEBUG
  log_printf("parse error at line %d, file %s:\n%s\n%*s\n",
	     lineno, currentFile, linebuf, column, "^");
  log_flush();
#endif /* SGDEBUG */

  if (tokens_seen == 0) {
    /*
     * if we've seen no tokens but we're in an error, we must have
     * hit an EOF, either by stdin, or on a file.  Just give up
     * now instead of complaining.
     */
    return -1;

  } else {
    fprintf(stderr, "parse error at line %d, file %s:\n%s\n%*s\n",
	    lineno, currentFile, linebuf, column, "^");
  }

  linebuf[0] = '\0';

  for (;;) {
    int result = yylex();

    if (result <= 0) {
      /* fatal error: Unexpected EOF during parse error recovery */

#ifdef SGDEBUG
      log_printf("EOF in error recovery, line %d, file %s\n",
		 lineno, currentFile);
      log_flush();
#endif /* SGDEBUG */

      fprintf(stderr, "EOF in error recovery, line %d, file %s\n",
	      lineno, currentFile);

      return -1;
    }

    switch(result) {
    case IDENTIFIER:
    case CONSTANT:
    case STRING_LITERAL:
    case CHAR:
    case SHORT:
    case INT:
    case LONG:
    case SIGNED:
    case UNSIGNED:
    case FLOAT:
    case DOUBLE:
    case VOID:
      free(yylval.string);
      break;
    case (int) '{':
      if (collectInlineDef() != 0)
	return -1;
      result = yylex();
      return 0;
    case (int) ';':
      return 0;
    }
  }
}

