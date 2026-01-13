#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int empilha (celula *p, int x)
{
    celula* novaCelula = (celula*) malloc(sizeof(celula));
    if(novaCelula == NULL)
        return 0;
    novaCelula->dado = x;
    novaCelula->prox = p->prox;
    p->prox = novaCelula;
    return 1;
}

int desempilha (celula *p, int *y)
{
    if(p->prox == NULL)
        return 0;
    celula*  aux = p->prox;
    *y = aux->dado;
    p->prox = aux->prox;
    free(aux);
    return 1;
}