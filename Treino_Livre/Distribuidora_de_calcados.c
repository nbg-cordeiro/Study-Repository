// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1088

#include <stdio.h>

int main ()
{
    long long set[10000]={0};
    int n, id, qtd, control=1;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",  &id);
        scanf("%d",  &qtd);
        set[id]+=qtd;
    }

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &id);
        scanf("%d", &qtd);
        set[id]-=qtd;

        if(set[id]<0)
        {
            control=0;
        }
    }

    if(control)
        printf("Sim\n");
    else
        printf("Nao\n");

    return 0;
}