#include <stdio.h>

/*
Faça um programa que leia os N salários dos funcionários de uma empresa.
Calcule a média salarial da empresa e escreva a quantidade de funcionários que
possuem salário acima da média.
*/

int main() {

    int N, acima = 0;
    float salario_total = 0, media;

    printf("Quantidade de funcionarios: ");
    scanf("%d", &N);

    float salarios[N];

    for (int i = 0; i < N; i++)
    {
        printf("Salário do funcionario %d: R$ ", i + 1);
        scanf("%f", &salarios[i]);
        salario_total += salarios[i];
    }
    
    media = salario_total / N;

    for (int i = 0; i < N; i++)
    {
        if (salarios[i] > media)
        {
            acima++;
        }
    }
    
    printf("Uma empresa com %d funcionarios, tem uma média salarial de R$ %.2f e %d recebem acima da média.\n", N, media, acima);

    return 0;
}