int encaixa(int a, int b){
    if(b>a){
        return 0;
    }
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

int segmento(int a, int b){
    if(b>a){
        int temp = a;
        a = b;
        b = temp;
    }
    while(a>=b){
        if(encaixa(a,b))
            return 1;
        a/=10;
    }
    return 0;
}