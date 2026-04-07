#include <stdio.h>

/*
Faça um programa que preencha uma matriz NxN e que escreva a soma dos elementos da diagonal principal
-> Faça uma função para preencher a matriz;
-> Faça uma função que escreve a matriz formatada;
-> Faça uma função que retorne a soma dos elementos da diagonal principal;
*/

void preencher_matriz(int tamanho, int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Digite o número para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int tamanho, int matriz[tamanho][tamanho]) {
    printf("Matriz %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int soma_diagonal(int tamanho, int matriz[tamanho][tamanho]) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int main() {
    int N;

    printf("Digite N: ");
    scanf("%d", &N);

    int matriz[N][N];

    preencher_matriz(N, matriz);
    imprimir_matriz(N, matriz);
    printf("Soma da diagonal principal: %d\n", soma_diagonal(N, matriz));

    return 0;
}