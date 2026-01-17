long int fibonacci (int n)
{
    static long int vet[81];
    if(n==1 || n==2)
        return 1;
    if(vet[n])
        return vet[n];
    vet[n]=fibonacci(n-1)+fibonacci(n-2);
    return vet[n];
}