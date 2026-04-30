#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    // Inicialização direta para evitar strcpy e <string.h>
    struct Aluno a1 = {"Joana Uelemo", 20, 14.5};

    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("Media: %.1f\n", a1.media);

    return 0;
}