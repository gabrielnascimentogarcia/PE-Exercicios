#include <stdio.h>

/*
Faça um programa que leia 3 valores inteiros (diferentes) e escreva qual o maior
*/

int main() {
    int a, b, c, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    printf("O maior valor eh: %d\n", maior);

    return 0;
}
