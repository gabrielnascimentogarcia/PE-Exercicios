#include <stdio.h>

/*
Faça um programa que contenha uma função que receba duas
estruturas do tido dma, cada uma representando uma data
válida, e que devolva o número de dias que decorreram entre as
duas datas.
struct dma {
    int dia, mes, ano;
};
*/

struct dma {
    int dia, mes, ano;
};

int diferenca_anos(struct dma inicial, struct dma final) {
    int anos = final.ano - inicial.ano;

    if (final.mes < inicial.mes || (final.mes == inicial.mes && final.dia < inicial.dia)) {
        anos--;
    }

    return anos;
}

int main() {
    struct dma d1, d2;

    printf("Data inicial (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);

    printf("Data final (ddmm aaaa): ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    int diff = diferenca_anos(d1, d2);

    if (diff < 0)
    {
        diff = diff * (-1);
    }

    printf("Diferenca: %d anos completos\n", diff);

    return 0;
}