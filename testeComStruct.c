#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
	int id;
	char[50] nome;
	char[50] telefone;
	struct Lista *prox;
} TipoFicha;


void  main(int argc, char const *argv[]){
	
	TipoFicha ficha;

	ficha.id = 1;
	ficha.nome="Berola da Silva";
	ficha.telefone="9970607070";

	printf("%i\n",ficha->id);
	
}

