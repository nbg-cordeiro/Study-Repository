// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.string5

#include <stdio.h>

int main ()
{
    int letter, total = 0;

    while((letter=getchar())!=EOF){
        if(letter=='o')
            total++;
    }

    printf("%d\n", total);

    return 0;
}