// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.maior_numero_2

#include <stdio.h>

int main ()
{
    int num, maior;
    scanf("%d", &maior);

    while(scanf("%d", &num)==1)
    {
        if(maior<num)
            maior=num;
    }

    printf("%d\n", maior);

    return 0;
}