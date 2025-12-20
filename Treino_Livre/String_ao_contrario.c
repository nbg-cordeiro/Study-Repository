// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.string-contrario

#include <stdio.h>

void inverter() {
    char c;

    if (scanf("%c", &c) != 1 || c == '\n') {
        return;
    }
    inverter();

    printf("%c", c);
}

int main() {
    inverter();
    
    printf("\n");

    return 0;
}