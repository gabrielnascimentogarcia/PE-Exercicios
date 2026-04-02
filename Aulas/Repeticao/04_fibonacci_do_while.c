#include <stdio.h>

/*
Fazer um programa que escreva a série de Fibonnacci, cujo último termo seja menor ou igual a N.
Obrigar o usuário a digitar um valor positivo para N.
*/

int main() {
    int n, t1 = 0, t2 = 1, proximo;

    do {
        printf("Digite um valor positivo para N: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Serie de Fibonacci ate %d:\n", n);

    if (n >= 0) {
        printf("%d ", t1);
    }
    if (n >= 1) {
        printf("%d ", t2);
    }

    proximo = t1 + t2;
    while (proximo <= n) {
        printf("%d ", proximo);
        t1 = t2;
        t2 = proximo;
        proximo = t1 + t2;
    }

    printf("\n");

    return 0;
}
