#include <stdio.h>

/*
2. Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os
dados de entrada do algoritmo devem ser: o nome do consumidor, o seu consumo mensal em
quilowatts, e o preço equivalente a um quilowatt.
*/

int main() {
    char nome[100];
    float consumo, precoKw, total;

    printf("Digite o nome do consumidor: ");
    scanf("%s", nome);
    printf("Digite o consumo mensal em KW: ");
    scanf("%f", &consumo);
    printf("Digite o preco por KW: ");
    scanf("%f", &precoKw);

    total = consumo * precoKw;

    printf("Consumidor: %s\n", nome);
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
