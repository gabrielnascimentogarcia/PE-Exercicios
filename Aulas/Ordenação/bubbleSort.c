#include <stdio.h>
#include <string.h>

/*
 resolva o seguinte problema utilizando bubble sort em C:

Uma professora de uma escola utilizando struct, da a nota dos alunos, o nome e a idade de forma não ordenada, ela quer criar um programa que ordene essas notas da forma mais eficiete utilizando bubble sort, segue as regras:

1 - Da nota mais baixa para a mais alta

2 - Em caso de empate, o aluno mais novo vem antes

3 - Em caso de empate das notas, utilizasse a ordem alfabetica 
*/
typedef struct 
{
    char nome[50];
    float nota;
    int idade;
} Aluno;

void ordenarAlunos(Aluno lista[], int n) {
    Aluno temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            int trocar = 0;

            if (lista[j].nota > lista[j + 1].nota)
            {
                trocar = 1;
            } else if (lista[j].nota == lista[j + 1].nota)
            {
                if (lista[j].idade > lista[j + 1].idade)
                {
                    trocar = 1;
                } else if (lista[j].idade == lista[j + 1].idade)
                {
                    if (strcmp(lista[j].nome, lista[j + 1].nome) > 0)
                    {
                        trocar = 1;
                    }
                }
            }
            if (trocar)
            {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

int main() {

    int n;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    Aluno turma[n];

    for (int i = 0; i < n; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
        printf("Idade: ");
        scanf("%d", &turma[i].idade);
    }

    printf("\nLista original:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nota: %.1f | Idade: %d | Nome: %s\n", turma[i].nota, turma[i].idade, turma[i].nome);
    }

    ordenarAlunos(turma, n);

    printf("\nLista ordenada:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nota: %.1f | Idade: %d | Nome: %s\n", turma[i].nota, turma[i].idade, turma[i].nome);
    }

    return 0;
}