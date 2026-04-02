#include <stdio.h>

/*
Faça um programa em C que leia uma data no formato "dd/mm/aaaa" e que escreva a mesma data por extenso.
Utilize o comando switch case.
Exemplo: Entrada: 10/12/2021 -> Saída: 10 de dezembro de 2021
*/

int main() {
    int dia, mes, ano;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%d de ", dia);

    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
        default:
            printf("mes invalido");
            break;
    }

    printf(" de %d\n", ano);

    return 0;
}
