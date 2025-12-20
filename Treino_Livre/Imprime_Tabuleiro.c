// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.imprime_tabuleiro

#include <stdio.h>

int main ()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    
    for(int j=0; j<rows; j++)
    {
        for(int i=0; i<columns; i++)
        {
            printf("[%03d,%03d]", j, i);
        }
        printf("\n");
    }

    return 0;
}