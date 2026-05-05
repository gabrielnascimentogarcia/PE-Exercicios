#include <stdio.h>
#include <string.h>

/*
2. Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes de
trânsito. Foram informados dados como: a sigla do estado, o número de veículos, e a quantidade
de acidentes. Faça um programa que calcule e mostre:
• a sigla do estado que possui maior número de carros;
• considerando o número de acidentes e o número de carros que circulam no estado,
informar o estado com menor índice de acidentes de trânsito;
• o número total de acidentes de trânsito computado.
*/

struct Dados
{
    char sigla[3];
    int numVeiculos;
    int acidentes;
};

int main() {

    struct Dados estados[20];
    int maior = -1;
    char siglaMaior[3];
    float menorIndice = -1.0;
    char siglaMenorIndice[3];
    int totalAcidentes = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Estado %d\n", i + 1);
        printf("Sigla: ");
        scanf(" %2s", estados[i].sigla);
        printf("Número de veículos: ");
        scanf("%d", &estados[i].numVeiculos);
        printf("Número de acidentes: ");
        scanf("%d", &estados[i].acidentes);

        if (estados[i].numVeiculos > maior)
        {
            maior = estados[i].numVeiculos;
            strcpy(siglaMaior, estados[i].sigla);
        }

        float indiceAtual = (float)estados[i].acidentes / estados[i].numVeiculos;
        if (menorIndice == -1 || indiceAtual < menorIndice)
        {
            menorIndice = indiceAtual;
            strcpy(siglaMenorIndice, estados[i].sigla);
        }
        
        totalAcidentes += estados[i].acidentes;
    }

    printf("\n================ RESULTADOS ================\n");
    printf("Estado com mais veículos: %s (%d veículos)\n", siglaMaior, maior);
    printf("Estado com menor índice de acidentes: %s (Índice: %.4f)\n", siglaMenorIndice, menorIndice);
    printf("Total de acidentes em todos os estados: %d\n", totalAcidentes);
    printf("============================================\n");

    return 0;
}