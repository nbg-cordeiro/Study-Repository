// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.fibonacci-memoizacao

long int fibonacci (int n)
{
    static long int memo[81];

    if(n==1 || n==2)
        return 1;

    if(memo[n]!=0)
        return memo[n];

    memo[n] = fibonacci(n-1)+fibonacci(n-2);
    return memo[n];
}