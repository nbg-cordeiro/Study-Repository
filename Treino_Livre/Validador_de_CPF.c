// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.cpf_valido

#include <stdio.h>

int main ()
{
    unsigned long long cpf;
    int digits[11], sum = 0;

    scanf("%llu", &cpf);

    for(int i=0; i<11; i++)
    {
        digits[i] = cpf % 10;
        cpf /= 10;
    }

    for(int i=2; i<11; i++)
        sum+=(digits[i]*i);

    sum = sum % 11;
    sum = 11 - sum;
    if(sum>9)
        sum=0;

    if(sum!=digits[1])
    {
        printf("invalido\n");
        return 0;
    }

    sum=0;

    for(int i=1; i<11; i++)
        sum+=(digits[i]*(i+1));
    
    sum = sum % 11;
    sum = 11 - sum;
    if(sum>9)
        sum=0;
    
    if(sum!=digits[0])
    {
        printf("invalido\n");
        return 0;
    }

    printf("valido\n");

    return 0;
}