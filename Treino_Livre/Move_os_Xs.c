// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.moveX

#include <stdio.h>

void moveX(char* str)
{
    if((*str) == '\0' || (*str)=='\n')
        return;
    if((*str) != 'x'){
        printf("%c", *str);
        moveX(str+1);
    }
    else{
        moveX(str+1);
        printf("%c", *str);
    }
}

int main ()
{
    char str[101];
    fgets(str, 101, stdin);
    moveX(str);
    printf("\n");

    return 0;
}