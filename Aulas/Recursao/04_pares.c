#include <stdio.h>

/*
Faça uma função que escreva os números pares menores ou iguais a N (N é par e N > 0)
*/

void pares(int N) {
    if (N < 2) return;
    
    pares(N - 2);
    printf("%d ", N);
}