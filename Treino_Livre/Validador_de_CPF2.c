// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.cpf_valido

#include <stdio.h>

int main ()
{
    int digit, ver[2], sum[2]={0};
    unsigned long long cpf;

    scanf("%llu", &cpf);
    for(int i=0; i<11; i++)
    {
        digit = cpf%10;
        if(i<2)
            ver[i]=digit;
        else{
            sum[0]+=(digit*i);
            sum[1]+=(digit*(i+1));
        }
        cpf/=10;
    }
    sum[1]+=ver[1]*2;
    
    int calc0 = (sum[1] % 11 < 2) ? 0 : 11 - (sum[1] % 11);
    int calc1 = (sum[0] % 11 < 2) ? 0 : 11 - (sum[0] % 11);

    if(calc0!=ver[0] || calc1!=ver[1])
        printf("in");
    printf("valido\n");

    return 0;
}