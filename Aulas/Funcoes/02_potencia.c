#include <stdio.h>

/*
Faça um programa que leia dois números inteiros positivos, X e Y e que calcule e escreva X^Y.
Deve ser criada uma função para o cálculo da potência.
*/

int potencia(int x, int y) {
    int resultado = 1;
    int i;

    for (i = 0; i < y; i++) {
        resultado *= x;
    }

    return resultado;
}

int main() {
    int x, y;

    do {
        printf("Digite a base (X >= 0): ");
        scanf("%d", &x);
        printf("Digite o expoente (Y >= 0): ");
        scanf("%d", &y);
    } while (x < 0 || y < 0);

    printf("%d^%d = %d\n", x, y, potencia(x, y));

    return 0;
}
