// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.peso_kg_tonelada

#include <stdio.h>

int validaPeso(double pesoKg)
{
    return (pesoKg>=0);
}
void fazTonelada(double pesoKg)
{
    printf("%.4lf\n", (pesoKg/1000));
}
void fazGrama(double pesoKg)
{
    printf("%.4lf\n", (pesoKg*1000));
}