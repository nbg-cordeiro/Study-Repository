// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.replaceXY

#include <stdio.h>

void x_para_y(char* str)
{
    if((*str)=='\n' || (*str)=='\0')
        return;
    if((*str)=='x')
        printf("y");
    else
        printf("%c",(*str));
    x_para_y(str+1);
}

int main ()
{   
    char str[200];
    fgets(str, 200, stdin);

    x_para_y(str);
    printf("\n");

    return 0;
}