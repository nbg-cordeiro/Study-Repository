// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.string4

#include <stdio.h>

int main ()
{
    int n, maxSize=-1, size;
    char word[101];
    char maxWord[101];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%s",word);
        size=0;
        for(int j=0; word[j]!='\0' && word[j]!='\n'; j++)
            size++;

        if(size>maxSize){
            maxSize = size;
            int k=0;
            while(word[k]!='\0'){
                maxWord[k]=word[k];
                k++;
            }
            maxWord[k]='\0';
        }
    }

    printf("%s\n",maxWord);

    return 0;
}