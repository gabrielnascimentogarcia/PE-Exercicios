#include <stdio.h>
#include <string.h>

/*
13. Faça um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome
do produto mais caro. Considere que o final da lista é marcado pelo produto 'XXX' e que não
existem preços repetidos.
*/

int main() {
    char nome[100], produtoMaisCaro[100];
    float preco, precoMaisCaro;

    precoMaisCaro = 0;

    while (1) {
        printf("Digite o nome do produto (XXX para sair): ");
        scanf("%s", nome);

        if (strcmp(nome, "XXX") == 0) {
            break;
        }

        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

        if (preco > precoMaisCaro) {
            precoMaisCaro = preco;
            strcpy(produtoMaisCaro, nome);
        }
    }

    printf("Produto mais caro: %s (R$ %.2f)\n", produtoMaisCaro, precoMaisCaro);

    return 0;
}
