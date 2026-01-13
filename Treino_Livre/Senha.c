// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1238

#include <stdio.h>

int main ()
{
    char set[10] = {0};
    int num, total = 720;

    while((num=getchar()) != EOF)
    {
        num-='0';
        if(num>=0 && num<=9){
            set[num]++;
            if(set[num]!=1)
                total/=set[num];
        }
    }

    printf("%d\n", total);

    return 0;
}