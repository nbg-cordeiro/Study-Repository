// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.radares

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double tTotal = (tB - tA);
    double velocidade = (distancia/tTotal);
    velocidade*=3600;
    return velocidade;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    double velocidade = calculaVelocidadeMedia(tA,tB,distancia);   
    return (velocidade>velocidadeMaxima);
}