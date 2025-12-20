// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.printthums

#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("THUMS THUMS THUMS");
        if(i%2==1)
            printf(" THUMS THUMS THUMS");
        printf("\n");
    }

    return 0;
}