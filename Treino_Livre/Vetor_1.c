// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor1

#include <stdio.h>

int main ()
{
    int n, num, primeiro = 2000001, segundo = 2000001, terceiro = 2000001;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(num<primeiro)
        {
            terceiro = segundo;
            segundo = primeiro;
            primeiro = num;
        }
        else if(num<segundo)
        {
            terceiro = segundo;
            segundo = num;
        }
        else if(num<terceiro)
            terceiro = num;
    }
    
    printf("%d\n%d\n", segundo, terceiro);

    return 0;
}