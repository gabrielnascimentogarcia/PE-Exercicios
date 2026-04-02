#include <stdio.h>

/*
Faça uma função que calcule X^n sendo n >= 0.
*/

int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * potencia(x, n - 1);
}

int main() {
    int x, n;
    printf("Digite a base: ");
    scanf("%d", &x);
    printf("Digite o expoente: ");
    scanf("%d", &n);
    printf("%d^%d = %d\n", x, n, potencia(x, n));
    return 0;
}