#include <stdio.h>

/*
13. Considere as viagens que são realizadas entre as cidades de Metrópolis e Gotham City. Sabendo
que todas as viagens entre estas cidades são feitas sempre dentro de um mesmo dia, elabore um
programa que permita que um usuário informe o momento exato (hora, minuto, segundo) da sua
partida e da sua chegada, e que calcule e escreva o tempo total da viagem (também em horas,
minutos e segundos).
*/

int main() {
    int horaPartida, minPartida, segPartida;
    int horaChegada, minChegada, segChegada;
    int totalSegPartida, totalSegChegada, totalSegViagem;
    int horas, minutos, segundos;

    printf("Hora de partida: ");
    scanf("%d", &horaPartida);
    printf("Minuto de partida: ");
    scanf("%d", &minPartida);
    printf("Segundo de partida: ");
    scanf("%d", &segPartida);

    printf("Hora de chegada: ");
    scanf("%d", &horaChegada);
    printf("Minuto de chegada: ");
    scanf("%d", &minChegada);
    printf("Segundo de chegada: ");
    scanf("%d", &segChegada);

    totalSegPartida = horaPartida * 3600 + minPartida * 60 + segPartida;
    totalSegChegada = horaChegada * 3600 + minChegada * 60 + segChegada;
    totalSegViagem = totalSegChegada - totalSegPartida;

    horas = totalSegViagem / 3600;
    minutos = (totalSegViagem % 3600) / 60;
    segundos = totalSegViagem % 60;

    printf("Tempo total da viagem: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}
