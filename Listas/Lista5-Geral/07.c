#include <stdio.h>

/*
Faça um programa que leia dois números inteiros A e B e que calcule o quociente da divisão de A por B. O programa
deve conter uma função recursiva que retorne este valor, entretanto para este cálculo não deve ser usada nenhuma
operação de divisão. Lembre-se que a divisão é conjunto de subtrações sucessivas.
*/

int quociente(int A, int B) {
    if (A < B)
    {
        return 0;
    } 
    
    return quociente(A - B, B) + 1;
}

int main() {

    int A, B;

    printf("Digite A e B: ");
    scanf("%d %d", &A, &B);

    printf("O quociente da divisão de %d por %d: %d\n", A, B, quociente(A, B));
    
    return 0;
}