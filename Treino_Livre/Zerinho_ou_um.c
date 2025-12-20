//enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.zerinho_um

#include <stdio.h>

int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);

    if(a==b && b==c)
        printf("empate\n");
    else if(a==b)
        printf("C\n");
    else if(b==c)
        printf("A\n");
    else
        printf("B\n");
    
    return 0;
}