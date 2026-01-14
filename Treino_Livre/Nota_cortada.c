// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.nota

#include <stdio.h>

int main ()
{
    int b, t, areaEd, areaDa;

    scanf("%d %d", &b, &t);

    areaEd = 35 * (b+t);
    areaDa = 11200 - areaEd;

    if(areaEd < areaDa)
        printf("2\n");
    else if(areaEd > areaDa)
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
}