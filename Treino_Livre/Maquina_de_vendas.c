// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.maquina_venda_automatica

#include <stdio.h>

int main()
{
    int coins[6] = {500, 100, 50, 10, 5, 1};
    int price, paid, change;
    scanf("%d %d", &price, &paid);
    
    change=paid-price;

    for(int i=0; i<6; i++)
    {
        printf("%d\n", change/coins[i]);
        change %= coins[i];
    }

    return 0;
}   