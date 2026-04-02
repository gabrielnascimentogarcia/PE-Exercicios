#include <stdio.h>

/*
12. Faça um programa que leia uma quantidade não determinada de números inteiros. O programa
deve calcular e escrever a quantidade de números pares e ímpares, a média aritmética dos
números pares e a divisão do somatório dos números pares pelo somatório dos números ímpares.
O número que encerrará a leitura será zero, que não deve ser considerado.
*/

int main() {
    int numero, qtdPares, qtdImpares;
    float somaPares, somaImpares, mediaPares, divisao;

    qtdPares = 0;
    qtdImpares = 0;
    somaPares = 0;
    somaImpares = 0;

    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            qtdPares++;
            somaPares += numero;
        } else {
            qtdImpares++;
            somaImpares += numero;
        }
    }

    printf("Quantidade de numeros pares: %d\n", qtdPares);
    printf("Quantidade de numeros impares: %d\n", qtdImpares);

    if (qtdPares > 0) {
        mediaPares = somaPares / qtdPares;
        printf("Media dos numeros pares: %.2f\n", mediaPares);
    }

    if (somaImpares != 0) {
        divisao = somaPares / somaImpares;
        printf("Divisao da soma dos pares pela soma dos impares: %.2f\n", divisao);
    }

    return 0;
}
