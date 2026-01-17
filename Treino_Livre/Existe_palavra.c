// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.string_existe

#include <stdio.h>

int comparaString(char* palavra1, char* palavra2)
{
    int i=0;
    while(1)
    {
        if(palavra1[i]!=palavra2[i])
            return 0;
        if(palavra1[i]=='\0')
            break;
        i++;
    }
    return 1;
}

int main ()
{
    int qtdLista, qtdAchar;
    scanf("%d %d", &qtdLista, &qtdAchar);

    char lista[qtdLista][81];
    char achar[qtdAchar][81];

    for(int i=0; i<qtdLista; i++)
        scanf("%s", lista[i]);
    for(int i=0; i<qtdAchar; i++)
        scanf("%s", achar[i]);

    for(int i=0; i<qtdLista; i++)
    {
        for(int j=0; j<qtdAchar; j++)
        {
            if(comparaString(lista[i],achar[j])){
                printf("1\n");
                return 0;
            }
        }
    }
    
    printf("0\n");
    return 0;
}