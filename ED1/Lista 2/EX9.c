#include <stdio.h>

void moveX(char* str)
{
    if((*str)=='\n' || (*str)=='\0')
        return;
    if((*str)=='x'){
        moveX(str+1);
        printf("%c", (*str));
    }else{
        printf("%c", (*str));
        moveX(str+1);
    }
}

int main()
{
    char str[200];
    fgets(str, 200, stdin);

    moveX(str);
    printf("\n");
    
    return 0;
}