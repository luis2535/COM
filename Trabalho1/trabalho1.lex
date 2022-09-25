/* Linguagem: Pascal-like */

/* ========================================================================== */
/* Abaixo, indicado pelos limitadores "%{" e "%}", as includes necessárias... */
/* ========================================================================== */

%{
/* Para as funções atoi() e atof() */
#include <math.h>
%}

/* ========================================================================== */
/* ===========================  Sessão DEFINIÇÔES  ========================== */
/* ========================================================================== */

NUM [0-9]
ID	[a-z_][a-z0-9_]*
VAZIO " "
TIPO-ESPECIFICADOR "int"|"void"
KEYWORD "if"|"else"|"while"|"return"
SOMA "+"|"-"
MULT  "*"|"/"
RELACIONAL "<"|">"|"<="|">="|"!="|"=="
ATRIBUICAO "="
PRINTF "printf"
STRING ["]([a-z]*[ ]*[A-Z]*)*["]
COLCHETES "["|"]"
PARENTESES "("|")"
CHAVE "{"|"}"
VIRGULA ","
PONTO-E-VIRGULA ";"
SIMBOLOS "!"|"@"|"#"|"$"|"%"|"&"|"."|":"

%%

{NUM}+ { 
	printf( "Um valor inteiro: %s (%d)\n", yytext, atoi( yytext ) ); 
	}

{NUM}+.{NUM}+ { 
	printf( "Um valor flutuante: %s (%f)\n", yytext, atof( yytext ) ); 
	}

{TIPO-ESPECIFICADOR} {
	printf( "Um tipo especificador: %s\n", yytext);
}
{KEYWORD} {
	printf( "Uma palavra-chave: %s\n", yytext);
}
{SOMA} {
	printf( "Um operador de soma: %s\n", yytext );
}
{MULT} {
	printf( "Um operador de multiplicação: %s\n", yytext );
} 
{RELACIONAL} {
	printf( "Um operador relacional: %s\n", yytext );
}
{ATRIBUICAO} {
	printf( "Um operador de atribuição: %s\n", yytext );
}
{PRINTF} {
	printf( "Um função para imprimir na tela: %s\n", yytext );
}
{STRING} {
	printf( "Uma string: %s\n", yytext );
}
{ID} {
	printf( "Um identificador: %s\n", yytext );
}
{COLCHETES} {
	printf( "Um colchete: %s\n", yytext );
}
{PARENTESES} {
	printf( "Um parenteses: %s\n", yytext );
}
{CHAVE} {
	printf( "Uma chave: %s\n", yytext );
}
{VIRGULA} {
	printf( "Uma virgula: %s\n", yytext );
}
{PONTO-E-VIRGULA} {
	printf( "Um ponto e virgula delimitador: %s\n", yytext );
}
{SIMBOLOS} {
	printf( "Um simbolo: %s\n", yytext );
}
{VAZIO} {

}

[ \t] {

}

\n {

}



.  printf( "Caracter não reconhecido: %s\n", yytext );


%%

int main( argc, argv )
int argc;
char **argv;
{
	++argv, --argc;
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	yylex();
    
	return 0;
}