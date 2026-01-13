// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.maiuscula-minuscula

#include <stdio.h>

int main ()
{
    char mode;
    int n;
    scanf("%c", &mode);
    getchar();
    scanf("%d", &n);
    getchar();
    n+=2;
    char string[n];

    fgets(string, n, stdin);
    if(mode=='c' || mode=='m')
    {
        for(int i=0; i < n && string[i] != '\0'; i++)
            {
                if(string[i]=='\n')
                {
                    string[i]='\0';
                    break;
                }
                if(string[i]>='A' && string[i]<='Z')
                    string[i]+=32;
            }
    }

    if(mode=='c')
    {
        for(int i=0; string[i]!='\0'; i++)
        {
            if(string[i]>='a' && string[i]<='z')
            {
                if(i==0)
                    string[i]-=32;
                if(i>0 && string[i-1]==' ')
                    string[i]-=32;
            }
        }
    }

    if(mode=='M')
    {
        for(int i=0; i < n && string[i] != '\0'; i++)
        {
            if(string[i]=='\n')
            {
                string[i]='\0';
                break;
            }
            if(string[i]>='a' && string[i]<='z')
                string[i]-=32;
        }
    }

    printf("%s", string);

    return 0;
}