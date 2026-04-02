#include <stdio.h>

/*
Faça um programa para somar os múltiplos de N maiores do que 100 e menores do que 200.
*/

int main() {
    int n, soma = 0, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = n; i < 200; i += n) {
        if (i > 100) {
            soma += i;
        }
    }

    printf("Soma dos multiplos de %d entre 100 e 200: %d\n", n, soma);

    return 0;
}
