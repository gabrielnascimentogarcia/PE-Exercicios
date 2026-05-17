#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

// --- A REGRA DA PROFESSORA ISOLADA AQUI ---
// Retorna 'true' se o Aluno A deve vir ANTES do Aluno B na fila
bool deveFicarAntes(Aluno a, Aluno b) {
    // Regra 1: Nota menor vem antes
    if (a.nota < b.nota) return true;
    if (a.nota > b.nota) return false;

    // Empate 1: Notas iguais. Regra 2: Mais velho vem antes (idade MAIOR)
    if (a.idade > b.idade) return true;
    if (a.idade < b.idade) return false;

    // Empate 2: Idades iguais. Regra 3: Ordem alfabética (nome vem ANTES no dicionário)
    if (strcmp(a.nome, b.nome) < 0) return true;
    
    return false; // Se for tudo idêntico, tanto faz
}

// Função auxiliar para trocar dois alunos de lugar (usando ponteiros)
void trocar(Aluno *a, Aluno *b) {
    Aluno temp = *a;
    *a = *b;
    *b = temp;
}

// --- O CORAÇÃO DO QUICKSORT: A DIVISÃO DA TURMA ---
int particiona(Aluno turma[], int inicio, int fim) {
    // Escolhemos o último aluno como nosso "Pivô" (Referência)
    Aluno pivo = turma[fim]; 
    
    // 'i' vai rastrear onde a "parede" dos alunos menores que o pivô termina
    int i = (inicio - 1); 

    // Vamos analisar todos os alunos, do primeiro até o penúltimo
    for (int j = inicio; j < fim; j++) {
        
        // Perguntamos à nossa regra: Esse aluno deve vir ANTES do pivô?
        if (deveFicarAntes(turma[j], pivo)) {
            i++; // Se sim, aumentamos o espaço da esquerda
            trocar(&turma[i], &turma[j]); // Jogamos ele para a esquerda da "parede"
        }
    }
    
    // No final, colocamos o pivô exatamente no meio dos dois grupos
    trocar(&turma[i + 1], &turma[fim]);
    
    // Retornamos a posição exata onde o pivô ficou (ele já está no lugar certo!)
    return (i + 1); 
}

// --- A FUNÇÃO PRINCIPAL DO QUICKSORT ---
void quickSortAlunos(Aluno turma[], int inicio, int fim) {
    if (inicio < fim) {
        // 1. Divide a turma e encontra a posição final do aluno referência (pivô)
        int posicaoPivo = particiona(turma, inicio, fim);

        // 2. Chama a si mesma para organizar o grupo da ESQUERDA do pivô
        quickSortAlunos(turma, inicio, posicaoPivo - 1);

        // 3. Chama a si mesma para organizar o grupo da DIREITA do pivô
        quickSortAlunos(turma, posicaoPivo + 1, fim);
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

    // CUIDADO: O Quick Sort pede o índice inicial (0) e o índice final (quantidade - 1)
    quickSortAlunos(minhaTurma, 0, quantidade - 1);

    printf("Turma ordenada pelo Quick Sort:\n");
    for(int i = 0; i < quantidade; i++) {
        printf("Nota: %.1f | Idade: %d | Nome: %s\n", 
               minhaTurma[i].nota, minhaTurma[i].idade, minhaTurma[i].nome);
    }

    return 0;
}