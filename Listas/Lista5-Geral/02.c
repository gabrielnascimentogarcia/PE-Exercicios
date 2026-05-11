#include <stdio.h>

/*
Em uma competição de ginástica olímpica a nota é determinada por um painel de seis juízes. Cada um dos juízes
atribui uma nota entre zero e dez para o desempenho do atleta. Para calcular a nota final, a nota mais alta e a nota
mais baixa são descartadas e é calculada a média das quatro restantes. Escreva um programa que leia 6 notas entre
zero e dez e calcule a média, de cada um dos 30 atletas, após o descarte da maior e da menor nota. Faça uma função
que receba as seis notas lidas e que retorne para o programa principal a média calculada.
*/
/* code */
float calcularMedias(float notas[]) {
    float soma = 0;
    float maior = notas[0];
    float menor = notas[0];

    for (int i = 0; i < 6; i++)
    {
        soma += notas[i];

        if (notas[i] > maior)
        {
            maior = notas[i];
        }
        if (notas[i] < menor)
        {
            menor = notas[i];
        }
    }

    float mediaFinal = (soma - maior - menor) / 4.0;
    return mediaFinal;
}

int main() {

    float notas[6];
    float resultado;

    for (int i = 0; i < 30; i++)
    {
        printf("\n=====Atleta %d=====\n", i + 1);
        
        for (int j = 0; j < 6; j++)
        {
            do
            {
                printf("Notas do juiz %d [0.0 até 10.0]: ", j + 1);
                scanf("%f", &notas[j]);

                if (notas[j] < 0 || notas[j] > 10)
                {
                    printf("Nota inválida. Tente novamente!\n");
                }
            } while (notas[j] < 0 || notas[j] > 10);
            
        }
        resultado = calcularMedias(notas);
        printf("\nNota final do atleta %d: %.2f\n", i + 1, resultado);
    }
    
    return 0;
}