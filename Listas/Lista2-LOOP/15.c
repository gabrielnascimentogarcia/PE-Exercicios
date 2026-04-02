#include <stdio.h>

/*
15. Faça um programa que calcule o fatorial de um número N.
*/

int main() {
    int N, i;
    long long fatorial;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Fatorial nao existe para numeros negativos\n");
    } else {
        fatorial = 1;
        for (i = 2; i <= N; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d: %lld\n", N, fatorial);
    }

    return 0;
}
