#include <stdio.h>

/*
Faça um programa que leia a base e altura de um triângulo e que escreva a sua área
*/

int main() {
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
