#include <stdio.h>
#include <string.h>

/*
Fazer um programa que leia códigos e preços dos
produtos de uma loja e que escreva ao final o código do
produto mais caro.
-> Considere que o código é uma cadeia de 3 caracteres.
*/

int main() {

    char cod[4], codmaiscaro[4];
    float valor, maior = -1.0;
    int N;

    printf("Quantidade de produtos: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Código do produto(3 caracteres): ");
        scanf(" %3s", cod);

        printf("Valor: R$ ");
        scanf("%f", &valor);

        if (valor > maior)
        {
            maior = valor;
            strcpy(codmaiscaro, cod);
        }

        printf("\n");
    }
    
    printf("O produto mais caro tem o código %s e custa R$ %.2f\n", codmaiscaro, maior);

    return 0;
}