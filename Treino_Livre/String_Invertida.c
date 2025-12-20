// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.string_rev

#include <stdio.h>

int main ()
{
    char line[101];
    int i=0;

    while(i<100 && scanf("%c",&line[i])!=-1 && line[i]!='\n'){
        i++;
    }
    line[i]='\0';
    i--;

    for(int j=i; j>=0; j--){
        printf("%c - %d\n", line[j], line[j]);
    }

    return 0;
}