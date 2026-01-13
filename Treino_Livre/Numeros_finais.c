// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.encaixa-only

int encaixa(int a, int b)
{
    if(b>a)
        return 0;
    if(b==a)
        return 1;
    while(b>9)
    {
        if(b%10 != a%10)
            return 0;
        a/=10;
        b/=10;
    }
    if(b%10 != a%10)
        return 0;
    return 1;
}