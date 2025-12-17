#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int vetor[10001];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    int num, igual=1;
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(num!=vetor[i])
            igual=0;
    }

    if(igual)
        printf("sim");
    else
        printf("nao");

    return 0;
}