// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.faca-as-contas

#include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    int total, num;
    scanf("%d", &total);
    for(int i=1; i<parcelas; i++)
    {
        scanf("%d", &num);
        if(op == '-')
            num*=-1;
        total+=num;
    }
    return total;
}