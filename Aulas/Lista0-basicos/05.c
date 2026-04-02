#include <stdio.h>

/*
5. Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule
e mostre a hora convertida em minutos e em segundos.
*/

int main() {
    int horas, minutos;
    int totalMinutos, totalSegundos;

    printf("Digite a hora: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    totalMinutos = horas * 60 + minutos;
    totalSegundos = totalMinutos * 60;

    printf("Total em minutos: %d\n", totalMinutos);
    printf("Total em segundos: %d\n", totalSegundos);

    return 0;
}
