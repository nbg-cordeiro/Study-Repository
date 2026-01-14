// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.media-ponderada

#include <stdio.h>

int main ()
{
    double pesoTotal=0, soma=0, media, peso, num;
    int casos;

    scanf("%d", &casos);

    for(int i=0; i<casos; i++)
    {
        scanf("%lf %lf", &peso, &num);
        pesoTotal+=peso;
        soma+=(num * peso);
    }
    media = soma/pesoTotal;

    printf("%lf\n", media);

    return 0;
}