#include <stdio.h>

/*
Faça uma função que retorne o enésimo termo de uma série de Fibonacci;
*/

int fibonacci(int N) {
    if (N == 1)
        return 0;
    if (N == 2)
        return 1;

    return fibonacci(N - 1) + fibonacci(N - 2);
}