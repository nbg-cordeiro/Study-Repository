#include <stdio.h>

int main(){

    char letra;
    double real;
    char str[1001];

    scanf("%c",&letra);
    getchar();

    fgets(str,1001,stdin);
    int i = 0;
    while (str[i] != '\0'){

        if(str[i] == '\n'){
            str[i] = '\0';
        }
        i++;
    }
    
    i=0;
    int tem = 0,palavras_totais=0;
    int palavras_letras=0;

    while (str[i] != '\0'){

        if (str[i] == letra){

            tem = 1;
        }

        if (str[i] == ' ' || str[i+1] == '\0') {
            palavras_totais++;

            if (tem){

                palavras_letras++;
                tem=0;
            }
            
        }

        i++;
    }
    
    real = (palavras_letras * 100.0)/palavras_totais;

    printf("%.1lf",real);

    return 0;
}