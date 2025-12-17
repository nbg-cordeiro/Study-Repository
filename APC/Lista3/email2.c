#include <stdio.h>

int main ()
{
    char linha[101];
    fgets(linha, 101, stdin);
    char primeiroNome[101];
    char ultimoNome[101];
    int i=0;
    while(linha[i]!=' '){
        if(linha[i]<='Z' && linha[i]>='A')
            linha[i]+=32;
        primeiroNome[i] = linha[i];
        i++;
    }
    primeiroNome[i]='\0';

    int j=0;
    while(linha[i]!='\0' && linha[i]!='\n'){
        if(linha[i]<='Z' && linha[i]>='A')
            linha[i]+=32;
        if(linha[i]==' '){
            j=0;
        }
        else{
            ultimoNome[j]=linha[i];
            j++;
        }
        i++;
    }
    ultimoNome[j]='\0';
    printf("%s.%s@unb.br", primeiroNome, ultimoNome);

    return 0;
}