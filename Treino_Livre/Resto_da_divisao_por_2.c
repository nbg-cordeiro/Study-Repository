// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.resto-div2-mips

#include <stdio.h>

int main ()
{
    int cast = 1;
    int num, i;

    scanf("%d",&num);
    scanf("%d", &i);

    cast = cast<<i;
    cast -= 1;
    num &= cast;

    printf("%d", num);

    return 0;
}