// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor4

#include <stdio.h>

int main ()
{
    int n, num, control=0, j=0;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        if(num & 1){
            vet[j]=i;
            j++;
        }
        else{
            if(control)
                printf(" ");
            printf("%d", i);
            control=1;
        }
            
    }
    printf("\n");

    for(int i=0; i<j; i++)
    {
        if(i > 0) printf(" ");
        printf("%d", vet[i]);
    }
    printf("\n");

    return 0;
}