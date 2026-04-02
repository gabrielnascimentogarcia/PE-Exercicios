#include <stdio.h>

/*
12. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e
escrever a idade dessa pessoa em anos, meses e semanas.
*/

int main() {
    int anoNascimento, anoAtual, idade, idadeMeses, idadeSemanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idadeMeses = idade * 12;
    idadeSemanas = idade * 52;

    printf("Idade em anos: %d\n", idade);
    printf("Idade em meses: %d\n", idadeMeses);
    printf("Idade em semanas: %d\n", idadeSemanas);

    return 0;
}
