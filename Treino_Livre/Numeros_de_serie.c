// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1406

#include <stdio.h>

int main ()
{
    int n, num;
    static char set[1000001]={0};
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        if(set[num]<1)
            set[num]++;
        else{
            printf("%d\n", num);
            break;
        }
    }

    return 0;
}