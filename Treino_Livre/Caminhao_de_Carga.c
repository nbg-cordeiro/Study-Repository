// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1086

#include <stdio.h>

int main ()
{
    int n, weight, total=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &weight);
        total+=weight;
    }

    printf("Carga total: %d kilogramas\n", total);

    return 0;
}