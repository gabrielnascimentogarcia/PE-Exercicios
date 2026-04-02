#include <stdio.h>

/*
Faça um programa que leia N valores em dólar e que transforme para real.
Deve ser feita uma função que receba o valor em dólar, a cotação e retorne o equivalente em real.
*/

float dolarParaReal(float dolar, float cotacao) {
    return dolar * cotacao;
}

int main() {
    int n, i;
    float dolar, cotacao, real;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("Quantos valores em dolar deseja converter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o valor em dolar: ");
        scanf("%f", &dolar);
        real = dolarParaReal(dolar, cotacao);
        printf("R$ %.2f\n", real);
    }

    return 0;
}
