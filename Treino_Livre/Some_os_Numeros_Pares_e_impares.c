// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.some_pares_e_impares_simples

#include <stdio.h>

int main ()
{
    int num;
    long long somaImpar=0, somaPar=0;

    do{
        scanf("%d", &num);
        if(num & 1)
            somaImpar += num;
        else
            somaPar += num;
    }while(num!=0);

    printf("%lld %lld\n", somaPar, somaImpar);

    return 0;
}