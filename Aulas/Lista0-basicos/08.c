#include <stdio.h>

/*
8. Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e
escreva a média ponderada dessas notas.
*/

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o primeiro peso: ");
    scanf("%f", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o segundo peso: ");
    scanf("%f", &peso2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o terceiro peso: ");
    scanf("%f", &peso3);

    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}
