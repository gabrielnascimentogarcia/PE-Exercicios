#include <stdio.h>

/*
Crie uma matriz N x N que representará as amizades entre um
grupo de pessoas. A matriz AMIZADE é preenchida, em cada
posição com o número 0 ou 1. O número 1 em uma posição i,j
indica que a pessoa i é amiga de j. Por outro lado, o número 0
indica que i e j não são amigos.
=> Faça um programa que preencha a matriz de amizades e depois
verifique se existe alguma inconsistência, já que a relação de
amizade é recíproca.
=> Faça uma função que retorne quantas inconsistências existem na
matriz.
*/

int inconsistencias(int N, int mat[N][N]) {
    
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (mat[i][j] != mat[j][i])
                {
                    printf("Inconsistencia entre [%d][%d] e [%d][%d]\n", i, j, j, i);
                    count++;
                }
        }
    }

    return count;
}

int main() {

    int N;

    printf("Tamanho da matriz NxN: ");
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Posição[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nNúmero de inconsistencias: %d\n", inconsistencias(N, mat));

    return 0;
}