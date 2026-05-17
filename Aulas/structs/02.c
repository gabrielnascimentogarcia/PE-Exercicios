#include <stdio.h>

/*
Faça um programa que contenha uma função que receba duas
estruturas do tipo dma, cada uma representando uma data
válida, e que devolva o número de dias que decorreram entre as
duas datas.
struct dma {
    int dia, mes, ano;
};
*/

struct dma
{
    int dia, mes, ano;
};

int totalDias(struct dma d) {

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = d.ano * 365 + d.dia;

    for (int i = 0; i < d.mes - 1; i++)
    {
        total += diasMes[i];
    }
    return total;
}

int main() {

    struct dma d1, d2;

    printf("Data 1 [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    printf("Data 2 [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    int diff = totalDias(d1) - totalDias(d2);

    if (diff < 0)
    {
        diff *= -1;
    }
    
    printf("Diferença: %d dias\n", diff);

    return 0;
}