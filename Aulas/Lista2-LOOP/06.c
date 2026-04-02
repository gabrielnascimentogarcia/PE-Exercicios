#include <stdio.h>

/*
6. Faça um programa que apresente a tabuada de um número N, que será informado pelo usuário. O
programa deve garantir que o valor digitado para N esteja entre 0 e 9.
*/

int main() {
    int N, i;

    printf("Digite um numero entre 0 e 9: ");
    scanf("%d", &N);

    while (N < 0 || N > 9) {
        printf("Numero invalido. Digite um numero entre 0 e 9: ");
        scanf("%d", &N);
    }

    printf("Tabuada do %d:\n", N);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
