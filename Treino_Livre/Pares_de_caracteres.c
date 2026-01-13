// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.conta-pares-string

#include <stdio.h>

int pares(char* str)
{
    if((*str)=='\0' || (*(str+1)) == '\0' || (*(str+2)) == '\0')
        return 0;
    if((*str) == (*(str+2)))
        return 1 + pares(str+1);
    else
        return 0 + pares(str+1);
}

int main ()
{
    char str[500];
    int total;

    fgets(str, 500, stdin);
    total = pares(str);

    printf("%d\n", total);

    return 0;
}