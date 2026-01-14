// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2021f2pj_media

#include <stdio.h>

int main ()
{
    long long int a,b,temp, mediaMediana;
    scanf("%lld %lld", &a, &b);

    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    mediaMediana = (2*a) - b;

    printf("%lld\n", mediaMediana);

    return 0;
}