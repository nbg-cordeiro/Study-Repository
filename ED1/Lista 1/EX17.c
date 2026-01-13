#include <stdio.h>

int validaPeso (double pesoKg)
{
    return pesoKg>=0;
}

void fazTonelada(double pesoKg)
{
    pesoKg/=1000;
    printf("%.4lf\n", pesoKg);
}

void fazGrama(double pesoKg)
{
    pesoKg*=1000;
    printf("%.4lf\n", pesoKg);
}