#include <stdio.h>

int main ()
{
    char primeiroNome[101], ultimoNome[101];

    scanf("%s", primeiroNome);
    while(scanf("%s", ultimoNome)!=EOF);

    for(int i=0; primeiroNome[i]!='\0'; i++){
        if(primeiroNome[i]>='A' && primeiroNome[i]<='Z')
            primeiroNome[i]+=32;
    }
    
    for(int i=0; ultimoNome[i]!='\0'; i++){
        if(ultimoNome[i]>='A' && ultimoNome[i]<='Z')
            ultimoNome[i]+=32;
    }

    printf("%s.%s@unb.br\n",primeiroNome,ultimoNome);

    return 0;
}