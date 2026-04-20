#include <stdio.h>

/*
Faça um programa que preencha uma matriz M10x5 com números inteiros. Após
preencher a matriz, crie uma segunda matriz que seja a transposta de M. Ao
final, escreva a matriz Transposta.
*/

int main() {

    int mat1[10][5], mat2[5][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    
    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d ", mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}