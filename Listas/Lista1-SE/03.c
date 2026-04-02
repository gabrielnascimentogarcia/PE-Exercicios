#include <stdio.h>

/*
3. Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo
as regras:
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Máster: A partir de 18 anos
*/

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade <= 4) {
        printf("Categoria: Baby\n");
    } else if (idade <= 10) {
        printf("Categoria: Infantil\n");
    } else if (idade <= 17) {
        printf("Categoria: Juvenil\n");
    } else {
        printf("Categoria: Master\n");
    }

    return 0;
}
