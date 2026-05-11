#include <stdio.h>

/*
Sabendo que o último caractere de uma string é ‘\0’, faça um programa que escreva a quantidade de caracteres desta
string. Crie uma função recursiva que retorne esta quantidade de caracteres. Não é permitido o uso da função strlen.
*/

int calculaCaracteres(char *palavra) {
    
    if (*palavra == '\0')
    {
        return 0;
    }
    
    return 1 + calculaCaracteres(palavra + 1);
}

int main() {

    char palavra[40];

    printf("Digite a palavra: ");
    scanf(" %[^\n]s", palavra);

    printf("A palavra %s tem %d caracteres!\n", palavra, calculaCaracteres(palavra));

    return 0;
}