#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float media;
} Aluno;

int main() {
    Aluno turma[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Nome: "); scanf("%s", turma[i].nome);
        printf("Idade: "); scanf("%d", &turma[i].idade);
        printf("Media: "); scanf("%f", &turma[i].media);
    }

    printf("\nLISTA:\n");
    for (i = 0; i < 5; i++) {
        printf("%s - %d anos - Media: %.1f\n", turma[i].nome, turma[i].idade, turma[i].media);
    }
    return 0;
}