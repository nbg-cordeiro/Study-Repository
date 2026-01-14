// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2024f1pj_ogro

#include <stdio.h>

int main ()
{
    int esquerda, direita, resultado;

    scanf("%d %d", &esquerda, &direita);

    if(esquerda>direita)
        resultado = esquerda + direita;
    else
        resultado = 2 * (direita-esquerda);

    printf("%d\n", resultado);

    return 0;
}