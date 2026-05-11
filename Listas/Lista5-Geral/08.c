#include <stdio.h>

/*
Uma empresa que comercializa produtos alimentícios controla seu estoque diariamente. Faça um programa que leia a
quantidade de estoque diário do mês passado e que calcule a média mensal em estoque. Determine também o maior e
menor estoque lidos.
*/

int main() {

    int dias;

    printf("Quantidade de dias: ");
    scanf("%d", &dias);

    float estoque[dias];
    float maior, menor;
    float media = 0;

    for (int i = 0; i < dias; i++)
    {
        printf("Estoque no dia %d: ", i + 1);
        scanf("%f", &estoque[i]);
        media += estoque[i];
        if (i == 0)
        {
            maior = estoque[0];
            menor = estoque[0];
        }else { 
            if (estoque[i] > maior)
            {
                maior = estoque[i];
            }
            if (estoque[i] < menor)
            {
                menor = estoque[i];
            }
        }
    }
    
    printf("Maior estoque: %.2f\n", maior);
    printf("Menor estoque: %.2f\n", menor);
    printf("Média em estoque: %.2f\n", media/dias);

    return 0;
}