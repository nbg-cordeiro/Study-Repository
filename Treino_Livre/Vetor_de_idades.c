// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.idades_mais_velha

#include <stdio.h>

int main ()
{
    int idade=0, media=0, qtdIdades=0, max=0, maxI=0, soma=0;

    while(1){
        scanf("%d", &idade);
        if(idade==-1)
            break;

        if(!qtdIdades || idade>max)
        {
            max = idade;
            maxI = qtdIdades;
        }

        soma+=idade;
        qtdIdades++;
    }

    if (qtdIdades > 0)
        media = soma / qtdIdades;
    printf("%d\n%d %d\n", media, max, maxI);

    return 0;
}