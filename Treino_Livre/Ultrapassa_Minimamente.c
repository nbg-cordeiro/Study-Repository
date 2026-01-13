// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.ultrapassaminimamente

#include <stdlib.h>
#include <stdio.h>

int* ler(void){
    int num;
    static int i;
    static int* vetor;
    scanf("%d", &num);
    vetor = realloc(vetor,sizeof(int)*(i+1));
    vetor[i] = num;
    if(num==0){
        i = 0;
        int* resultado = vetor;
        vetor = NULL;
        return resultado;
    }
    i++;
    return ler();
}

void escrever(int* vetor){
    if((*vetor)==0)
        return;
    printf("%d\n", *vetor);
    escrever(vetor+1);
}

void ultrapassa(int* vetor, int meta, int total)
{
    if((*vetor)==0)
        return;
    total+=(*vetor);
    if(total>meta){
        total=0;
        ultrapassa(vetor+1, meta, total);
        printf("%d\n", *vetor);
    }else{
        ultrapassa(vetor+1, meta, total);
    }
}

int main ()
{
    int * vetor = ler();
    int meta;
    scanf("%d", &meta);
    ultrapassa(vetor,meta,0);
    free(vetor);
}