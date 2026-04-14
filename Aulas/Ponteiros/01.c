#include <stdio.h>

/*
Faça um programa que leia os lados de um retangulo e crie uma função que retorne a area e o perimetro do retangulo para o programa principal
*/

void calculo(float base, float altura, float *area, float *perimetro) {

    *area = base * altura;
    *perimetro = 2 * (base + altura);
}

int main() {

    float base, altura, a, p;

    printf("Base e altura do retângulo: ");
    scanf("%f %f", &base, &altura);

    calculo(base, altura, &a, &p);

    printf("Área: %.2f\n", a);
    printf("Perímetro: %.2f\n", p);

    return 0;
}
