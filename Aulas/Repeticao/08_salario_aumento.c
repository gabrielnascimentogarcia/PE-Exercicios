#include <stdio.h>

/*
Calcular o salário de um funcionário sabendo que ele foi contratado por 1000 reais em 1995
e que no ano seguinte recebeu um aumento de 0.1%. A partir daí, em cada ano o funcionário
recebeu um percentual de aumento do dobro do ano anterior.
*/

int main() {
    int ano, ano_atual;
    double salario = 1000.0;
    double percentual = 0.001;  // 0.1%

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    for (ano = 1996; ano <= ano_atual; ano++) {
        salario += salario * percentual;
        percentual *= 2;  // dobra o percentual a cada ano
    }

    printf("Salario em %d: R$ %.2f\n", ano_atual, salario);

    return 0;
}
