#include "Compiler.h"

int num_lin = 0;
int num_col = 0;
int cont_tokens = 0;
int cont_labels = 0;
int localizacoesUsadas = 0;
Token *tabela;
FILE *f;

void TabelaToken(){
Token *aux;
	aux = (Token *)malloc(sizeof(Token));
	aux = tabela;

	FILE *filePointer;
    filePointer = fopen("Tabela_simbolos.txt", "w+");
	fprintf(filePointer,"---------------------------------------------------------------------------------\n");
	fprintf(filePointer,"                               Tabela de Simbolos                              \n");
	fprintf(filePointer,"---------------------------------------------------------------------------------\n");
	fprintf(filePointer, "\t\tToken\t\t|\t\tTipo\t\t|\t\tLinha\t\t|\t\tColuna\t\t|\t\tLocalizacao\n");
	for(int i = 0; i < cont_tokens; i++){
		fprintf(filePointer, "\t%12s\t|\t%12s\t|\t%12i\t|\t%12i\t|\t%12i\t\n", aux->conteudo, aux->tipo, aux->linha, aux->coluna, aux->localizacao);
		aux = aux->proximo;
	}
	fprintf(filePointer,"---------------------------------------------------------------------------------\n");
	

}

void inserirToken(Token **tabela, char* conteudo, char* tipo, int linha, int coluna){
	cont_tokens++;
	Token *aux = (Token*)malloc(sizeof(Token));
	Token *novoToken = (Token*)malloc(sizeof(Token));

	strcpy(novoToken->conteudo,conteudo);
	strcpy(novoToken->tipo,tipo);
	novoToken->linha = linha;
	novoToken->coluna = coluna;
	novoToken->proximo = NULL;
	novoToken->localizacao = -1;
	novoToken->localizacao = findLocalizacao(conteudo);

	if(*tabela == NULL){
		*tabela = novoToken;
		novoToken->anterior = NULL;
	}
	else{
		aux = *tabela;
		while(aux->proximo){
			aux = aux->proximo;
		}
		aux->proximo = novoToken;
		novoToken->anterior = aux;
	}
    num_col += strlen(conteudo);
	
}
void generateHeader(){
	f = fopen("output.j", "w+");
	fprintf(f, ".source teste.txt\n.class public test\n.super java/lang/Object\n");
	fprintf(f, ".method public <init>()V\n");
	fprintf(f, "	aload_0\n");
	fprintf(f, "	invokenonvirtual java/lang/Object/<init>()V\n");
	generateFooter();
}

void generateFooter(){
	f = fopen("output.j", "a");
	fprintf(f, "return\n");
	fprintf(f, ".end method\n\n");
}

void generateMainHeader(){
	f = fopen("output.j", "a");
	fprintf(f, ".method public static main([Ljava/lang/String;)V\n");
	fprintf(f, ".limit locals 100\n");
	fprintf(f, ".limit stack 100\n");

}

void generateMainFooter(){
	f = fopen("output.j", "a");
	fprintf(f, "return\n");
	fprintf(f, ".end method");
}

void onlyLabel(int label){
	f = fopen("output.j", "a");
	fprintf(f, "L_%i:\n", label);
}

void onlyLabelForIf(int label){
	f = fopen("output.j", "a");
	fprintf(f, " L_%i\n", label);
}

void onlyGoTo(int label){
	f = fopen("output.j", "a");
	fprintf(f, "goto L_%i\n", label);
}

void putOpInStack(char op){
	f = fopen("output.j", "a");
	if(op == '+') fprintf(f, "iadd\n");
	else if(op == '-') fprintf(f, "isub\n");
	else if(op == '*') fprintf(f, "imul\n");
	else fprintf(f, "idiv\n");
}

void loadVariableValue(int localizacao){
	f = fopen("output.j", "a");
	fprintf(f, "iload %i\n", localizacao);
}

void atributeVariable(char *id){
	f = fopen("output.j", "a");
	int localizacao = findLocalizacao(id);
	if(localizacao == -1){
		localizacoesUsadas++;
		localizacao = localizacoesUsadas;
	}
	fprintf(f,"istore %i\n", localizacao);
	setLocalizacao(id, localizacao);
}

int findLocalizacao(char *string){
	if(tabela == NULL)
		return -1;
	Token *aux = tabela;
	while(aux != NULL){
		if(strcmp(aux->conteudo, string) == 0)
			return aux->localizacao;
		aux = aux->proximo;
	}
}
void setLocalizacao(char *string, int local){
	Token *aux = tabela;
	while(aux != NULL){
		if(strcmp(aux->conteudo, string) == 0)
			aux->localizacao = local;
		aux = aux->proximo;
	}
	return;
}
void ifStackInverse(char *op){
	f = fopen("output.j", "a");
	if(strcmp(op, "!=") == 0) fprintf(f, "ifeq");
	else if(strcmp(op, "<=") == 0) fprintf(f, "ifgt");
	else if(strcmp(op, "<") == 0) fprintf(f, "ifge");
	else if(strcmp(op, ">=") == 0) fprintf(f, "iflt");
	else if(strcmp(op, ">") == 0) fprintf(f, "ifle");
	else fprintf(f, "ifne");
}