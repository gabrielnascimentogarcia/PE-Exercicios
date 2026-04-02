#include <stdio.h>

/*
2. Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo. Caso o segundo número
digitado seja zero, o programa deve informar ao usuário que a operação de divisão é impossível.
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

    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Subtracao: %d\n", subtracao);

    if (num2 == 0) {
        printf("Divisao impossivel (segundo numero e zero)\n");
    } else {
        divisao = (float)num1 / num2;
        printf("Divisao: %.2f\n", divisao);
    }

    return 0;
}
