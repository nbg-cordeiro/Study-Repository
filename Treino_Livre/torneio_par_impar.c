// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.torneioparimpar_simplificado

#include <stdio.h>

int main ()
{
    int player, num1, num2, sum;
    char first,second;
    scanf("%d %d %d", &player, &num1, &num2);

    sum = num1+num2;
    if(sum%2 == player)
        first='A';
    else
        first='B';

    scanf("%d %d %d", &player, &num1, &num2);

    sum = num1+num2;
    if(sum%2 == player)
        second='C';
    else
        second='D';

    scanf("%d %d %d", &player, &num1, &num2);

    sum = num1+num2;
    if(sum%2 == player)
        printf("%c\n",first);
    else
        printf("%c\n",second);

    return 0;
    
}