#include <stdio.h>
#include <stdlib.h>

/*
Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Faça um
programa que leia o salário de um funcionário, o valor total de suas vendas e apresente o seu
salário final. Considere N funcionários (use alocação dinâmica).
*/

struct Dados
{
    float salario;
    float vendas;
    float salarioFinal;
};

int main() {

    int N;
    struct Dados *funcionarios;

    printf("Quantidade de funcionarios: ");
    scanf("%d", &N);

    funcionarios = (struct Dados *) malloc(N * sizeof(struct Dados));

    for (int i = 0; i < N; i++)
    {
        printf("Registro %d\n", i + 1);
        printf("Salário: R$ ");
        scanf("%f", &funcionarios[i].salario);
        printf("Vendas: R$ ");
        scanf("%f", &funcionarios[i].vendas);
        funcionarios[i].salarioFinal = funcionarios[i].salario + (0.06 * funcionarios[i].vendas);
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("\nFuncionario %d\n", i + 1);
        printf("Salário final: R$ %.2f\n", funcionarios[i].salarioFinal);
    }

    free(funcionarios);

    return 0;
}
