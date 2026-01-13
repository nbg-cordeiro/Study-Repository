// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.digito_verificador_cpf

#include <stdio.h>

int main ()
{
    int cpf, soma=0, digito1, digito2;
    scanf("%d",&cpf);
    int cpf2 = cpf;
    for(int i=2; i<11; i++){
        soma+=(i*(cpf2%10));
        cpf2/=10;
    }

    digito1 = 11 - (soma%11);
    if(digito1>9)
        digito1=0;
    soma=0;

    for(int i=3; i<=11; i++){
        soma+=(i*(cpf%10));
        cpf/=10;
    }

    soma+=(2*digito1);
    digito2= (11 - (soma%11));

    if(digito2>9)
        digito2=0;

    printf("%d%d\n", digito1,digito2);

    return 0;
}