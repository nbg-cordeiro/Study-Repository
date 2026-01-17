// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2022f1pj_hotel

#include <stdio.h>

int main() {
    int diariaInicial, acrescimo, dia, diaria, dias, total;
    scanf("%d %d %d", &diariaInicial, &acrescimo, &dia);

    if (dia <= 15) 
        diaria = diariaInicial + (dia - 1) * acrescimo;
    else
        diaria = diariaInicial + 14 * acrescimo;

    dias = 32 - dia;
    total = diaria * dias;

    printf("%d\n", total);
    return 0;
}