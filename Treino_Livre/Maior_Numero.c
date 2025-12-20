// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.maior_numero

#include <stdio.h>

int main ()
{
    int number;
    int highest;

    scanf("%d",&highest);
    for(int i=0; i<3;i++)
    {
        scanf("%d",&number);
        if(number>highest)
            highest=number;
    }

    printf("%d",highest);

    return 0;
}