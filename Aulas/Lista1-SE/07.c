#include <stdio.h>

/*
7. Faça um programa que leia a quantidade de horas aula dadas por dois professores e o valor por
hora recebido por cada um. Mostrar na tela qual dos professores tem salário total maior.
*/

int main() {
    int horasAula1, horasAula2;
    float valorHora1, valorHora2, salarioTotal1, salarioTotal2;

    printf("Digite as horas aula do primeiro professor: ");
    scanf("%d", &horasAula1);
    printf("Digite o valor por hora do primeiro professor: ");
    scanf("%f", &valorHora1);
    printf("Digite as horas aula do segundo professor: ");
    scanf("%d", &horasAula2);
    printf("Digite o valor por hora do segundo professor: ");
    scanf("%f", &valorHora2);

    salarioTotal1 = horasAula1 * valorHora1;
    salarioTotal2 = horasAula2 * valorHora2;

    if (salarioTotal1 > salarioTotal2) {
        printf("O primeiro professor tem salario maior\n");
    } else if (salarioTotal2 > salarioTotal1) {
        printf("O segundo professor tem salario maior\n");
    } else {
        printf("Os salarios sao iguais\n");
    }

    return 0;
}
