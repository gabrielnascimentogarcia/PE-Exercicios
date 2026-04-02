#include <stdio.h>

/*
Faça um programa que calcule o valor de E.
E = 1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1/(N!)
*/

int main() {
    int n, i, j;
    long long fatorial;
    double e = 1.0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial = 1;
        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }
        e += 1.0 / fatorial;
    }

    printf("Valor de E com %d termos: %.10f\n", n, e);

    return 0;
}
