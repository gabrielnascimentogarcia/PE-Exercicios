#include <stdio.h>

/*
Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são
números que têm o mesmo valor se lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232,
1661, etc. O final da leitura é indicado por um número negativo. Faça uma função que irá retornar para o programa
principal se o número é palíndromo ou não.
*/
int ehPalindromo(int n) {

    int original = n;
    int invertido  = 0;
    int resto;

    if (n >= 0 && n < 10) {
        return 1;
    }
    
    while (n > 0)
    {
        resto = n % 10;
        invertido = (invertido * 10) + resto;
        n = n / 10;
    }
    
    if (original == invertido)
    {
        return 1;
    } else {
        return 0;
    }
}


int main() {

    int num;

    do
    {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num < 0)
        {
            break;
        }
        

        if (ehPalindromo(num))
        {
            printf("É palindromo!\n");
        } else {
            printf("Não é palindromo!\n");
        }
        
    } while (num >= 0);
    
    return 0;
}