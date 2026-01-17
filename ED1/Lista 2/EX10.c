#include <stdio.h>

int verificaBissexto(int* ano)
{
    if((*ano)%400 == 0)
        return 1;
    if((*ano)%4 == 0 && (*ano) % 100 != 0)
        return 1;
    return 0;
}

int validaDia(int* dias, int* ano)
{
    if((*dias)<= (365 + verificaBissexto(ano)) && (*dias)>0)
        return 1;
    return 0;
}

void calculaDiaMes(int* dias,int* mes, int* ano)
{
    int bissexto = verificaBissexto(ano);
    if(((*dias))>31){
        ((*dias))-=31;
        (*mes)++;
    }
    if(((*dias))>(28 + bissexto)){
        ((*dias))-=(28 + bissexto);
        (*mes)++;
    }
    if(((*dias))>31){
        ((*dias))-=31;
        (*mes)++;
    }
    if(((*dias))>30){
        ((*dias))-=30;
        (*mes)++;
    }
    if(((*dias))>31){
        ((*dias))-=31;
        (*mes)++;
    } 
    if(((*dias))>30){
        ((*dias))-=30;
        (*mes)++;
    }
    if(((*dias))>31){
        ((*dias))-=31;
        (*mes)++;
    }
    if(((*dias))>31){
        ((*dias))-=31;
        (*mes)++;
    }
    if(((*dias))>30){
        ((*dias))-=30;
        (*mes)++;
    }
    if(((*dias))>31){
        ((*dias))-=31;
        (*mes)++;
    }
    if(((*dias))>30){
        ((*dias))-=30;
        (*mes)++;
    }
}

int main ()
{
    int dia, ano, mes=1;

    scanf("%d %d", &dia, &ano);

    if(!validaDia(&dia,&ano)){
        printf("Entradas invalidas!\n");
        return 0;
    }
    calculaDiaMes(&dia, &mes, &ano);

    printf("%02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}