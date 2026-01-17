#include <stdio.h>

int totalPares(char* str)
{
    if((*str)=='\0' || (*str)=='\n'||
    (*(str+1))=='\0' || (*(str+1))=='\n'||
    (*(str+2))=='\0' || (*(str+2))=='\n')
        return 0;
    if((*str)==*(str+2))
        return 1 + totalPares(str+1);
    return totalPares(str+1);
}

int main ()
{
    char str[250];
    fgets(str, 250, stdin);

    int pares = totalPares(str);
    printf("%d\n", pares);

    return 0;
}