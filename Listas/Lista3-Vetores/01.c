#include <stdio.h>

/*
Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e
imprima, após a entrada de todos os dados, os nomes dos alunos aprovados.
Considere que a média para aprovação é 6,0.
*/

int main() {
    char nomes[60][30]; 
    float medias[60];
    float n1, n2;

    for (int i = 0; i < 60; i++) {
        printf("Aluno %d: ", i + 1);
        scanf(" %s", nomes[i]);
        printf("Nota 1 e nota 2: ");
        scanf("%f %f", &n1, &n2);

        medias[i] = (n1 + n2) / 2;
    }

    printf("\n--- LISTA DE APROVADOS ---\n");
    for (int i = 0; i < 60; i++) {
        if (medias[i] >= 6.0) {
            printf("Nome: %s | Media: %.1f\n", nomes[i], medias[i]);
        }
    }

    return 0;
}