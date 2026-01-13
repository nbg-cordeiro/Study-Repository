// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.cursor-miv-cima-baixo

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int qtdLinhas, iInicial, jInicial;
    int iAtual, j;
    char operation;
    scanf("%d", &qtdLinhas);
    getchar();
    char** linha = (char**) malloc(qtdLinhas*sizeof(char*));
    for(int i=0; i<qtdLinhas; i++)
        linha[i]=(char*)malloc(1003 * sizeof(char));

    for(int i=0; i<qtdLinhas; i++)
        fgets(linha[i],1003, stdin);

    scanf("%d %d", &iInicial, &jInicial);
    iAtual=(iInicial-1);

    while(scanf(" %c", &operation)==1)
    {
        if(operation=='j')
            iAtual++;
        if(operation=='k')
            iAtual--;
        if(iAtual<0)
            iAtual=0;
        if(iAtual>=qtdLinhas)
            iAtual=(qtdLinhas-1);
        j=0;
        while(j<jInicial && linha[iAtual][j]!='\n' && linha[iAtual][j]!='\0' && linha[iAtual][j]!='\r')
            j++;
        j--;
        printf("%d %d %c\n", iAtual+1, j+1, linha[iAtual][j]);
    }
    
    for(int i=0; i<qtdLinhas; i++)
        free(linha[i]);
    free(linha);
    return 0;
}