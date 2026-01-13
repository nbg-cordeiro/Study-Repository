// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.primos_arrojados

#include <stdio.h>

int primo(int num)
{
    if(num<=1)
        return 0;
    if(num == 2)
        return 1;
    if(num % 2 == 0)
        return 0;
    for(int i = 3; i*i<=num; i+=2)
    {
        if(num%i == 0)
            return 0;
    }
    return 1;
}

int arrojado(int num)
{

    while(num>0)
    {
        if(!primo(num))
            return 0;
        num/=10;
    }
    return 1;
}

int main ()
{
    int n, num;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(arrojado(num))
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}