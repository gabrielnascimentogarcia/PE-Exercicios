#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Faça um programa que leia uma cadeia de caracteres
em formato de data: DD/MM/AAAA
-> Crie uma função que receba esta data como parâmetro e que
retorne o ano em uma variável inteira.
-> Crie um a função que receba o ano como parâmetro e retorne
se a data caiu em um ano bissexto.
*/

int ano_extraido(char data[]) {

    char anoStr[5];

    anoStr[0] = data[6];
    anoStr[1] = data[7];
    anoStr[2] = data[8];
    anoStr[3] = data[9];
    anoStr[4] = '\0';
    
    return atoi(anoStr);
}

int ehBissexto(int ano) {

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    char data[11];

    printf("Digite a data no formato (DD/MM/AAAA): ");
    scanf("%10s", data);

    int ano = ano_extraido(data);

    printf("Ano extraido: %d\n", ano);

    if (ehBissexto(ano))
    {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }
    
    return 0;
}