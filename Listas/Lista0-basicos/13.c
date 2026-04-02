#include <stdio.h>

/*
13. Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo.
*/

int main() {
    int num1, num2;
    int soma, multiplicacao, subtracao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    multiplicacao = num1 * num2;
    subtracao = num1 - num2;
    divisao = (float)num1 / num2;

    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);
    printf("Subtracao: %d\n", subtracao);

    return 0;
}
