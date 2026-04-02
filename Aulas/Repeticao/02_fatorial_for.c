#include <stdio.h>

/*
Faça um programa para calcule o fatorial de N.
*/

int main() {
    int n, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
