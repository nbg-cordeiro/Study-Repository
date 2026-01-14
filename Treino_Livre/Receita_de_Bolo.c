// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2012f2pj_bolo

#include <stdio.h>

int main ()
{
    int farinha, ovos, leite, menor;
    scanf("%d %d %d", &farinha, &ovos, &leite);
    
    farinha /= 2;
    ovos /= 3;
    leite /= 5;
    menor = farinha;

    if(menor>ovos)
        menor = ovos;
    if(menor>leite)
        menor = leite;
    
    printf("%d\n", menor);

    return 0;
}