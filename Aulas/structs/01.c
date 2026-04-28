#include <stdio.h>
#include <string.h>

/*
Faça um programa que leia o quadro de cargos e salários de
uma empresa e que calcule a média salarial.
-> Crie uma estrutura com os campos cargo e salário
-> Ao final do programa escreva os cargos que estão acima da média
calculada
*/

struct Quadro {
    char cargo[50];
    float salario;
};

int main() {
    int n, i;
    float soma = 0, media = 0;

    printf("Quantos cargos deseja cadastrar? ");
    scanf("%d", &n);

    struct Quadro funcionarios[n];

    for(i = 0; i < n; i++) {
        printf("\n--- Registro %d ---\n", i + 1);
        printf("Nome do cargo: ");
        scanf(" %[^\n]s", funcionarios[i].cargo);
        printf("Salário: R$ ");
        scanf("%f", &funcionarios[i].salario);

        soma += funcionarios[i].salario;
    }

    if (n > 0) {
        media = soma / n;
    }

    printf("\n========================================");
    printf("\nMédia Salarial da Empresa: R$ %.2f", media);
    printf("\n========================================\n");

    printf("Cargos com salário acima da média:\n");
    int encontrou = 0;
    for(i = 0; i < n; i++) {
        if(funcionarios[i].salario > media) {
            printf("- %s (R$ %.2f)\n", funcionarios[i].cargo, funcionarios[i].salario);
            encontrou = 1;
        }
    }

    if(!encontrou) {
        printf("Nenhum cargo está acima da média.\n");
    }

    return 0;
}