#include <stdio.h>

/*
10. A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores. Para isso
ela coletou alguns dados como idade, sexo (M ou F) e salário. Faça um programa que leia estes
dados e que escreva ao final:
• a média salarial dos homens
• a média salarial das mulheres
• o maior salário encontrado entre as pessoas abaixo de 30 anos.
Obs: O final da leitura de dados é marcado por uma idade negativa.
*/

int main() {
    int idade, totalHomens, totalMulheres;
    float salario, somaSalarioHomens, somaSalarioMulheres;
    float maiorSalarioJovem, salarioAtual;
    char sexo;
    float mediaHomens, mediaMulheres;

    totalHomens = 0;
    totalMulheres = 0;
    somaSalarioHomens = 0;
    somaSalarioMulheres = 0;
    maiorSalarioJovem = 0;

    while (1) {
        printf("Digite a idade (ou negativo para sair): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (sexo == 'M' || sexo == 'm') {
            totalHomens++;
            somaSalarioHomens += salario;
        } else {
            totalMulheres++;
            somaSalarioMulheres += salario;
        }

        if (idade < 30) {
            if (salario > maiorSalarioJovem) {
                maiorSalarioJovem = salario;
            }
        }
    }

    if (totalHomens > 0) {
        mediaHomens = somaSalarioHomens / totalHomens;
        printf("Media salarial dos homens: R$ %.2f\n", mediaHomens);
    }

    if (totalMulheres > 0) {
        mediaMulheres = somaSalarioMulheres / totalMulheres;
        printf("Media salarial das mulheres: R$ %.2f\n", mediaMulheres);
    }

    printf("Maior salario entre pessoas abaixo de 30 anos: R$ %.2f\n", maiorSalarioJovem);

    return 0;
}
