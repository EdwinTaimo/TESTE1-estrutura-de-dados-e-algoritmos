#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float media;
} Aluno;

int main() {
    Aluno a1 = {"Joana", 20, 14.5}, a2 = {"Leyla", 21, 16.0}, a3 = {"Dercio", 22, 12.5};

    printf("Nome: %s | Idade: %d | Media: %.1f\n", a1.nome, a1.idade, a1.media);
    printf("Nome: %s | Idade: %d | Media: %.1f\n", a2.nome, a2.idade, a2.media);
    printf("Nome: %s | Idade: %d | Media: %.1f\n", a3.nome, a3.idade, a3.media);

    return 0;
}