#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int elemento;
    struct Lista *prox;
} TipoCelula;


void imprimirLista(TipoCelula *inicio) {
    printf("\n\n");
    TipoCelula *p = inicio;
    while (p != NULL) {
        printf("  %i", p->elemento);
        p = p->prox;
    }
    printf("\n\n");
}

void inserirElemento(int ele, TipoCelula **inicio, TipoCelula **fim) {
    TipoCelula *novo = calloc(1, sizeof (TipoCelula));
    novo->elemento = ele;
    novo->prox = NULL;

    if (*fim == NULL) {//primeiro elemento da lista
        *inicio = novo;
        *fim = novo;
    } else {
        TipoCelula *enderecoDoUltimoElemento = *fim;
        *fim = novo;
        enderecoDoUltimoElemento->prox = novo;
    }
}


void inserirEmOrdem(int ele, TipoCelula **inicio, TipoCelula **fim){

    printf("\n\n");
    TipoCelula *p = *inicio;
    TipoCelula *anterior = NULL;

    TipoCelula *novo = calloc(1, sizeof (TipoCelula));
    novo->elemento = ele;

    //vai procurar a posição
    while (p != NULL && p->elemento<ele) { 
        printf("  %i", p->elemento);
        anterior = p;
        p = p->prox;
    }

    if ((TipoCelula *)anterior==NULL)    {
        printf("\nPrimeiro elemento");
        novo->prox = (TipoCelula *) *inicio;   
        *inicio = novo;
    }else if (p==NULL)    {
        printf("\nUltimo elemento");        
        TipoCelula *enderecoDoUltimoElemento = *fim;
        *fim = novo;
        enderecoDoUltimoElemento->prox = novo;
        novo->prox = (TipoCelula * )NULL;
    } else {
        novo->prox = anterior->prox;
        anterior->prox = novo;
    }

}

int main(void) {

    TipoCelula *inicio = NULL;
    TipoCelula *fim = NULL;

    inserirElemento(77, &inicio, &fim);
    inserirElemento(89, &inicio, &fim);
    inserirElemento(100, &inicio, &fim);
    inserirElemento(101, &inicio, &fim);
    imprimirLista(inicio);
    inserirEmOrdem(88,&inicio,&fim);
    inserirEmOrdem(66,&inicio,&fim);
    inserirEmOrdem(111,&inicio,&fim);
    inserirEmOrdem(10,&inicio,&fim);
    imprimirLista(inicio);

    return 0;
}
