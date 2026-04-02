#include <stdio.h>

/*
9. Faça um programa que leia um número K e escreva os termos da série de Fibonacci menores ou
iguais a K. Faça a validação para que o valor de K seja maior do que 0.
*/

int main() {
    int K, a, b, proximo;

    printf("Digite um valor maior que 0: ");
    scanf("%d", &K);

    while (K <= 0) {
        printf("Valor invalido. Digite um valor maior que 0: ");
        scanf("%d", &K);
    }

    a = 0;
    b = 1;

    printf("Sequencia de Fibonacci ate %d:\n", K);

    if (a <= K) {
        printf("%d ", a);
    }
    if (b <= K) {
        printf("%d ", b);
    }

    while (1) {
        proximo = a + b;
        if (proximo > K) {
            break;
        }
        printf("%d ", proximo);
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
