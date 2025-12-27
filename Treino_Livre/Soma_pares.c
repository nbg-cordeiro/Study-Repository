// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.some_pares_simples

#include <stdio.h>

int main ()
{
    long long sum = 0;
    int num=-1;

    while(num!=0)
    {
        scanf("%d", &num);
        if(!(num & 1))
            sum+=num;
    }

    printf("%lld\n", sum);

    return 0;
}