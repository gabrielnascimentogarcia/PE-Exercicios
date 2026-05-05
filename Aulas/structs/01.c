#include <stdio.h>
#include <string.h>

/*
Faça um programa que leia o quadro de cargos e salários de
uma empresa e que calcule a média salarial.
-> Crie uma estrutura com os campos cargo e salário
-> Ao final do programa escreva os cargos que estão acima da média
calculada
*/

struct Quadro
{
    char cargo[50];
    float salario;
};

int main() {

    int n;
    float somaSalario = 0, media = 0;

    printf("Quantidade de funcionarios: ");
    scanf("%d", &n);

    struct Quadro funcionarios[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n======= Funcionario %d =======\n", i + 1);
        printf("Cargo: ");
        scanf(" %49[^\n]", funcionarios[i].cargo);

        printf("Salário: R$ ");
        scanf("%f", &funcionarios[i].salario);

        somaSalario += funcionarios[i].salario;
    }
    
    media = somaSalario / n;

    printf("\n==============================\n");
    printf("Média da empresa: R$ %.2f", media);
    printf("\n==============================\n");

    printf("Cargos com salário acima da média:\n");
    int encontrou = 0;
    for (int i = 0; i < n; i++)
    {
        if (funcionarios[i].salario > media)
        {
            printf("%s - R$ %.2f\n", funcionarios[i].cargo, funcionarios[i].salario);
            encontrou = 1;
        }
    }
    
    if (!encontrou)
    {
        printf("Nenhum funcionario com salário maior que a média da empresa!\n");
    }

    return 0;
}
