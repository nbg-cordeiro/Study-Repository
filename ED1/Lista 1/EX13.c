#include<stdio.h>

struct tipoData{
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa{
    char nome[80];
    struct tipoData dtNascimento;
};


struct tipoPessoa separaInfo(char nome[80],int dt_nascimento)
{
    struct tipoPessoa pessoa;
    int i = 0;

    while(nome[i]!='\0')
    {
        pessoa.nome[i]=nome[i];
        i++;
    }
    pessoa.nome[i]='\0';

    pessoa.dtNascimento.dia = dt_nascimento%100;
    dt_nascimento/=100;
    pessoa.dtNascimento.mes = dt_nascimento%100;
    dt_nascimento/=100;
    pessoa.dtNascimento.ano = dt_nascimento;

    return pessoa;
}