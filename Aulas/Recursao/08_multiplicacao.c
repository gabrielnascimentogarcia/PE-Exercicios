#include <stdio.h>

/*
Faça uma função recursiva que retorne A * B. Não pode ser usado o operador *. Deve ser utilizado o metodo de somas sucessivas;
*/

int mult(int A, int B) {
    if (B == 0)
    {
        return 0;
    } else {
        return A + mult(A, B - 1);
    }
}

int main() {

    int A, B;

    do {
        printf("Digite A e B: ");
        scanf("%d %d", &A, &B);
    } while (B < 0);

    printf("%d * %d = %d\n", A, B, mult(A, B));
}