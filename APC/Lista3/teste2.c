int encaixa(int a, int b){
    if(b>a)
        return 0;
    while(b>9){
        if(a%10!=b%10){
            return 0;
        }
        b/=10;
        a/=10;
    }
    if(a%10!=b%10){
        return 0;
    }
    return 1;
}

int segmento(int a, int b) {
    int maior = a;
    int menor = b;

    if (a < b) {
        maior = b;
        menor = a;
    }

    while (maior >= menor) {
        if (encaixa(maior, menor)) {
            return 1;
        }
        maior /= 10;
    }

    return 0;
}