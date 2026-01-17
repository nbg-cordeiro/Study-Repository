// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1306

#include <stdio.h>

int main ()
{
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);

    n/=a;
    n*=b;

    printf("%d\n", n);

    return 0;
}