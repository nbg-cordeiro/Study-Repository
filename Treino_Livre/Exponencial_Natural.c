// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.exponencial_natural

double exp_natural(int x, int n)
{
    double soma = 1;
    double termo = 1;
    for(int i=1; i<=n; i++){
        termo = termo * x / i;
        soma += termo;
    }
    return soma;
}