// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1079

#include <stdio.h>

int main ()
{
    int age;
    scanf("%d", &age);

    if(age<5)
        printf("O atleta nao tem idade suficiente para competir\n");
    else if(age<8)
        printf("Categoria: Infantil A\n");
    else if(age<11)
        printf("Categoria: Infantil B\n");
    else if(age<14)
        printf("Categoria: Juvenil A\n");
    else if(age<18)
        printf("Categoria: Juvenil B\n");
    else
        printf("Categoria: Senior\n");

    return 0;
}