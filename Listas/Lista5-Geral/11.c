#include <stdio.h>

/*
Faça um programa que leia dois vetores X e Y com números reais e escreva na tela as seguintes opções para o usuário:
somar X e Y, subtrair Y de X, pesquisar um elemento em X e Y, mostrar X e Y e finalizar o programa. Devem ser
criadas funções para: somar, subtrair, preencher, mostrar e procurar elemento.
*/

#define TAM 5

void preencher(float v[], char nome) {
    printf("Preencha o vetor %c:\n", nome);
    for (int i = 0; i < TAM; i++)
    {
        printf("%c[%d]: ", nome, i);
        scanf("%f", &v[i]);
    }
}

void mostrar(float v[], char nome) {
    printf("Vetor %c: [ ", nome);
    for (int i = 0; i < TAM; i++)
    {
        printf("%.2f ", v[i]);
    }
    printf("]\n");
}

void somar(float x[], float y[]) {
    printf("Resultado da soma (X + Y): [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%.2f ", x[i] + y[i]);
    }
    printf("]\n");
}

void subtrair(float x[], float y[]) {
    printf("Resultado da subtração (X - Y): [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%.2f ", x[i] - y[i]);
    }
    printf("]\n");
}

void procurar(float x[], float y[]) {
    float valor;
    int achouX = 0;
    int achouY = 0;

    printf("Digite o valor que deseja procurar: ");
    scanf("%f", &valor);

    for (int i = 0; i < TAM; i++)
    {
        if (x[i] == valor)
        {
            achouX = 1;
        }
        if (y[i] == valor)
        {
            achouY = 1;
        }
    }
    
    if (achouX)
    {
        printf("O valor %.2f foi encontrado em X.\n", valor);
    } else {
        printf("O valor %.2f não foi encontrado em X.\n", valor);
    }
    
    if (achouY)
    {
        printf("O valor %.2f foi encontrado em Y.\n", valor);
    } else {
        printf("O valor %.2f não foi encontrado em Y.\n", valor);
    }
    
}

int main() {
    
    float X[TAM], Y[TAM];
    int op;

    printf("-----INICIALIZAÇÃO-----\n");
    preencher(X, 'X');
    preencher(Y, 'Y');

    do
    {
        printf("\nMENU:\n1-Somar\n2-Subtrair\n3-Pesquisar\n4-Mostrar\n0-Sair\nOpção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            somar(X, Y);
            break;

        case 2:
            subtrair(X, Y);
            break;

        case 3:
            procurar(X, Y);
            break;
        
        case 4:
            mostrar(X, 'X');
            mostrar(Y, 'Y');
            break;

        case 0:
            printf("Saindo...\n");
            break;
        
        default:
            printf("Opção invalida!\n");
        }

    } while (op != 0);
    
    return 0;
}