// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.le-impressao

#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprime(celula *le)
{
    le = le->prox;
    while(le!=NULL)
    {
        printf("%d -> ",le->dado);
        le = le->prox;
    }
    printf("NULL\n");
}

void imprime_rec (celula *le)
{
    if(le->prox==NULL){
        printf("NULL\n");
        return;
    }
    printf("%d -> ",le->prox->dado);
    imprime_rec(le->prox);
}