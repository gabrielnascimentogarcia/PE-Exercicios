#include <stdio.h>

/*
Ler 20 números inteiros e depois imprimi-los na ordem contraria que foram lidos
*/

int main() {

    int vet[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o número na posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 19; i >= 0 ; i--)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}