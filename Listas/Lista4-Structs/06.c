#include <stdio.h>

/*
6. Escreva uma função que receba duas structs do tipo dma, cada uma representando uma data
válida, e devolva o número de dias que decorreram entre as duas datas.
struct dma {
    int dia;
    int mes;
    int ano;
};
*/

struct dma {
    int dia;
    int mes;
    int ano;
};

int converterDias(struct dma d) {

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = d.ano * 365 + d.dia;

    for (int i = 0; i < d.mes - 1; i++)
    {
        total += diasMes[i];
    }
    
    return total;
}

int main() {

    struct dma data1, data2;

    printf("Digite a data 1 [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("Digite a data 2 [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    int diff = converterDias(data1) - converterDias(data2);

    if (diff < 0)
    {
        diff *= -1;
    }
    
    printf("Diferença: %d dias\n", diff);

    return 0;
}