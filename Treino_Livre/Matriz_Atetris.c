// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.matriz-atetris

#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int tam, char** matriz)
{
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++){
            if(j)
                printf(" ");
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
}
int eliminarZero(int tam, char** matriz)
{
    int alterou = 0, soma;
    for(int i=0; i<tam; i++)
    {
        soma=0;
        for(int j=0; j<tam; j++){
            soma+=(matriz[i][j])-48;
        }
        if(soma==tam)
        {
            alterou = 1;
            for(int j=0; j<tam; j++)
                matriz[i][j] = '0';
        }
    }
    return alterou;
}
void desceZero(int tam, char** matriz)
{
    int* soma = malloc(sizeof(int)*tam);

    for(int i=0; i<tam; i++)
        soma[i]=0;
    for(int j=0; j<tam; j++)
    {
        for(int i=0; i<tam; i++)
        {
            if(matriz[i][j]=='1')
                soma[j]++;
        }
    }
    for(int j=0; j<tam; j++)
    {
        for(int i=0; i<tam; i++)
        {
            if((tam-i)<=soma[j])
                matriz[i][j]='1';
            else
                matriz[i][j]='0';
        }
    }
    free(soma);
}
int main ()
{
    int tam;
    scanf("%d", &tam);
    char** matriz = malloc(tam * sizeof(char*));
    for(int i=0; i<tam; i++)
        matriz[i]=malloc(tam*sizeof(char));
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
            scanf(" %c",&matriz[i][j]);
    }
    eliminarZero(tam, matriz);
    imprimirMatriz(tam, matriz);
    printf("\n");
    desceZero(tam,matriz);
    imprimirMatriz(tam, matriz);

    while(eliminarZero(tam, matriz))
    {
        printf("\n");
        imprimirMatriz(tam, matriz);
        desceZero(tam, matriz);
        printf("\n");
        imprimirMatriz(tam, matriz);
    }

    for(int i=0; i<tam; i++)
        free(matriz[i]);
    free(matriz); 

    return 0;
}