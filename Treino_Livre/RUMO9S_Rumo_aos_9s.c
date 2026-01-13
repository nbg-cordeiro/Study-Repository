// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.rumo9s

#include <stdio.h>
#include <stdlib.h>

char* lerVetor()
{
    static char *vetor;
    static int i;
    int read = getchar();
    if(read==-1 || read=='\n'){
        char* resultado = vetor;
        vetor = NULL;
        i = 0;
        return resultado;
    }
        
    if(i==0){
        if(read=='0'){
            getchar();
            vetor = NULL;
            i=0;
            return NULL;
        }
    }
    vetor = realloc(vetor, sizeof(char)*(i+2));
    vetor[i]=read;
    vetor[i+1]='\0';
    i++;
    return lerVetor();
}

int somaVet(char* vetor){
    if((*vetor)=='\0')
        return 0;
    if((*vetor)>='0' && (*vetor)<='9')
        return ((*vetor)-'0') + somaVet(vetor+1);
    return somaVet(vetor+1);
}

int somaDigitos(int num){
    if (num==0)
        return 0;
    return (num%10) + somaDigitos(num/10);
}
int grauDe9(int num)
{
    if(num==9)
        return 1;
    if(num<9)
        return 0;
    if(num%9==0){
        return 1 + grauDe9(somaDigitos(num));
    }
    return 0;
}

void conta9()
{
    char* linha = lerVetor();
    if(linha == NULL)
        return;
    int soma = somaVet(linha);
    int grau = grauDe9(soma);
    if(grau)
        printf("%s is a multiple of 9 and has 9-degree %d.\n", linha, grau);
    else
        printf("%s is not a multiple of 9.\n", linha);

    free(linha);
    conta9();
}

int main ()
{
    conta9();
    return 0;
}