#include <stdio.h>

int main ()
{
    int linhas, colunas;
    int linAtual, colAtual;
    char letra;
    char cinema[22][27]={0};

    scanf("%d %d", &linhas, &colunas);

    while(scanf(" %c%d", &letra, &colAtual) != EOF)
    {
        linAtual=letra-'A';
        colAtual-= 1;
        cinema[linAtual][colAtual] = 1;
    }

    printf(" ");
    for(int i=1; i<=colunas; i++)
        printf(" %02d", i);
    printf("\n");

    for(int i=linhas-1; i>=0; i--)
    {
        printf("%c",'A'+i);
        for(int j=0; j<colunas; j++)
        {
            if(cinema[i][j])
                printf(" XX");
            else
                printf(" --");
        }
        printf("\n");
    }

    return 0;
}