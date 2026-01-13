#include <stdio.h>

int main ()
{
    int num, total = 0;
    
    while(scanf("%d", &num)==1)
        total++;

    printf("%d\n", total);

    return 0;
}