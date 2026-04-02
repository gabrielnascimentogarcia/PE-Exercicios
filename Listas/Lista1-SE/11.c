#include <stdio.h>

/*
11. Uma loja de bicicletas paga a cada vendedor 2 salários mínimos mensais, mais uma comissão de 5%
sobre as vendas das bicicletas, dividida igualmente entre eles. Escreva um programa que leia o
número de empregados da loja, o valor do salário mínimo, o valor das vendas do mês e que calcule e
escreva: o salário total de cada empregado.
*/

int main() {
    int numEmpregados;
    float salarioMinimo, valorVendas, comissaoTotal, comissaoPorEmpregado, salarioTotal;

    printf("Digite o numero de empregados: ");
    scanf("%d", &numEmpregados);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);

    comissaoTotal = valorVendas * 0.05;
    comissaoPorEmpregado = comissaoTotal / numEmpregados;
    salarioTotal = 2 * salarioMinimo + comissaoPorEmpregado;

    printf("Salario total de cada empregado: R$ %.2f\n", salarioTotal);

    return 0;
}
