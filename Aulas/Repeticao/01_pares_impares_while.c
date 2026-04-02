#include <stdio.h>

/*
Faça um programa que leia uma lista de números inteiros e que informe, ao final,
quantos números pares e quantos ímpares fora encontrados.
O final da leitura é indicado pelo número zero.
*/

int main() {
    int num, pares = 0, impares = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if (num != 0) {
            if (num % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while (num != 0);

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    return 0;
}
