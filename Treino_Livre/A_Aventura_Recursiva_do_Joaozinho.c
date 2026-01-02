// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.conta-vogais

#include <stdio.h>

int contar(char s[])
{
    if((*s) == '\0' || (*s) == '\n')
        return 0;
    switch(*s)
    {
        case 'A':case 'E':case 'I':case 'O':case 'U':
        case 'a':case 'e':case 'i':case 'o':case 'u':
            return 1 + contar(s+1);
        default:
            return 0 + contar(s+1);
    }
}

int main ()
{
    char frase[101];
    fgets(frase, 101, stdin);
    int total = contar(frase);
    printf("%d\n", total);

    return 0;
}