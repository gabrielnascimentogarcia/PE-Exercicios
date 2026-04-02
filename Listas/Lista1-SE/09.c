#include <stdio.h>

/*
9. A prefeitura da "Terra do Nunca" vai realizar suas eleições em urnas eletrônicas, sendo 3 os
candidatos à prefeitura (Capitão Gancho, Peter Pan e Wendy). Elabore um programa que permita ao
usuário informar o número de votos de cada um dos candidatos, escrevendo em seguida o resultado
da eleição. Sabe-se que, caso um dos candidatos tenha mais de 50% dos votos ele é eleito sem
necessidade de segundo turno. Na "Terra do Nunca" não existem votos nulos ou brancos.
*/

int main() {
    int votosGancho, votosPeter, votosWendy, totalVotos;
    int maiorVotos;
    char vencedor[20];

    printf("Digite os votos de Capitao Gancho: ");
    scanf("%d", &votosGancho);
    printf("Digite os votos de Peter Pan: ");
    scanf("%d", &votosPeter);
    printf("Digite os votos de Wendy: ");
    scanf("%d", &votosWendy);

    totalVotos = votosGancho + votosPeter + votosWendy;

    maiorVotos = votosGancho;
    sprintf(vencedor, "Capitao Gancho");

    if (votosPeter > maiorVotos) {
        maiorVotos = votosPeter;
        sprintf(vencedor, "Peter Pan");
    }
    if (votosWendy > maiorVotos) {
        maiorVotos = votosWendy;
        sprintf(vencedor, "Wendy");
    }

    printf("Total de votos: %d\n", totalVotos);
    printf("Vencedor: %s com %d votos\n", vencedor, maiorVotos);

    if (maiorVotos > totalVotos / 2) {
        printf("Eleito no primeiro turno!\n");
    } else {
        printf("Segundo turno necessario!\n");
    }

    return 0;
}
