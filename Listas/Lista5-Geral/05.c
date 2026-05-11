#include <stdio.h>

/*
Faça um programa que escreva uma série com os números inteiros compreendidos entre i e j. O intervalo entre os
números deve ser k. Crie uma função recursiva imprimeSerie(i,j,k) que escreva os elementos desta série.
*/

void imprimeSerie(int i, int j, int k) {

    if (i > j)
    {
        return;
    }
    printf("%d ", i);

    imprimeSerie(i + k, j, k);
}

int main() {

    int i, j, k;

    printf("Escreva i(inicio), j(final) e k(intervalo): ");
    scanf("%d %d %d", &i, &j, &k);

    if (k <= 0)
    {
        printf("ERRO, k não pode ser igual ou menor que 0!\n");
    } else {
        printf("\n========= Sequencia de inteiros entre %d e %d no intervalo de %d =========\n\n", i, j, k);
        imprimeSerie(i, j, k);
        printf("\n");
    }
    
    return 0;
}