#include <stdio.h>

/*
5. Faça um programa que leia a altura e o sexo de uma pessoa e escreva o seu peso ideal, utilizando as
seguintes fórmulas:
• para homens: (72,7 * altura) – 58,0
• para mulheres: (62,1 * altura) – 44,7
*/

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58.0;
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("Peso ideal: %.2f kg\n", pesoIdeal);

    return 0;
}
