#include <stdio.h>

void imprimir(int n, int first)
{
    if(n==0){
        printf("\n");
        return;
    }
        
    if(first)
        printf(".");
    printf("-");
    imprimir(n-1, 0);
}

void reguaInglesa(int n)
{
    if(!n)
        return;
    reguaInglesa(n-1);
    imprimir(n,1);
    reguaInglesa(n-1);
}

int main ()
{
    int n;
    scanf("%d", &n);
    reguaInglesa(n);
    return 0;
}