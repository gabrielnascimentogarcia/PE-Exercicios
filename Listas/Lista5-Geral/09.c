#include <stdio.h>

/*
Escreva um programa que gere a tabuada de 1 até um valor n > 0 na forma de uma tabela tal que,
na posição da linha i e coluna j da tabela, deve-se encontrar o valor i*j. Por exemplo, para n=6
o programa deve gerar:

1  2  3  4  5  6
2  4  6  8 10 12
3  6  9 12 15 18
4  8 12 16 20 24
5 10 15 20 25 30
6 12 18 24 30 36

A tabuada deve ser guardada em uma matriz, e após a sua criação o programa deve dar ao usuário 
a opção de escolher um número X e ter a sua tabuada impressa. O programa encerra quando o 
usuário digitar um número negativo.
*/

int main() {

    int N, X;

    printf("Valor de N: ");
    scanf("%d", &N);

    int mat[N + 1][N + 1];

    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            mat[i][j] = i * j;
        }
    }
    
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    do
    {
        printf("\nEscolha um número X para ver sua tabuada (Negativo para sair): ");
        scanf("%d", &X);

        if (X < 0)
        {
            printf("Saindo...\n");
            break;
        }

        if (X > N)
        {
            printf("Erro! Número não pertencente a matriz.\n");
        } else {
            printf("\nTabuada de %d\n", X);
            for (int i = 1; i <= N; i++)
            {
                printf("%d x %d = %d\n", X, i, mat[X][i]);
            }
        }
    } while (X >= 0);
    

    return 0;
}