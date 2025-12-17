
typedef struct pessoa{
    char nome[50];
    int idade;
    int altura;
}Pessoa;

#include <stdio.h>

Pessoa criarPessoa(char nome[], int idade, int altura){
    Pessoa p;
    snprintf(p.nome, sizeof(p.nome), "%s", nome);
    p.idade = idade;
    p.altura = altura;
    
    return p;
}



int main ()
{
    Pessoa p1 = {"Joao", 20, 180};
    Pessoa p2 = {"Maria", 22, 165};
    int a = 2;
    int b = 3;

    printf("Nome: %s, Idade: %d, Altura: %d\n", p1.nome, p1.idade, p1.altura);
    printf("Nome: %s, Idade: %d, Altura: %d\n", p2.nome, p2.idade, p2.altura);

    return 0;
}