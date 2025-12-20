// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.string3

#include <stdio.h>

int main ()
{
    int n, max=-1, size;
    char word[101];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%s",word);
        size=0;
        for(int j=0; word[j]!='\0' && word[j]!='\n'; j++)
            size++;
        
        if(size>max)
            max = size;
    }

    printf("%d", max);

    return 0;
}