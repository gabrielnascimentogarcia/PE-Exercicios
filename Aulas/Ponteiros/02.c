#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia uma cadeia de
caracteres em formato de data: DD/MM/AAAA

=> Crie uma função que receba esta data como parâmetro e
que retorne o dia, o mês e o ano em três variáveis inteiras
distintas. Escreva os valores retornados no programa
principal.
*/

void extrairData(char *dataStr, int *dia, int *mes, int *ano) {
    *dia = atoi(&dataStr[0]);
    
    *mes = atoi(&dataStr[3]);
    
    *ano = atoi(&dataStr[6]);
}

int main() {
    char data[11];
    int d, m, a;

    printf("Digite a data (DD/MM/AAAA): ");
    scanf("%10s", data);

    extrairData(data, &d, &m, &a);

    printf("\nDia: %d", d);
    printf("\nMes: %d", m);
    printf("\nAno: %d\n", a);

    return 0;
}