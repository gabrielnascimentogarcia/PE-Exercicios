#include <stdio.h>

/*
7. Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas.
*/

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
