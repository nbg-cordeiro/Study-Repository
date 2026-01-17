// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.idade_dias_meses_anos

#include <stdio.h>

int main ()
{
    int anoNas, mesNas, diaNas, anoHj, mesHj, diaHj, idadeAno, idadeMes, idadeDia;

    scanf("%d %d %d", &diaNas, &mesNas, &anoNas);
    scanf("%d %d %d", &diaHj, &mesHj, &anoHj);

    if (diaNas > 31 || mesNas > 12 || diaNas < 1 || mesNas < 1 ||
        diaHj > 31 || mesHj > 12 || diaHj < 1 || mesHj < 1) {
        printf("data invalida\n");
        return 0;
    }
    if (anoNas > anoHj || 
       (anoNas == anoHj && mesNas > mesHj) || 
       (anoNas == anoHj && mesNas == mesHj && diaNas > diaHj)) {
        printf("data invalida\n");
        return 0;
    }

    if((mesHj>mesNas) || (diaHj<diaNas && (mesHj==mesNas)))
        idadeAno = anoHj-anoNas;
    else
        idadeAno = (anoHj-anoNas)-1;


    return 0;
}