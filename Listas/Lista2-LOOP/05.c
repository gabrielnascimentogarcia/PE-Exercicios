#include <stdio.h>

/*
5. Faça um programa que calcule a área total de uma casa (sala, cozinha, quartos, banheiros, etc).
Considere que todos os cômodos são retangulares. O usuário deve entrar com a largura e o
comprimento de cada cômodo da casa. O final da leitura será detectado quando for digitado um
número negativo.
*/

int main() {
    float largura, comprimento, areaTotal, areaComodo;

    areaTotal = 0;

    while (1) {
        printf("Digite a largura do comodo (ou negativo para sair): ");
        scanf("%f", &largura);

        if (largura < 0) {
            break;
        }

        printf("Digite o comprimento do comodo: ");
        scanf("%f", &comprimento);

        areaComodo = largura * comprimento;
        areaTotal += areaComodo;
    }

    printf("Area total da casa: %.2f m2\n", areaTotal);

    return 0;
}
