// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.pedra_papel_tesoura_lagarto_spock

#include <stdio.h>

int main ()
{
    int p1,p2;
    scanf("%d %d", &p1, &p2);

    if(p1==p2)
    {
        printf("empate\n");
        return 0;
    }
    
    switch (p1){
    case 0: 
            if(p2==2 || p2==3)   
                printf("A\n");
            else 
                printf("B\n");
            break;
    case 1:
            if(p2==0 || p2==4)
                printf("A\n");
            else 
                printf("B\n");
            break;
    case 2:
            if(p2==3 || p2==1)
                printf("A\n");
            else 
                printf("B\n");  
            break;
    case 3:
            if(p2==1 || p2==4)
                printf("A\n");
            else 
                printf("B\n");
            break;
    case 4:
            if(p2==0 || p2==2)
                printf("A\n");
            else 
                printf("B\n");
            break;
    }

    return 0;
}