#include <stdio.h>

int vogais(char* str)
{
    if((*str)=='\0' || (*str)=='\n')
        return 0;
    if((*str)=='A'||(*str)=='E'||(*str)=='I'||(*str)=='O'||(*str)=='U')
        return 1 + vogais(str+1);
    return 0 + vogais(str+1);
}

int main ()
{
    char str[200];
    fgets(str, 200, stdin);

    int total = vogais(str);
    printf("%d\n", total);

    return 0;
}