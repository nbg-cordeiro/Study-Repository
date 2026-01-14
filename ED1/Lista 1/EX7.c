#include <stdio.h>

int main ()
{
    char linha [1001];
    int tamanho = 0;
    fgets(linha, 1001, stdin);

    while(linha[tamanho]!='\0' && linha[tamanho]!='\n')
        tamanho++;

    printf("%d\n", tamanho);

    return 0;
}