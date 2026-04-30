#include <stdio.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

void verificar(Aluno a) {
    if (a.media >= 10) printf("%s: APROVADO\n", a.nome);
    else printf("%s: REPROVADO\n", a.nome);
}

int main() {
    Aluno lista[2] = {{"Joana", 14.5}, {"Edwin", 9.5}};
    verificar(lista[0]);
    verificar(lista[1]);
    return 0;
}