#include <stdio.h>

/*
11. Faça um programa que escreva os N primeiros termos de uma PA. O primeiro termo, a1, e a
razão da PA devem ser lidos.
*/

int main() {
    int a1, razao, N, i, termo;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    printf("Digite a quantidade de termos (N): ");
    scanf("%d", &N);

    printf("Os %d primeiros termos da PA:\n", N);
    termo = a1;
    for (i = 0; i < N; i++) {
        printf("%d ", termo);
        termo += razao;
    }

    printf("\n");

    return 0;
}
