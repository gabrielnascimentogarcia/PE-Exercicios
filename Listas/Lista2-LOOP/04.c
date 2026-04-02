#include <stdio.h>

/*
4. Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os
números múltiplos de 4 compreendidos entre eles. Os valores A e B não devem ser considerados
no somatório. Caso A seja maior do que B deve ser enviada uma mensagem para o usuário
informando que a soma não será realizada.
*/

int main() {
    int A, B, i, soma;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A >= B) {
        printf("A soma nao sera realizada (A deve ser menor que B)\n");
    } else {
        soma = 0;
        for (i = A + 1; i < B; i++) {
            if (i % 4 == 0) {
                soma += i;
            }
        }
        printf("Soma dos multiplos de 4 entre A e B: %d\n", soma);
    }

    return 0;
}
