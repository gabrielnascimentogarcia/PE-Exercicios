#include <stdio.h>

/*
Preencher 2 vetores de X posições cada, com números inteiros. Fazer uma função que receba os dois vetores como parametros e retorne a quantidade de posições que possuem números distintos
*/

int contador(int vet1[], int vet2[], int tamanho) {

    int count = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (vet1[i] != vet2[i])
        {
            count++;
        }
    }

    return count;
}

int main() {

    int X;

    printf("Quantidade de posições: ");
    scanf("%d", &X);

    int vet1[X];
    int vet2[X];

    for (int i = 0; i < X; i++)
    {
        printf("VETOR 1 na posição %d: ", i);
        scanf("%d", &vet1[i]);
        printf("VETOR 2 na posição %d: ", i);
        scanf("%d", &vet2[i]);
    }
    
    printf("Quantidade de números distintos: %d\n", contador(vet1, vet2, X));

    return 0;
}