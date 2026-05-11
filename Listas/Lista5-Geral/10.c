#include <stdio.h>

/*
Faça um programa que leia um conjunto de dados sobre os N alunos de uma turma. Para cada aluno será lido o seu
nome, suas 4 notas e seu ano de ingresso na faculdade. O programa deve calcular a média de cada aluno e indicar o
nome do aluno que obteve a maior média (é possível que existam vários alunos). Deve ser usado um vetor de
estruturas.
*/

typedef struct
{
    char nome[30];
    float n1, n2, n3, n4;
    int ano;
    float media;
} Aluno;

int main() {

    int N;
    float media;
    float maiorMedia = 0;

    printf("Quantidade de alunos da turma: ");
    scanf("%d", &N);

    Aluno turma[N];

    for (int i = 0; i < N; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", turma[i].nome);
        printf("Nota 1: ");
        scanf("%f", &turma[i].n1);
        printf("Nota 2: ");
        scanf("%f", &turma[i].n2);
        printf("Nota 3: ");
        scanf("%f", &turma[i].n3);
        printf("Nota 4: ");
        scanf("%f", &turma[i].n4);
        printf("Ano de ingresso: ");
        scanf("%d", &turma[i].ano);

        turma[i].media = (turma[i].n1 + turma[i].n2 + turma[i].n3 + turma[i].n4) / 4.0;
    }
    
    for (int i = 0; i < N; i++)
    {
        if (i == 0 || turma[i].media > maiorMedia)
        {
            maiorMedia = turma[i].media;
        }
    }
    
    printf("\nMaior media: %.2f\n", maiorMedia);
    for (int i = 0; i < N; i++)
    {
        if (turma[i].media == maiorMedia)
        {
            printf("- %s\n", turma[i].nome);
        }
    }

    return 0;
}