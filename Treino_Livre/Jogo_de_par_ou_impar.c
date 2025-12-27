// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2016f1pj_jogo

#include <stdio.h>

int main ()
{
    int p1, j1,j2;
    scanf("%d %d %d", &p1, &j1, &j2);

    printf("%d\n", ((j1+j2)%2)!=p1);

    return 0;
}