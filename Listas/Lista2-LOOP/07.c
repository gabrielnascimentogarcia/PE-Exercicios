#include <stdio.h>

/*
7. Em um cinema, cada espectador respondeu a uma pesquisa, que perguntava a sua idade e a sua
opinião em relação a um filme (O – Ótimo; B – Bom; R – Regular; P – Péssimo). Faça um programa
que informe a média de idade das pessoas que responderam o questionário e a porcentagem dada
para cada uma das respostas. O programa deve terminar quando o usuário digitar uma idade
negativa.
*/

int main() {
    int idade, totalIdade, totalPessoas;
    int qtdO, qtdB, qtdR, qtdP;
    char opiniao;
    float mediaIdade, percO, percB, percR, percP;

    totalIdade = 0;
    totalPessoas = 0;
    qtdO = 0;
    qtdB = 0;
    qtdR = 0;
    qtdP = 0;

    while (1) {
        printf("Digite a idade (ou negativo para sair): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite sua opinao (O/B/R/P): ");
        scanf(" %c", &opiniao);

        totalIdade += idade;
        totalPessoas++;

        if (opiniao == 'O' || opiniao == 'o') {
            qtdO++;
        } else if (opiniao == 'B' || opiniao == 'b') {
            qtdB++;
        } else if (opiniao == 'R' || opiniao == 'r') {
            qtdR++;
        } else if (opiniao == 'P' || opiniao == 'p') {
            qtdP++;
        }
    }

    if (totalPessoas > 0) {
        mediaIdade = (float)totalIdade / totalPessoas;
        percO = (qtdO * 100.0) / totalPessoas;
        percB = (qtdB * 100.0) / totalPessoas;
        percR = (qtdR * 100.0) / totalPessoas;
        percP = (qtdP * 100.0) / totalPessoas;

        printf("Media de idade: %.2f\n", mediaIdade);
        printf("Porcentagem Otimo: %.2f%%\n", percO);
        printf("Porcentagem Bom: %.2f%%\n", percB);
        printf("Porcentagem Regular: %.2f%%\n", percR);
        printf("Porcentagem Pessimo: %.2f%%\n", percP);
    }

    return 0;
}
