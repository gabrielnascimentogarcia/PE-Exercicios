#include <stdio.h>

/*
6. João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão
atrasadas, João deverá pagar uma multa de 2% sobre cada uma. Faça um programa que leia o
valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu
salário após o pagamento das contas.
*/

int main() {
    float salario, conta1, conta2, multa1, multa2, totalContas, resto;

    printf("Digite o salario de Joao: ");
    scanf("%f", &salario);
    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);
    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    multa1 = conta1 * 0.02;
    multa2 = conta2 * 0.02;
    totalContas = conta1 + multa1 + conta2 + multa2;
    resto = salario - totalContas;

    printf("Restara do salario: R$ %.2f\n", resto);

    return 0;
}
