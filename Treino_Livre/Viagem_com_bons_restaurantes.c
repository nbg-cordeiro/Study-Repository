// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.viagemaconselha

#include <stdio.h>

int main ()
{
    int qtdRest, codMelhor, notaMelhor, cod, nota, dia=1;

    while(scanf("%d", &qtdRest)==1)
    {
        scanf("%d %d", &codMelhor, &notaMelhor);
        for(int i=1; i<qtdRest; i++)
        {
            scanf("%d %d", &cod, &nota);
            if(nota>notaMelhor || (nota==notaMelhor && cod<codMelhor))
            {
                notaMelhor = nota;
                codMelhor = cod;
            }
        }
        printf("Dia %d\n%d\n\n", dia, codMelhor);
        dia++;
    }
    return 0;
}