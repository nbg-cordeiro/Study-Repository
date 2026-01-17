// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.soma-digitos

#include <stdio.h>

int somaDigitos(long long num){
    if(num==0)
        return 0;
    return num%10 + somaDigitos(num/10);
}

int main ()
{
    long long num;
    scanf("%lld", &num);

    int resultado = somaDigitos(num);
    printf("%d\n", resultado);

    return 0;
}