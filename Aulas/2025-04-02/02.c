#include <stdio.h>

/*
Faça um programa que leia dois números inteiros positivos A e B e retorne a subtração (A - B).
Faça uma função recursiva que receberá como parametros A e B e retorne a subtração. Nesta
função não pode ser usada nenhuma operação matématica, mas pode ser chamadas as funções:
(1) socc(x) => Retorna o sucessor de um números X;
(2) pred(x) => Retorna o predecessor de um número X;
*/

int succX(int A) {
    return A + 1;
}

int prec(int B) {
    return B - 1;
}

int subd(int A, int B) {
    if (B == 0)
    {
        return A;
    } else {
        return subd(prec(A), prec(B));
    }
}

int main() {

    int A, B;

    do
    {
        printf("Digite A e B: ");
        scanf("%d %d", &A, &B);
    } while (A < 0 || B < 0);

    printf("%d - %d = %d\n", A, B, subd(A, B));
    
}