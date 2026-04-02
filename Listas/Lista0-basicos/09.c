#include <stdio.h>

/*
9. Faça um programa que leia o salário de um funcionário e que calcule e escreva
o salário com um desconto de 10%.
*/

int main() {
    float salario, salarioComDesconto;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    salarioComDesconto = salario * 0.9;

    printf("Salario com desconto de 10%%: R$ %.2f\n", salarioComDesconto);

    return 0;
}
