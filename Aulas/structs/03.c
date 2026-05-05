#include <stdio.h>

/*
Considere a estrutura ponto:

struct tipoPonto {
    int x;
    int y;
};

Faça um programa que leia 2 pontos e implemente uma única função que:
-> Receba os pontos lidos como parâmetros
-> Retorne a multiplicação dos pontos
-> Retorne a soma dos pontos
*/

struct tipoPonto
{
    int x;
    int y;
};

void calculaOperacoes(struct tipoPonto p1, struct tipoPonto p2, struct tipoPonto *soma, struct tipoPonto *mult) {

    soma->x = p1.x + p2.x;
    soma->y = p1.y + p2.y;

    mult->x = p1.x * p2.x;
    mult->y = p1.y * p2.y;
}

int main() {

    struct tipoPonto ponto1, ponto2;
    struct tipoPonto resultadoSoma, resultadoMult;

    printf("Posição do ponto 1 (X Y): ");
    scanf("%d %d", &ponto1.x, &ponto1.y);
    printf("Posição do ponto 2 (X Y): ");
    scanf("%d %d", ponto2.x, ponto2.y);

    calculaOperacoes(ponto1, ponto2, &resultadoSoma, &resultadoMult);

    printf("\nResultados:\n");
    printf("Soma dos pontos: (%d %d)\n", resultadoSoma.x, resultadoSoma.y);
    printf("Multiplicação: (%d %d)\n", resultadoMult.x, resultadoMult.y);

    return 0;
}
