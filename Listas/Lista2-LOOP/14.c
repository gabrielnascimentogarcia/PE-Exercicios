#include <stdio.h>

/*
14. Faça um programa que leia um número inteiro positivo N e calcule o valor da expressão abaixo.
Caso o usuário digite um valor menor ou igual a zero, o algoritmo deve escrever uma mensagem
informando que a expressão não pode ser calculada.
*/

int main() {
    int N, i;
    float soma;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A expressao nao pode ser calculada (N deve ser positivo)\n");
    } else {
        soma = 0;
        for (i = 1; i <= N; i++) {
            soma += 1.0 / i;
        }
        printf("Valor da expressao: %.2f\n", soma);
    }

    return 0;
}
