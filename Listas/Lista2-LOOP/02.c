#include <stdio.h>

/*
2. Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados por uma
empresa. Ao final deve ser escrito o total gasto pela empresa.
*/

int main() {
    int i;
    int quantidade;
    float preco, totalGasto;

    totalGasto = 0;

    for (i = 0; i < 50; i++) {
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &quantidade);
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &preco);
        totalGasto += quantidade * preco;
    }

    printf("Total gasto pela empresa: R$ %.2f\n", totalGasto);

    return 0;
}
