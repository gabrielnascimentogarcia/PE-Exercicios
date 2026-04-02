#include <stdio.h>

/*
Faça uma função que calcule o quociente da divisão de A por B, utilizando subtrações sucessivas
*/

int quociente(int A, int B) {
    if (A < B)
    {
        return 0;
    }
    return 1 + quociente(A - B, B);
}