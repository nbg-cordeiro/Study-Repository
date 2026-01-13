// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.struct-ponto

#include <stdio.h>
#include <math.h>

struct tipoPonto{
    int x;
    int y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb)
{
    double totalX = (pb.x - pa.x) * (pb.x - pa.x);
    double totalY = (pb.y - pa.y) * (pb.y - pa.y);
    double total = totalX+totalY;
    
    return sqrt(total);
}