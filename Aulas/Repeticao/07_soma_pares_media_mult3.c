#include <stdio.h>

/*
Fazer um programa que leia N números naturais e que escreva o somatório dos números pares
e a média dos múltiplos de 3.
*/

int main() {
    int n, i, num;
    int soma_pares = 0, soma_mult3 = 0, cont_mult3 = 0;

    printf("Quantos numeros voce deseja ler? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            soma_pares += num;
        }
        if (num % 3 == 0) {
            soma_mult3 += num;
            cont_mult3++;
        }
    }

    printf("Somatorio dos numeros pares: %d\n", soma_pares);

    if (cont_mult3 > 0) {
        printf("Media dos multiplos de 3: %.2f\n", (float)soma_mult3 / cont_mult3);
    } else {
        printf("Nenhum multiplo de 3 foi digitado\n");
    }

    return 0;
}
