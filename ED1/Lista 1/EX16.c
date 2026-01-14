#include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    int num, total;
    scanf("%d", &total);
    for(int i=1; i<parcelas; i++){
        scanf("%d", &num);
        if(op == '-')
            total-=num;
        else
            total+=num;
    }
    return total;
}