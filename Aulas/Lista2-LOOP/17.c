#include <stdio.h>

/*
17. Faça um programa que apure os votos de uma eleição presidencial onde concorreram três
candidatos. Os votos podem ser 1, 2, 3 e 4 e devem ser contados de acordo com a tabela
abaixo:
1 - Joao da Silva
2 - Jose Ramalho
3 - Maria de Mattos
4 - Voto em Branco
Outros - Voto Nulo
Calcule e escreva o total de votos de cada candidato, o total de votos brancos, o total de
votos nulos e o nome do candidato que recebeu mais votos.
*/

int main() {
    int voto, totalVotos, votosJoao, votosJose, votosMaria, votosBranco, votosNulo;
    int maiorVotos;
    char vencedor[30];

    totalVotos = 0;
    votosJoao = 0;
    votosJose = 0;
    votosMaria = 0;
    votosBranco = 0;
    votosNulo = 0;

    printf("Digite os votos (0 para encerrar):\n");

    while (1) {
        printf("Digite seu voto (1-Joao, 2-Jose, 3-Maria, 4-Branco, 0-Sair): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        totalVotos++;

        if (voto == 1) {
            votosJoao++;
        } else if (voto == 2) {
            votosJose++;
        } else if (voto == 3) {
            votosMaria++;
        } else if (voto == 4) {
            votosBranco++;
        } else {
            votosNulo++;
        }
    }

    printf("\nResultado da eleicao:\n");
    printf("Joao da Silva: %d votos\n", votosJoao);
    printf("Jose Ramalho: %d votos\n", votosJose);
    printf("Maria de Mattos: %d votos\n", votosMaria);
    printf("Votos em branco: %d\n", votosBranco);
    printf("Votos nulos: %d\n", votosNulo);

    maiorVotos = votosJoao;
    sprintf(vencedor, "Joao da Silva");

    if (votosJose > maiorVotos) {
        maiorVotos = votosJose;
        sprintf(vencedor, "Jose Ramalho");
    }
    if (votosMaria > maiorVotos) {
        maiorVotos = votosMaria;
        sprintf(vencedor, "Maria de Mattos");
    }

    printf("Candidato com mais votos: %s (%d votos)\n", vencedor, maiorVotos);

    return 0;
}
