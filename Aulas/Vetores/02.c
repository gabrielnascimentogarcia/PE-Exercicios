#include <stdio.h>

/*
Ler N notas dos alunos de uma turma e calcular a média. Ao final imprimir a quantidade de alunos que ficou acima da média calculada
*/

int main() {
    int N;
    int alunos_acima = 0;
    float soma_notas = 0, media = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &N);

    float notas[N];

    for (int i = 0; i < N; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma_notas += notas[i];
    }

    media = soma_notas / N;

    for (int i = 0; i < N; i++) {
        if (notas[i] > media) {
            alunos_acima++;
        }
    }
    
    printf("Quantidade de alunos acima de %.2f: %d\n", media, alunos_acima);

    return 0;
}