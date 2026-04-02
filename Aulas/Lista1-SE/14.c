#include <stdio.h>

/*
14. O síndico do condomínio Praias Oceânicas, que possui 4 blocos, instituiu uma nova forma de
cobrança. Os condôminos dos blocos Itaipu e Itacoatiara pagam 10% a mais que os moradores dos
blocos Camboinhas e Piratininga. Os moradores da cobertura pagam uma taxa extra fixa relativa a
1% do total do condomínio. Supondo que cada bloco possui 20 apartamentos simples e 4 coberturas,
faça um programa que leia a taxa condominial básica e que informe o total arrecadado pelo síndico
no mês, especificando também os valores diferenciados de cada condomínio.
*/

int main() {
    float taxaBasica, taxaItaipu, taxaCamboinhas, taxaExtraCobertura;
    float totalArrecadado;
    int aptosSimples = 20, coberturas = 4;

    printf("Digite a taxa condominial basica: ");
    scanf("%f", &taxaBasica);

    taxaItaipu = taxaBasica * 1.10;
    taxaCamboinhas = taxaBasica;
    taxaExtraCobertura = taxaBasica * 0.01;

    totalArrecadado = (aptosSimples * taxaItaipu + coberturas * (taxaItaipu + taxaExtraCobertura)) +
                      (aptosSimples * taxaCamboinhas + coberturas * (taxaCamboinhas + taxaExtraCobertura));

    printf("Taxa Itaipu/Itacoatiara: R$ %.2f\n", taxaItaipu);
    printf("Taxa Camboinhas/Piratininga: R$ %.2f\n", taxaCamboinhas);
    printf("Taxa extra cobertura: R$ %.2f\n", taxaExtraCobertura);
    printf("Total arrecadado: R$ %.2f\n", totalArrecadado);

    return 0;
}
