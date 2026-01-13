// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.idade_camila

#include <stdio.h>

void swap(int* a, int*b)
{
    int temp = (*a);
    (*a)=(*b);
    (*b)=temp;
}

void ordena(int* a, int* b, int* c)
{
    if((*b)>(*a))
        swap(a,b);
    if((*c)>(*b))
        swap(b,c);
    if((*b)>(*a))
        swap(a,b);
}

int main ()
{
    int idade1,idade2,idade3;
    scanf("%d %d %d", &idade1,&idade2,&idade3);

    ordena(&idade1,&idade2,&idade3);

    printf("%d\n", idade2);

    return 0;
}