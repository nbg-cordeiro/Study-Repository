// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.operacoesbasicas2

#include <stdio.h>

int main ()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    printf("ADD: %d\n", a + b);
    printf("SUB: %d\n", a - b);
    printf("AND: %d\n", a & b);
    printf("OR: %d\n", a | b);
    printf("XOR: %d\n", a ^ b);
    printf("MASK: %d\n", c & 31);
    printf("SLL(%d): %d\n",(c & 31), a << (c & 31));
    printf("SRL(%d): %d\n",(c & 31), b >> (c & 31));

    return 0;
}