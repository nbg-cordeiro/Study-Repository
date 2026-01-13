// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.potencia-rec

#include <stdio.h>

double potenciacao(double a, int b)
{
    if(b==0)
        return 1;
    if(b>=0)
        return a * potenciacao(a, b-1);
    else
        return 1/a * potenciacao(a, b+1);
}

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==0 && b<=0){
        printf("indefinido\n");
        return 0;
    }
    double resultado = potenciacao((double)a,b);
    printf("%lf\n", resultado);

    return 0;
}

