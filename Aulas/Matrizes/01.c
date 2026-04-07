#include <stdio.h>

/*
Faça um programa que preencha uma matriz 3x4 com números inteiros.
a) Faça uma função para preencher a matriz.
b) Faça uma função para imprimir a matriz formatada.
*/

void preencher_matriz(int matriz[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o número para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int matriz[3][4]) {
    printf("Matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][4];

    preencher_matriz(matriz);
    imprimir_matriz(matriz);

    return 0;
}