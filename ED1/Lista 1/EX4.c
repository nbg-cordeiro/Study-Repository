#include <stdio.h>

int main ()
{
    int totalMaterias, ano, semestre, ofertas;
    int max, cod, matriculados, aprovados;

    scanf("%d",&totalMaterias);
    int materias[totalMaterias];

    while(scanf("%d %d %d", &ano, &semestre, &ofertas)!=EOF)
    {
        for(int i=0; i<totalMaterias; i++)
            materias[i]=-1;

        max = -1;

        for(int i=0; i<ofertas; i++)
        {
            scanf("%d %d %d", &cod, &matriculados, &aprovados);
            materias[cod]=matriculados-aprovados;

            if(materias[cod]>max)
                max = materias[cod];
        }

        printf("%d/%d\n", ano,semestre);

        for(int i=0; i<totalMaterias; i++)
        {   
            if(materias[i]==max && materias[i]!=-1)
                printf("%d ",i);
        }

        printf("\n\n");
    }

    return 0;
}