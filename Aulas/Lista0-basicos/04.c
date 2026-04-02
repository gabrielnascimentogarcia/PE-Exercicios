#include <stdio.h>

/*
4. Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um
programa que receba o valor do salário fixo do funcionário, o valor das suas vendas e que calcule
e mostre o salário final do funcionário.
*/

int main() {
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}
