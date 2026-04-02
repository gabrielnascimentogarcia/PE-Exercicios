#include <stdio.h>

/*
11. Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e
escrever quantos salários mínimos ganha o funcionário.
*/

int main() {
    float salario, salarioMinimo, qtdSalarios;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o salario minimo vigente: ");
    scanf("%f", &salarioMinimo);

    qtdSalarios = salario / salarioMinimo;

    printf("O funcionario ganha %.2f salarios minimos\n", qtdSalarios);

    return 0;
}
