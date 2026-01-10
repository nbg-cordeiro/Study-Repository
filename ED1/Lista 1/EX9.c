#include <stdio.h>

int size(char* s){
    int i=0;
    while(s[i]!='\0' && s[i] !='\n')
        i++;
    return i;
}

int main ()
{
    int n, tamanho;

    char linha[1001];
    scanf("%d", &n);
    getchar();

    fgets(linha, 1001, stdin);
    int max = size(linha);

    for(int i=1; i<n; i++)
    {
        fgets(linha, 1001, stdin);
        tamanho = size(linha);
        if(tamanho>max)
            max = tamanho;
    }
    printf("%d\n", max);

    return 0;
}