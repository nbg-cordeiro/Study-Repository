// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.digito_verificador_cc

#include <stdio.h>

int main ()
{
    int digit, num, sum=0;
    scanf("%d", &num);

    for(int i=2;i<8;i++)
    {
        sum+=(num%10)*(i);
        num/=10;
    }
    digit = sum%11;
    digit = 11 - digit;

    printf("%d", digit);

    return 0;
}