#include <stdio.h>

void inverte(char* s)
{
    if((*s)=='\0' || (*s)=='\n')
        return;
    inverte(s+1);
    printf("%c - %d\n", (*s), (*s));
}

int main ()
{
    char str[1001];

    fgets(str, 1001, stdin);
    inverte(str);

    return 0;
}