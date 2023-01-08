%{
    #include <stdio.h>
    extern int yyerror(char *message);
    extern int yylex(void);

%}

%token SEMICOLON
%token ASSIGN

%token PLUS
%token MINUS
%token ASTERISK
%token SLASH
%token PERCENT

%token EQUAL
%token NEQUAL
%token LESS
%token GREATER
%token LESSEQUAL
%token GREATEREQUAL 

%token LEFTPAREN
%token RIGHTPAREN
%token COMMA

%token KEY_PROCEDURE;
%token KEY_PROGRAM;
%token KEY_IS;
%token KEY_END;
%token KEY_VAR;
%token KEY_BEGIN;
%token KEY_WHILE;
%token KEY_DO;
%token KEY_ENDWHILE;
%token KEY_IF;
%token KEY_THEN;
%token KEY_ENDIF;
%token KEY_ELSE;
%token KEY_READ;
%token KEY_WRITE;
%token KEY_REPEAT;
%token KEY_UNTIL;

%token NUMBER;
%token IDENTIFIER;

%%

program:
|    procedures main
;

procedures:
|   procedures KEY_PROCEDURE proc_head KEY_IS KEY_VAR declarations KEY_BEGIN commands KEY_END {printf("lala");}
|   procedures KEY_PROCEDURE proc_head KEY_IS KEY_BEGIN commands KEY_END {}
;

main:
|   KEY_PROGRAM KEY_IS KEY_VAR declarations KEY_BEGIN commands KEY_END {}
|   KEY_PROGRAM KEY_IS KEY_BEGIN commands KEY_END {}
;

commands:
|   commands command {}
|   command {}
;

command:
|   IDENTIFIER ASSIGN expression SEMICOLON {}
|   KEY_IF condition KEY_THEN commands KEY_ELSE commands KEY_ENDIF {}
|   KEY_IF condition KEY_THEN commands KEY_ENDIF {}
|   KEY_WHILE condition KEY_DO commands KEY_ENDWHILE {}
|   KEY_REPEAT commands KEY_UNTIL condition SEMICOLON {}
|   proc_head SEMICOLON {}
|   KEY_READ IDENTIFIER SEMICOLON {}
|   KEY_WRITE value SEMICOLON {}
;

proc_head:
|   IDENTIFIER LEFTPAREN declarations RIGHTPAREN {}
;

declarations:
|   declarations COMMA IDENTIFIER {}
|   IDENTIFIER {}
;

expression:
|   value {}
|   value PLUS value {}
|   value MINUS value {}
|   value ASTERISK value {}
|   value SLASH value {}
|   value PERCENT value {}
;

condition:
|   value EQUAL value {}
|   value NEQUAL value {}
|   value GREATER value {}
|   value LESS value {}
|   value GREATEREQUAL value {}
|   value LESSEQUAL value {}
;

value:
|   NUMBER {}
|   IDENTIFIER {}
;
%%

int yyerror(const char* s) {
  fprintf(stderr, "Error: %s\n", s);
  return 0;
}