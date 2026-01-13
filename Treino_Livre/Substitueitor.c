// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.substitui

#include <stdio.h>

int main()
{
    char frase[10005], troca[45], busca[45];
    int igual, i=0, tamBusca = 0;

    scanf("%[^\n]", frase);
    scanf("%s", busca);
    scanf("%s", troca);

    while(busca[tamBusca]!='\0')
        tamBusca++;

    while(frase[i] != '\0')
    {
        igual = 1;
        for(int j=0; j < tamBusca && igual!=0 ; j++)
        {
            if(frase[i+j] != busca[j])
                igual = 0;
        }
        if(igual){
            printf("%s", troca);
            i+=tamBusca;
        }
        else{
            printf("%c", frase[i]);
            i++;
        }
    }
    printf("\n");

    return 0;
}