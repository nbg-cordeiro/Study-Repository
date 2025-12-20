// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.string1

#include <stdio.h>

int main ()
{
    int size=0;
    char line[1001];

    while(scanf("%c",&line[size])!=-1)
    {
        if(line[size]!='\0' && line[size]!='\n')
            size++;
    }

    printf("%d",size);

    return 0;
}