/* A Bison parser, made by GNU Bison 2.3.  */

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
     SEMICOLON = 258,
     ASSIGN = 259,
     PLUS = 260,
     MINUS = 261,
     ASTERISK = 262,
     SLASH = 263,
     PERCENT = 264,
     EQUAL = 265,
     NEQUAL = 266,
     LESS = 267,
     GREATER = 268,
     LESSEQUAL = 269,
     GREATEREQUAL = 270,
     LEFTPAREN = 271,
     RIGHTPAREN = 272,
     COMMA = 273,
     KEY_PROCEDURE = 274,
     KEY_PROGRAM = 275,
     KEY_IS = 276,
     KEY_END = 277,
     KEY_VAR = 278,
     KEY_BEGIN = 279,
     KEY_WHILE = 280,
     KEY_DO = 281,
     KEY_ENDWHILE = 282,
     KEY_IF = 283,
     KEY_THEN = 284,
     KEY_ENDIF = 285,
     KEY_ELSE = 286,
     KEY_READ = 287,
     KEY_WRITE = 288,
     KEY_REPEAT = 289,
     KEY_UNTIL = 290,
     NUMBER = 291,
     IDENTIFIER = 292
   };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define ASSIGN 259
#define PLUS 260
#define MINUS 261
#define ASTERISK 262
#define SLASH 263
#define PERCENT 264
#define EQUAL 265
#define NEQUAL 266
#define LESS 267
#define GREATER 268
#define LESSEQUAL 269
#define GREATEREQUAL 270
#define LEFTPAREN 271
#define RIGHTPAREN 272
#define COMMA 273
#define KEY_PROCEDURE 274
#define KEY_PROGRAM 275
#define KEY_IS 276
#define KEY_END 277
#define KEY_VAR 278
#define KEY_BEGIN 279
#define KEY_WHILE 280
#define KEY_DO 281
#define KEY_ENDWHILE 282
#define KEY_IF 283
#define KEY_THEN 284
#define KEY_ENDIF 285
#define KEY_ELSE 286
#define KEY_READ 287
#define KEY_WRITE 288
#define KEY_REPEAT 289
#define KEY_UNTIL 290
#define NUMBER 291
#define IDENTIFIER 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

