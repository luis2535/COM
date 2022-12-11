%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
extern int count_label;

void yyerror(const char* s);
%}

%union {
	int ival;
	float fval;
}

/* Declaração dos tokens... */

%token INT_TOKEN FLOAT_TOKEN
%token INTEGER_TYPE_TOKEN FLOAT_TYPE_TOKEN VOID_TYPE_TOKEN BOOL_TYPE_TOKEN STRING_TYPE_TOKEN
%token TRUE_TOKEN FALSE_TOKEN
%token IF_TOKEN ELSE_TOKEN WHILE_TOKEN RETURN_TOKEN
%token ADD_TOKEN SUB_TOKEN
%token MULT_TOKEN DIV_TOKEN
%token BIGGER_TOKEN SMALLER_EQUAL_TOKEN BIGGER_EQUAL_TOKEN SMALLER_TOKEN COMPARE_TOKEN DIFF_TOKEN
%token EQUAL_TOKEN
%token CHAR_TOKEN
%token ID_TOKEN
%token OPEN_BRACKET_TOKEN CLOSE_BRACKET_TOKEN
%token OPEN_PARENTHESES_TOKEN CLOSE_PARENTHESES_TOKEN
%token OPEN_KEYS_TOKEN CLOSE_KEYS_TOKEN
%token COMMA_TOKEN
%token SEMICOLON_TOKEN
%token SYMBOLS_TOKEN

%type<fval>
%type<ival>

%start programa

%%

programa:	{generateHeader(); generateMainHeader();}	declaracao-lista {generateMainFooter();} // ADICIONAR GENERATE HEADER
	;

declaracao-lista:	declaracao-lista declaracao
	|		declaracao
	;

declaracao:		var-declaracao
	|		fun-declaracao
	;

var-declaracao:		tipo-especificador ID_TOKEN SEMICOLON_TOKEN
//	|		tipo-especificador ID_TOKEN OPEN_BRACKET_TOKEN INT_TOKEN CLOSE_BRACKET_TOKEN SEMICOLON_TOKEN
	;

tipo-especificador:	INTEGER_TYPE_TOKEN {$$ = strdup($1);}
	|		VOID_TYPE_TOKEN {$$ = strdup($1);}
	;

fun-declaracao:		tipo-especificador ID_TOKEN OPEN_PARENTHESES_TOKEN params CLOSE_PARENTHESES_TOKEN composto-decl
	;

params:			param-lista
	|		vazio
	;

param-lista:		param-lista COMMA_TOKEN param
	|		param
	;

param:			tipo-especificador ID_TOKEN
	|		tipo-especificador ID_TOKEN OPEN_BRACKET_TOKEN CLOSE_BRACKET_TOKEN
	;

composto-decl:		OPEN_KEYS_TOKEN local-declaracoes statement-lista CLOSE_KEYS_TOKEN
	;

local-declaracoes:	local-declaracoes var-declaracao
	|
	;

statement-lista:	statement-lista statement
	|
	;

statement:		expressao-decl
	|		composto-decl
	|		selecao-decl
	|		iteracao-decl
	|		retorno-decl
	;

expressao-decl:		expressao SEMICOLON_TOKEN
	|		SEMICOLON_TOKEN
	;

selecao-decl:		IF_TOKEN OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN {$1 = count_label; onlyLabelForIf($1); count_label+=2} statement {onlyGoTo($1 + 1); onlyLabel($1);}
	|		IF_TOKEN OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN {$1 = count_label; onlyLabelForIf($1); count_label+=2} statement {onlyGoTo($1 + 1); onlyLabel($1);} ELSE_TOKEN statement {onlyLabel($1 + 1);}
	;

iteracao-decl:		WHILE_TOKEN {$1 = count_label; onlyLabel($1); count_label+=2;} OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN {onlyLabelForIf($1 + 1);} statement {onlyGoTo($1); onlyLabel($1 + 1)}
	;

retorno-decl:		RETURN_TOKEN SEMICOLON_TOKEN
	|		RETURN_TOKEN expressao SEMICOLON_TOKEN
	;

expressao:		var EQUAL_TOKEN expressao {atributeVariable($1);}
	|		simples-expressao
	;

var:			ID_TOKEN { $$ = strdup($1);}
//	|		ID_TOKEN OPEN_BRACKET_TOKEN expressao CLOSE_BRACKET_TOKEN
	;

simples-expressao:	soma-expressao relacional soma-expressao { putOpInStack('-'); ifStackInverse($2);}
	|		soma-expressao
	;

relacional:		SMALLER_EQUAL_TOKEN {$$ = strdup($1);}
	|		SMALLER_TOKEN {$$ = strdup($1);}
	|		BIGGER_TOKEN {$$ = strdup($1);}
	|		BIGGER_EQUAL_TOKEN {$$ = strdup($1);}
	|		COMPARE_TOKEN {$$ = strdup($1);}
	|		DIFF_TOKEN {$$ = strdup($1);}
	;

soma-expressao:		soma-expressao soma termo {putOpInStack($2);}
	|		termo
	;

soma:			ADD_TOKEN {$$ = strdup($1);}
	|		SUB_TOKEN {$$ = strdup($1);}
	;

termo:			termo mult fator {putOpInStack($2);}
	|		fator
	;
	
mult:			MULT_TOKEN {$$ = strdup($1);}
	|		DIV_TOKEN {$$ = strdup($1);}
	;

fator:			OPEN_PARENTHESES_TOKEN expressao CLOSE_PARENTHESES_TOKEN
	|		var {loadVariableValue(getLocation($1));}
	|		ativacao
	|		INT_TOKEN
	;

ativacao:		ID_TOKEN OPEN_PARENTHESES_TOKEN args CLOSE_PARENTHESES_TOKEN
	;

args:			arg-lista
	|
	;

arg-lista:		arg-lista COMMA_TOKEN expressao
	|		expressao
	;
vazio:
	;

%%

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