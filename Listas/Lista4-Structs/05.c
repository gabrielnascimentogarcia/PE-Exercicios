#include <stdio.h>

/*
Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa
região. De cada habitante foram coletados os seguintes dados: altura, idade e cor dos olhos (A-
azuis, V-verdes ou C-castanhos). Faça um programa que leia estes dados e que calcule e mostre:

• a média das idades;
• a maior e a menor altura;
• a quantidade de pessoas de olhos castanhos que possuam idade acima da média
calculada.
*/

typedef struct
{
    float altura;
    int idade;
    char corOlhos;
} habitante;

int main() {

    habitante Habitantes[50];
    float somaIdades = 0, mediaIdades = 0;
    float maiorAltura, menorAltura;
    int qndCastanhosAcima = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Habitante %d\n", i + 1);
        printf("Altura: ");
        scanf("%f", &Habitantes[i].altura);
        printf("Idade: ");
        scanf("%d", &Habitantes[i].idade);
        printf("Cor dos olhos (A-azuis, V-verdes ou C-castanhos): ");
        scanf(" %c", &Habitantes[i].corOlhos);

        somaIdades += Habitantes[i].idade;

        if (i == 0)
        {
            maiorAltura = Habitantes[i].altura;
            menorAltura = Habitantes[i].altura;
        } else {
            if (Habitantes[i].altura > maiorAltura)
            {
                maiorAltura = Habitantes[i].altura;
            }
            if (Habitantes[i].altura < menorAltura)
            {
                menorAltura = Habitantes[i].altura;
            }
        }
        printf("\n");
    }    
    
    mediaIdades = somaIdades / 50;

    for (int i = 0; i < 50; i++)
    {
        if ((Habitantes[i].corOlhos == 'C' || Habitantes[i].corOlhos == 'c') && Habitantes[i].idade > mediaIdades)
        {
            qndCastanhosAcima++;
        }
    }

    printf("\n===========Resultados===========\n");
    printf("Média de idades: %.1f\n", mediaIdades);
    printf("Maior altura: %.2f metros\n", maiorAltura);
    printf("Menor altura: %.2f metros\n", menorAltura);
    printf("Quantidade de habitantes com olhos castanhos com idades acima da média: %d\n", qndCastanhosAcima);

    return 0;
}
