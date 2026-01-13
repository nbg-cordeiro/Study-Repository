// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.count7

#include <stdio.h>

int contaSete(unsigned long long num)
{
    if(num==0)
        return 0;
    if(num%10==7){
        return contaSete(num/10) + 1;
    }
    return contaSete(num/10);
}
char a = 'a';

int main ()
{
    unsigned long long num;
    scanf("%llu", &num);

    printf("%d\n", contaSete(num));

    return 0;
}