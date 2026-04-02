#include <stdio.h>

/*
Faça uma função que some os números inteiros positivos compreendidos entre A e B. Considere que A < B e que A e B devem entrar na soma.
*/

int soma(int A, int B) {
    if (A > B)
    {
        return 0;
    }
    return A + soma(A + 1, B);
}