#include <math.h>

struct tipoPonto{
    int x;
    int y;
};

double distancia (struct tipoPonto pa, struct tipoPonto pb){
    double resultado;

    int difX = pb.x - pa.x;
    int difY = pb.y - pa.y;

    difY = difY*difY;
    difX = difX*difX;
    
    resultado = difX + difY;
    resultado = sqrt(resultado);

    return resultado;
}