#include <stdio.h>

void inverte(char* str)
{
    if((*str)=='\0' || (*str)=='\n'){
        return;
    }
    inverte(str+1);
    printf("%c", (*str));
}

int main()
{
    char str[1000];
    fgets(str, 1000, stdin);

    inverte(str);
    printf("\n");
    
    return 0;
}