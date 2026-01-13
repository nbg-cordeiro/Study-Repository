// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.liu-kang

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long tempoAtual, n, termo; 
    int golpes;

    scanf("%llu", &tempoAtual);
    scanf("%d", &golpes);

    for(int i=0; i<golpes; i++)
    {
        n = sqrt(tempoAtual);
        
        if(tempoAtual & 1)
            termo = (2 * n) - 1;
        else
            termo = (2 * (n/2)) - 1;
    
        tempoAtual = termo*termo;
        
        printf("%llu\n", tempoAtual);
    }

    return 0;
}