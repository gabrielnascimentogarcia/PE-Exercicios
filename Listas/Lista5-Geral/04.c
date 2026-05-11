#include <stdio.h>

/*
Faça um programa que leia dois números inteiros e que calcule o MDC (máximo divisor comum) entre eles. Crie uma
função recursiva que retorne o valor do MDC, sabendo que:
    mdc(x, y) = y, se y ≤ x e x resto y = 0
    mdc(x, y) = mdc(y, x), se x < y
    mdc(x, y) = mdc(y, x resto y), caso contrário
*/

int calcular_mdc(int x, int y) {

    // Caso 1:
    if (y <= x && x % y == 0)
    {
        return y;
    }
    // Caso 2:
    if (x < y)
    {
        return calcular_mdc(y, x);
    }
    // Caso 3:
    return calcular_mdc(y, x % y);
}

int main() {

    int A, B;

    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);

    if (A == 0 || B == 0)
    {
        printf("O MDC não pode ser definido por zero!\n");
    } else {
        printf("O MDC entre %d e %d é %d\n", A, B, calcular_mdc(A, B));
    }
    
    return 0;
}