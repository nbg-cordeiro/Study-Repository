// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2015f1pj_fita

#include <stdio.h>

int main ()
{
    int n, counter;
    scanf("%d", &n);
    int fita[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &fita[i]);
        if(fita[i] != 0)
            fita[i] = n+1;
    }

    counter = n+1;

    for(int i=0; i<n; i++)
    {
        if(fita[i]==0){
            counter=0;
        }else{
            counter++;
            if (counter < fita[i])
                fita[i] = counter;
        }
    }

    counter = n+1;

    for(int i=n-1; i>=0; i--)
    {
        if(fita[i] == 0){
            counter = 0;
        }else{
            counter++;
            if (counter < fita[i]) 
                fita[i] = counter;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(fita[i] >= 9)
            printf("9 ");
        else
            printf("%d ", fita[i]);
    }
    printf("\n");

    return 0;
}