#include <stdio.h>

/*
14. Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os
valores antes e depois da troca.
Exemplo: (Antes)
A=5 B=8
(Depois)
A=8 B=5
*/

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Antes da troca: A = %d, B = %d\n", A, B);

    temp = A;
    A = B;
    B = temp;

    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}
