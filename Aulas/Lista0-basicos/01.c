#include <stdio.h>

/*
1. Faça um programa que leia a base e a altura de um retângulo e escreva o seu perímetro, a sua
área e a sua diagonal.
*/

int main() {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = (base * base + altura * altura);

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
