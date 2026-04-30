#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

int main() {
    Aluno turma[100]; // Capacidade para até 100 alunos
    int totalAlunos = 0;
    char continuar;

    // 1. Entrada de dados dinâmica
    do {
        printf("\n--- Inserir Aluno %d ---\n", totalAlunos + 1);
        printf("Nome: ");
        scanf(" %s", turma[totalAlunos].nome); // %[^\n] se quiser nomes com espaços
        printf("Media: ");
        scanf("%f", &turma[totalAlunos].media);

        totalAlunos++;

        printf("Deseja adicionar mais um aluno? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // 2. Mostrar Aluno com melhor desempenho[cite: 10]
    int indiceMelhor = 0;
    for (int i = 1; i < totalAlunos; i++) {
        if (turma[i].media > turma[indiceMelhor].media) {
            indiceMelhor = i;
        }
    }

    printf("\n=== RESULTADOS ===\n");
    printf("Total de alunos: %d\n", totalAlunos);
    printf("Melhor desempenho: %s com media %.1f\n", 
            turma[indiceMelhor].nome, turma[indiceMelhor].media);

    // 3. Busca por nome[cite: 10]
    char busca[50];
    printf("\nDigite um nome para buscar na turma: ");
    scanf("%s", busca);

    int achou = 0;
    for (int i = 0; i < totalAlunos; i++) {
        if (strcmp(turma[i].nome, busca) == 0) {
            printf("Aluno %s encontrado! Posicao: %d, Media: %.1f\n", 
                    turma[i].nome, i, turma[i].media);
            achou = 1;
        }
    }
    if (!achou) printf("Aluno nao encontrado.\n");

    return 0;
}