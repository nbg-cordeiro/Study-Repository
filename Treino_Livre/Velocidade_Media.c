// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.velocidade_media

#include <stdio.h>

int main ()
{
    double distancia, tempo;
    scanf("%lf %lf", &distancia, &tempo);

    printf("%.2lf\n", distancia/tempo);

    return 0;
}