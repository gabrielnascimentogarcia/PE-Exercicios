#include <stdio.h>

/*
Faça um programa que leia 3 valores reais e que verifique se eles formam um triângulo.
Em caso positivo, indique se o triângulo é equilátero, isósceles ou escaleno.
*/

int main() {
    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Nao forma um triangulo\n");
    }

    return 0;
}
