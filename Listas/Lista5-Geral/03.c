#include <stdio.h>

/*
Escreva um programa para o seguinte problema: determinar se uma palavra A ocorre dentro de uma cadeia de
caracteres B, mesmo que de forma não contígua. Fazer uma função que retorne 1 se A ocorrer dentro de B e zero,
caso contrário. Exemplo:
A = "lanterna"
B = "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença."
Resposta: A ocorre dentro de B:
    No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença.
*/

int ocorreCadeia(char *a, char *b) {

    while (*a != '\0' && *b != '\0')
    {
        if (*a == *b)
        {
            a++;
        }
        b++;
    }
    return(*a == '\0');
}

int main() {

    char palavra[40];
    char frase[200];

    printf("Digite a palavra A: ");
    scanf(" %[^\n]s", palavra);
    printf("Frase B: ");
    scanf(" %[^\n]s", frase);

    if (ocorreCadeia(palavra, frase))
    {
        printf("A ocorre em B!\n");
    } else {
        printf("A não ocorre em B!\n");
    }

    return 0;
}