// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.media_apc

#include <stdio.h>

int main ()
{
    double final=0, ml=0, grade;
    for(int i=1; i<=3; i++)
    {
        scanf("%lf", &grade);
        final += grade*i;
    }

    scanf("%lf", &grade);
    final += grade * 2;
    final /= 8;

    for(int i=0; i<5; i++){
        scanf("%lf", &grade);
        ml += grade;
    }
    ml /= 10;
    final += ml;

    printf("%.2lf\n", final);

    return 0;
}