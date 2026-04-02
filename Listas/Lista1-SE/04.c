#include <stdio.h>

/*
4. Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua
classificação.
• Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
• Se o preço for maior do que 50 e menor ou igual a 100, o aumento será de 10%
• Se o preço for maior do que 100, o aumento será de 15%
A classificação do produto deve ser:
• Barato: até 80 reais (inclusive)
• Normal: entre 80 reais e 120 reais (inclusive)
• Caro: entre 120 reais e 200 reais (inclusive)
• Muito Caro: maior do que 200 reais
*/

int main() {
    float preco, precoComAumento;
    char classificacao[20];

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 50) {
        precoComAumento = preco * 1.05;
    } else if (preco <= 100) {
        precoComAumento = preco * 1.10;
    } else {
        precoComAumento = preco * 1.15;
    }

    if (precoComAumento <= 80) {
        sprintf(classificacao, "Barato");
    } else if (precoComAumento <= 120) {
        sprintf(classificacao, "Normal");
    } else if (precoComAumento <= 200) {
        sprintf(classificacao, "Caro");
    } else {
        sprintf(classificacao, "Muito Caro");
    }

    printf("Preco com aumento: R$ %.2f\n", precoComAumento);
    printf("Classificacao: %s\n", classificacao);

    return 0;
}
