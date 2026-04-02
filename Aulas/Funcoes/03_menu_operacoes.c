#include <stdio.h>

/*
Faça um programa imprima na tela um Menu que permita o usuário escolher as seguintes operações: +, -, /, *.
Se um operador inválido for digitado deve ser impresso um erro.
Se o usuário digitar ! o programa deve ser finalizado.
Se o usuário escolher uma das quatro operações, o programa deve ler dois números reais e efetuá-los.
Faça funções para escrever o Menu, realizar a operação e verificar se o operador é válido.
*/

void escreveMenu() {
    printf("\n=== MENU ===\n");
    printf("+ - Somar\n");
    printf("- - Subtrair\n");
    printf("/ - Dividir\n");
    printf("* - Multiplicar\n");
    printf("! - Sair\n");
    printf("Escolha uma opcao: ");
}

int operadorValido(char op) {
    return (op == '+' || op == '-' || op == '/' || op == '*' || op == '!');
}

float realizarOperacao(char op, float a, float b) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                printf("Erro: divisao por zero!\n");
                return 0;
            }
        case '*':
            return a * b;
        default:
            return 0;
    }
}

int main() {
    char op;
    float a, b, resultado;

    do {
        escreveMenu();
        scanf(" %c", &op);

        if (op == '!') {
            printf("Programa finalizado!\n");
            break;
        }

        if (!operadorValido(op)) {
            printf("Operador invalido!\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        printf("Digite o segundo numero: ");
        scanf("%f", &b);

        resultado = realizarOperacao(op, a, b);
        printf("Resultado: %.2f\n", resultado);

    } while (op != '!');

    return 0;
}
