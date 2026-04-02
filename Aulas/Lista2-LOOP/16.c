#include <stdio.h>

/*
16. Faça um programa que calcule o valor de E segundo a expressão abaixo:
E = 21 + 22 + 23 + ... + 2N-1 + 2N
*/

int main() {
    int N, i, potencia;
    long long soma, termo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    soma = 0;
    potencia = 1;

    for (i = 1; i <= N; i++) {
        potencia *= 2;
        soma += potencia;
    }

    printf("Valor de E: %lld\n", soma);

    return 0;
}
