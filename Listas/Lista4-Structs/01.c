#include <stdio.h>

/*
A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre
salário, idade e número de filhos. Faça um programa que leia os dados de 20 pessoas, e que
calcule e mostre:
• a média de salário da população;
• a média do número de filhos;
• o maior salário.
*/

struct Dados
{
    float salario;
    int idade;
    int filhos;
};

int main() {

    struct Dados habitante[20];
    float mediaSalario = 0;
    float mediaFilhos = 0;
    float maiorSalario = -1;

    for (int i = 0; i < 20; i++)
    {
        printf("Habitante %d\n", i + 1);
        printf("Salário: ");
        scanf("%f", &habitante[i].salario);
        printf("Idade: ");
        scanf("%d", &habitante[i].idade);
        printf("Filhos: ");
        scanf("%d", &habitante[i].filhos);

        mediaSalario += habitante[i].salario;
        mediaFilhos += habitante[i].filhos;

        if (habitante[i].salario > maiorSalario)
        {
            maiorSalario = habitante[i].salario;
        }
    }

    printf("\n========= Dados =========\n");
    printf("Média de salário da população: R$ %.2f\n", mediaSalario / 20.0);
    printf("Média de número de filhos: %.1f\n", mediaFilhos / 20.0);
    printf("Maior salário: R$ %.2f\n", maiorSalario);

    return 0;
}
