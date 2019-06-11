#include <stdio.h>

void  main(int argc, char const *argv[])
{
	//argc é a quantidade de parâmetros passados pelo usuário
	//argv são os parâmetros
	for (int i = 1; i < argc; ++i)
	{		
		printf("%s\n", argv[i]);
	}
	
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int elemento;
    struct Lista *prox;
} TipoCelula;
