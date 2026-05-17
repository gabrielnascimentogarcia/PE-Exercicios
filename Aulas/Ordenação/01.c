#include <stdio.h>
#include <string.h>  // Necessário para usar o strcmp()
#include <stdbool.h> // Necessário para usar true e false

/*
Temos uma turma, cada aluno dessa turma tem seu nome, idade e nota, todas guardados em um struct, a professora quer ordenar esses alunos da menor nota ate a maior, mas pode ter empate, caso empata, o criterio de desempate é a idade e caso empate de novo, o criterio é ordem alfabetica.
*/

// 1. Criando a estrutura (Struct) do Aluno
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

// 2. A nossa função Bubble Sort adaptada
void bubbleSortAlunos(Aluno turma[], int n) {
    int i, j;
    Aluno temp; // AQUI ESTÁ O SEGREDO 1: O "copo vazio" agora é do tipo Aluno!

    // O for de FORA (As rodadas)
    for (i = 0; i < n - 1; i++) {
        
        // O for de DENTRO (Comparando os vizinhos)
        for (j = 0; j < n - 1; j++) {
            
            bool deveTrocar = false; // Começamos assumindo que não precisa trocar

            // --- AVALIANDO AS REGRAS DA PROFESSORA ---

            // Regra 1 (Principal): O vizinho da esquerda tem NOTA MAIOR?
            if (turma[j].nota > turma[j + 1].nota) {
                deveTrocar = true;
            }
            // Empate 1: As notas são IGUAIS? Vamos olhar a idade!
            else if (turma[j].nota == turma[j + 1].nota) {
                
                // Regra 2: O vizinho da esquerda é MAIS VELHO?
                if (turma[j].idade > turma[j + 1].idade) {
                    deveTrocar = true;
                }
                // Empate 2: Notas e Idades são IGUAIS? Vamos olhar o nome!
                else if (turma[j].idade == turma[j + 1].idade) {
                    
                    // Regra 3: O nome da esquerda vem DEPOIS no alfabeto?
                    if (strcmp(turma[j].nome, turma[j + 1].nome) > 0) {
                        deveTrocar = true;
                    }
                }
            }

            // --- FIM DAS REGRAS ---

            // Se depois de analisar tudo, decidimos que deve trocar, 
            // fazemos a mágica dos 3 copos!
            if (deveTrocar == true) {
                temp = turma[j];           // O aluno inteiro vai para o temp
                turma[j] = turma[j + 1];   // O vizinho da direita vem para a esquerda
                turma[j + 1] = temp;       // O aluno que estava no temp vai para a direita
            }
        }
    }
}

// Função rápida para testar se funcionou
int main() {
    // Criando uma turma bagunçada propositalmente para testar os empates
    Aluno minhaTurma[] = {
        {"Carlos", 15, 7.5}, // Nota 7.5
        {"Ana",    14, 7.5}, // Nota 7.5 (Empate na nota, perde na idade para o Bruno)
        {"Bruno",  14, 7.5}, // Nota 7.5 (Empate na nota e idade com Ana, perde no alfabeto)
        {"Zeca",   16, 5.0}, // Menor nota
        {"Maria",  15, 9.0}  // Maior nota
    };
    
    int quantidade = 5;

    // Chamando nosso Bubble Sort
    bubbleSortAlunos(minhaTurma, quantidade);

    // Imprimindo o resultado
    printf("Turma ordenada:\n");
    for(int i = 0; i < quantidade; i++) {
        printf("Nota: %.1f | Idade: %d | Nome: %s\n", 
               minhaTurma[i].nota, minhaTurma[i].idade, minhaTurma[i].nome);
    }

    return 0;
}