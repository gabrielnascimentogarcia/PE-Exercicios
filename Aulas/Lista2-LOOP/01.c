#include <stdio.h>

/*
1. Faça um programa que apresente o peso total que será carregado por um caminhão. Sabe-se que
este caminhão carrega 25 caixas. O peso de cada uma das caixas será informado pelo usuário.
*/

int main() {
    int i;
    float peso, pesoTotal;

    pesoTotal = 0;

    for (i = 0; i < 25; i++) {
        printf("Digite o peso da caixa %d: ", i + 1);
        scanf("%f", &peso);
        pesoTotal += peso;
    }

    printf("Peso total do caminhao: %.2f kg\n", pesoTotal);

    return 0;
}
