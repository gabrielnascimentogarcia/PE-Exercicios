#include <stdio.h>

/*
Faça uma função recursiva para fazer os passos da torre de hanoi
*/

void hanoi(int N, char orig, char dest, char aux) {
    if (N == 1)
    {
        printf("Mova o disco 1 de %c para %c\n", orig, dest);
        return;
    }

    hanoi(N - 1, orig, aux, dest);

    printf("Mova o disco %d de %c para %c\n", N, orig, dest);
    
    hanoi(N - 1, aux, dest, orig);
}

int main() {
    int N;

    printf("Quantidade de discos: ");
    scanf("%d", &N);
    printf("Passos para resolver a Torre de Hanoi com %d discos:\n", N);
    
    hanoi(N, 'A', 'C', 'B');
    
    return 0;
}