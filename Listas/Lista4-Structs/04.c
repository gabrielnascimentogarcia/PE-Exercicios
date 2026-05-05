#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa que leia as informações sobre as N ordens de serviço de um oficina mecânica.
Os seguintes dados serão lidos: número da OS, valor, tipo de serviço e nome do cliente. O
programa deve apresentar no final:
• a média de preço dos serviços prestados,
• os nomes dos clientes que pagaram por serviços acima da média calculada;
• o nome do cliente que pagou pelo serviço mais caro.
*/

typedef struct {
    int OS;
    float valor;
    char tipoServico[30];
    char nomeCliente[30];
} OrdemServico;

int main() {

    int N;
    float somaTotal = 0, media = 0;
    int indiceMaisCaro = 0;

    printf("Quantidade de ordens de serviço: ");
    scanf("%d", &N);

    OrdemServico *oficina = (OrdemServico *) malloc(N * sizeof(OrdemServico));

    for (int i = 0; i < N; i++)
    {
        printf("Registro %d\n", i + 1);
        printf("Número da OS: ");
        scanf("%d", &oficina[i].OS);
        printf("Valor: R$ ");
        scanf("%f", &oficina[i].valor);
        printf("Tipo de serviço: ");
        scanf(" %[^\n]s", oficina[i].tipoServico);
        printf("Nome do cliente: ");
        scanf(" %[^\n]s", oficina[i].nomeCliente);

        somaTotal += oficina[i].valor;

        if (oficina[i].valor > oficina[indiceMaisCaro].valor)
        {
            indiceMaisCaro = i;
        }
    }
    
    media = somaTotal / N;

    printf("\n===========Resultados===========\n");
    printf("Média de preços: %.2f\n", media);

    printf("\nClientes com serviços acima da média:\n");
    int encontrou = 0;
    for (int i = 0; i < N; i++)
    {
        if (oficina[i].valor > media)
        {
            printf("- %s (Valor: R$ %.2f)\n", oficina[i].nomeCliente, oficina[i].valor);
            encontrou = 1;
        }
    }
    
    if (!encontrou)
    {
        printf("Nenhum cliente com serviços acima da média!\n");
    }
    
    printf("Cliente que pagou pelo serviço mais caro: %s\n", oficina[indiceMaisCaro].nomeCliente);

    free(oficina);
    return 0;
}