#include <stdio.h>

/*
8. Faça um programa que calcule o valor total que um edifício garagem arrecadou em um dia de
operação, no qual 200 carros utilizaram o estacionamento. O algoritmo deve ler o horário de
entrada (hora e minuto) assim como o de saída. Sabe-se que o valor mínimo cobrado é de 4 reais
por um período 2 horas. A partir daí, cobra-se 1 real por hora adicional.
*/

int main() {
    int i, horaEntrada, minEntrada, horaSaida, minSaida;
    int tempoEstadia, horasEstadia, valorTotal, valorArrecadado;

    valorArrecadado = 0;

    for (i = 0; i < 200; i++) {
        printf("Carro %d\n", i + 1);
        printf("Hora de entrada: ");
        scanf("%d", &horaEntrada);
        printf("Minuto de entrada: ");
        scanf("%d", &minEntrada);
        printf("Hora de saida: ");
        scanf("%d", &horaSaida);
        printf("Minuto de saida: ");
        scanf("%d", &minSaida);

        tempoEstadia = (horaSaida * 60 + minSaida) - (horaEntrada * 60 + minEntrada);
        horasEstadia = tempoEstadia / 60;

        if (tempoEstadia % 60 > 0) {
            horasEstadia++;
        }

        if (horasEstadia <= 2) {
            valorTotal = 4;
        } else {
            valorTotal = 4 + (horasEstadia - 2);
        }

        valorArrecadado += valorTotal;
    }

    printf("Total arrecadado no dia: R$ %d\n", valorArrecadado);

    return 0;
}
