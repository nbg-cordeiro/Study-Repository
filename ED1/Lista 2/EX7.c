#include <stdio.h>

int totalSete(char* str)
{
    if((*str)=='\0' || (*str)=='\n')
        return 0;
    if((*str)=='7')
        return 1 + totalSete(str+1);
    return totalSete(str+1);
}

int main()
{
    char str[30];
    fgets(str,30,stdin);
    
    int total = totalSete(str);
    printf("%d\n", total);

    return 0;
}