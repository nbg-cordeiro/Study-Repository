// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor8

#include <stdio.h>

int main ()
{
    int n,control=1;
    long long avg = 0;
    scanf("%d", &n);
    int num[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        avg += num[i];
    }
    avg /= (long long)n;

    for(int i = 0; i < n; i++)
    {
        if(num[i]>avg)
        {
            if(!control)
                printf(" ");
            printf("%d",num[i]);
            control=0;
        }
    }
    if(control)
        printf("0");
    printf("\n");

    return 0;
}