// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.maior_numero-eof

#include <stdio.h>

int main ()
{
    int maior, num;
    scanf("%d", &maior);

    while(scanf("%d", &num)==1)
    {
        if(num>maior)
            maior = num;
    }

    printf("%d\n", maior);

    return 0;
}