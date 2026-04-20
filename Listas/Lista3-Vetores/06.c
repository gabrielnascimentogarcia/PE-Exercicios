#include <stdio.h>

/*
Faça um programa que preencha uma matriz M5x5 com números reais. Após
preencher a matriz:
a) Verifique se ela é simétrica.
b) Imprima a soma dos elementos da diagonal principal.
c) Imprima a soma dos elementos da diagonal secundária.

Faça funções distintas para cada operação.
*/

int simetrica(int mat[5][5]) {

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int diagPrincipal(int mat[5][5]) {

    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma += mat[i][i];
    }
    return soma;
}

int diagSecundaria(int mat[5][5]) {

    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma += mat[i][5 - 1 - i];
    }
    return soma;
}

int main() {

    int mat[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n-------Matriz original-------\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    
    if (simetrica(mat))
    {
        printf("\nA matriz é simétrica!\n");
    } else {
        printf("\nA matriz não é simétrica!\n");
    }
    
    printf("Soma dos elementos da diagonal principal: %d\n", diagPrincipal(mat));

    printf("Soma dos elementos da diagonal secundaria: %d\n", diagSecundaria(mat));

    return 0;
}