// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_caixas

#include <stdio.h>

int main ()
{
    int caixaA, caixaB, caixaC;
    scanf("%d %d %d", &caixaA, &caixaB, &caixaC);

    if (((caixaA+caixaB) < caixaC) || (caixaA < caixaB && caixaB < caixaC))
        printf("1\n");
    else if (caixaA == caixaB && caixaB == caixaC)
        printf("3\n");
    else
        printf("2\n");
    
    return 0;
}