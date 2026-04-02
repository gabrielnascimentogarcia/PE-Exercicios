#include <stdio.h>

/*
10. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade, e
outro pelo milhar e pela centena, se somarmos estes dois novos números gerando um terceiro, o
quadrado deste terceiro número é exatamente o número original de quatro dígitos.
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica.
*/

int main() {
    int numero, milharCentena, dezenaUnidade, soma, quadrado;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    if (numero >= 1000 && numero <= 9999) {
        milharCentena = numero / 100;
        dezenaUnidade = numero % 100;
        soma = milharCentena + dezenaUnidade;
        quadrado = soma * soma;

        if (quadrado == numero) {
            printf("O numero obedece a caracteristica\n");
        } else {
            printf("O numero NAO obedece a caracteristica\n");
        }
    } else {
        printf("Numero invalido\n");
    }

    return 0;
}
