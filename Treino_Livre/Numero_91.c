// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.f91

#include <stdio.h>

int f91(int num)
{
    if(num>=101)
        return num-10;
    return 91;
}

int main ()
{
    int num;

    inicio:
    {
        scanf("%d", &num);
        if(num==0)
            return 0;
        printf("f91(%d) = %d\n", num, f91(num));
    }
    goto inicio;

    return 0;
}