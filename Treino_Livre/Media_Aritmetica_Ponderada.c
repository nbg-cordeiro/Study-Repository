// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.media_ponderada

#include <stdio.h>

int main ()
{
    double x, p1, p2, x1, x2;
    scanf("%lf %lf %lf %lf", &x, &x2, &p1, &p2);

    x1 = ((x*(p1+p2)) - (x2*p2))/p1;

    printf("%f\n", x1);

    return 0;
}