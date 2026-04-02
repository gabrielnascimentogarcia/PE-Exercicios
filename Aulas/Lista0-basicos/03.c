#include <stdio.h>

/*
3. Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um
programa que leia o valor do salário mínimo e a quantidade de quilowatts gasta por um usuário
e calcule e escreva: o valor de um quilowatt e o valor da conta de energia do usuário.
*/

int main() {
    float salarioMinimo, kwGastos, valorKw, valorConta;

    printf("Digite o salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite a quantidade de KW gasta: ");
    scanf("%f", &kwGastos);

    valorKw = salarioMinimo / 10.0;
    valorConta = kwGastos * valorKw;

    printf("Valor de um KW: R$ %.2f\n", valorKw);
    printf("Valor da conta de energia: R$ %.2f\n", valorConta);

    return 0;
}
