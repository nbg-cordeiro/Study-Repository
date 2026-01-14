#include <stdio.h>

int main ()
{
    int n=1, total = 0;
    while((n = getchar()) != EOF){
        if(n=='o')
            total++;
    }
    printf("%d\n", total);

    return 0;
}