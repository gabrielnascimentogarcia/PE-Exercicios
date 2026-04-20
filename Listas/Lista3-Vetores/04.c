#include <stdio.h>

/*
Faça um programa que preencha um vetor de N posições com os N primeiros
termos de uma série de Fibonacci (0 1 1 2 3 5 8 13 21 34...). Após preenchido o
vetor, verifique se um determinado número informado pelo usuário pertence ou
não ao vetor.
*/

int main() {

    int N, busca, encontrado = 0;

    printf("Quantidade de termos: ");
    scanf("%d", &N);

    int fib[N];

    for (int i = 0; i < N; i++)
        {
            if (i == 0)
            {
                fib[0] = 0;
            }
            else if (i == 1)
            {
                fib[1] = 1;
            }
            else
            {
                fib[i] = fib[i - 1] + fib[i - 2];
            }
        }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", fib[i]);
    }
    
    printf("\n\nInforme o número para saber se ele faz parte da sequencia de Fibonacci de %d termos: ", N);
    scanf("%d", &busca);

    for (int i = 0; i < N; i++)
    {
        if (fib[i] == busca)
        {
            encontrado = 1;
            break;
        }
        
    }
    
    if (encontrado)
    {
        printf("O número %d pertence a sequencia de Fibonacci de %d termos\n", busca, N);
    } else {
        printf("O número %d não pertence a sequencia de Fibonacci de %d termos\n", busca, N);
    }
    
    return 0;
}