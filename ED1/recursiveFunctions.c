#include <stdio.h>

int factorial(int n)
{
    if(n<2)
        return 1;
    return n * factorial(n-1);
}

int sum (int n){
    if(n<2)
        return 1;
    return n+sum(n-1);
}

int sumV(int v[], int tam)
{
    tam--;
    if(tam<0){
        return 0;
    }
    return v[tam] + sumV(v,tam);
}

int maxVet(int v[], int tam){
    tam--;
    int max = v[tam];
    if(tam==0)
        return v[tam];
    int other = maxVet(v,tam);
    if(max < other)
        max = other;

    return max;
}

void inverte(char *s, int inicio, int fim)
{
    fim--;
    if(inicio>=fim)
        return;
    char aux;
    aux = s[inicio];
    s[inicio]=s[fim];
    s[fim]=aux;
    inicio++;
    inverte(s,inicio,fim);
}

int main ()
{
    int teste = factorial(4);
    printf("%d\n", teste);
    teste = factorial(5);
    printf("%d\n", teste);
    return 0;
}
