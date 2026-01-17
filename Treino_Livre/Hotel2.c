// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.hotel-simplificado

#include <stdio.h>

int main() {
    int diariaInicial, acrescimo, dia, diaria, total;
    scanf("%d %d %d", &diariaInicial, &acrescimo, &dia);

    
    diaria = diariaInicial + ((dia - 1) * acrescimo);
    total = (32 - dia) * diaria;

    printf("%d\n", total);
    return 0;
}