#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 1. A mesma estrutura do Aluno
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

// 2. Nossa função Insertion Sort
void insertionSortAlunos(Aluno turma[], int n) {
    int i, j;
    Aluno chave; // A "carta" que estamos segurando na mão no momento

    // O loop começa do 1 (e não do 0), pois assumimos que o primeiro 
    // aluno (posição 0) já forma uma fila "ordenada" de 1 pessoa só.
    for (i = 1; i < n; i++) {
        chave = turma[i]; // Pegamos o aluno atual para encontrar o lugar dele
        j = i - 1;        // Começamos a olhar para os alunos que estão à ESQUERDA dele

        // O laço 'while' continua enquanto não chegarmos no início da fila (j >= 0)
        while (j >= 0) {
            bool deveEmpurrar = false; 

            // --- AVALIANDO AS REGRAS DA PROFESSORA ---
            // Vamos perguntar: "O aluno que estou olhando (j) é MAIOR que a minha chave?"

            // Regra 1: O aluno da fila tem NOTA MAIOR que a minha chave?
            if (turma[j].nota > chave.nota) {
                deveEmpurrar = true;
            }
            // Empate 1: Notas iguais?
            else if (turma[j].nota == chave.nota) {
                
                // Regra 2: O aluno da fila é MAIS VELHO?
                if (turma[j].idade > chave.idade) {
                    deveEmpurrar = true;
                }
                // Empate 2: Idades iguais?
                else if (turma[j].idade == chave.idade) {
                    
                    // Regra 3: O nome vem DEPOIS no alfabeto?
                    if (strcmp(turma[j].nome, chave.nome) > 0) {
                        deveEmpurrar = true;
                    }
                }
            }
            // --- FIM DAS REGRAS ---

            // Se decidirmos que o aluno da fila é "maior", empurramos ele para a direita
            if (deveEmpurrar == true) {
                turma[j + 1] = turma[j]; // Copia o aluno para a cadeira da direita
                j--; // Anda mais um passo para a esquerda para olhar o próximo aluno
            } else {
                // SE NÃO deve empurrar, significa que encontramos o lugar certo!
                // O aluno à esquerda é menor que a nossa chave. Podemos parar de procurar.
                break; 
            }
        }
        
        // Depois que abrimos o buraco (empurrando todos os maiores para a direita),
        // colocamos a nossa "carta" (a chave) na posição correta.
        turma[j + 1] = chave;
    }
}

// Testando o código
int main() {
    Aluno minhaTurma[] = {
        {"Carlos", 15, 7.5}, 
        {"Ana",    14, 7.5}, 
        {"Bruno",  14, 7.5}, 
        {"Zeca",   16, 5.0}, 
        {"Maria",  15, 9.0}  
    };
    int quantidade = 5;

    insertionSortAlunos(minhaTurma, quantidade);

    printf("Turma ordenada pelo Insertion Sort:\n");
    for(int i = 0; i < quantidade; i++) {
        printf("Nota: %.1f | Idade: %d | Nome: %s\n", 
               minhaTurma[i].nota, minhaTurma[i].idade, minhaTurma[i].nome);
    }

    return 0;
}