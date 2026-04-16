#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que preencha dois vetores com as matriculas do alunos de um curso -> MAT int.

=> O vetor 1 será dos N alunos matriculados em PROG 1 (função preencheTurma(vet, tam))
=> O vetor 2 será dos M alunos matriculados em PROG 2 (função preencheTurma(vet, tam))

Após preencher os vetores, chame uma função que imprima os alunos irregulares -> Que estão matriculados nas duas turmas.
*/

void preencheTurma(int *vet, int tam) {

    for (int i = 0; i < tam; i++)
    {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
}

void imprimeIrregulares(int *vet1, int tam1, int *vet2, int tam2) {

    int encontrou = 0;
    
    printf("\nAlunos Irregulares (Matriculados em PROG 1 e PROG 2)\n");
    
    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            if (vet1[i] == vet2[j]) {
                printf("Matricula: %d\n", vet1[i]);
                encontrou = 1;
                break;
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum aluno irregular encontrado.\n");
    }
}

int main() {

    int N, M;
    int *vet1, *vet2;

    printf("Quantidade de alunos matriculados em PROG 1: ");
    scanf("%d", &N);
    printf("Quantidade de alunos matriculados em PROG 2: ");
    scanf("%d", &M);

    vet1 = (int *) malloc(N * sizeof(int));
    vet2 = (int *) malloc(M * sizeof(int));

    preencheTurma(vet1, N);
    preencheTurma(vet2, M);

    imprimeIrregulares(vet1, N, vet2, M);

    free(vet1);
    free(vet2); 

    return 0;
}