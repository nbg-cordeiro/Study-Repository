#include <stdio.h>

void escrever(char* str)
{
    if((*str)=='\0'||(*str)=='\n'){
        printf("\n");
        return;
    }
    if((*str)=='x')
        (*str)++;
    printf("%c", (*str));
    escrever(str+1);
}

int main ()
{
    char str[100];
    fgets(str, 100, stdin);
    escrever(str);
    return 0;
}