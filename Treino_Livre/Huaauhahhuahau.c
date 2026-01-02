// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.Huaauhahhuahau

#include <stdio.h>

int main ()
{
    int found=0, letter, i=0, correct=1;
    char string[101];

    while((letter=getchar())!=EOF && letter!='\n')
    {
        if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
        {
            found=1;
            string[i]=letter;
            i++;
        }
    }
    if(!found){
        printf("Valor invalido!\n");
        return 0;
    }
        
    i--;
    for(int j = 0; j<=i; j++)
    {
        if(string[j]!=string[i])
        {
            correct=0;
            break;
        }
        i--;
    }
    if (correct)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}