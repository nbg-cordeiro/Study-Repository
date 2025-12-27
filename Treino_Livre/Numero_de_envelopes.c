// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.envelopes

#include <stdio.h>

int main ()
{
    int n, num, types;
    int set[1001]={0};
    scanf("%d %d", &n, &types);
    int total=n;

    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        set[num]++;
    }
    
    for(int i=1; i<=types; i++)
    {
        if(set[i]<total)
            total=set[i];
    }

    printf("%d\n", total);

    return 0;
}