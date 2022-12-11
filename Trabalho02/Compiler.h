#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int yylex(); 
int yyparse();
FILE* yyin;

typedef struct Token{
    char conteudo[100];
	char tipo[50];
    int linha;
    int coluna;
    int localizacao;
	struct Token *proximo;
	struct Token *anterior;
}Token;


void TabelaToken();
void inserirToken(Token **tabela, char* conteudo, char* tipo, int linha, int coluna);
void generateHeader();
void generateMainHeader();
void generateMainFooter();
void generateFooter();
void onlyLabel(int label);
void onlyLabelForIf(int label);
void onlyGoTo(int label);
void putOpInStack(char op);
void loadVariableValue(int localizacao);

void atributeVariable(char *id);
int findLocalizacao(char *string);
void setLocalizacao(char *string, int local);