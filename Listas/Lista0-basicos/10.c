#include <stdio.h>

/*
10. Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit.
C = 5/9 (F-32)
*/

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
