#include <stdio.h>

/*
Considere um vetor que guarde 100 números reais. Faça um programa que
preencha este vetor. Após o vetor preenchido multiplique seus valores ímpares
por 3 e divida os valores pares por 2. Escreva o maior elemento do vetor.
*/

int main() {

    int num[100];
    int maior;
    
    for (int i = 0; i < 100; i++)
    {
        printf("Número na posição %d: ", i);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 100; i++)
    {
        if (num[i] % 2 == 0)
        {
            num[i] = num[i] / 2;
        } else {
            num[i] = num[i] * 3;
        }
    }

    maior = num[0];

    for (int i = 1; i < 100; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }
    
    printf("Maior após as operações: %d\n", maior);

    return 0;
}