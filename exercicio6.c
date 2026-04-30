#include <stdio.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

int main() {
    Aluno t[3] = {{"Joana", 14.5}, {"Dercio", 12.5}, {"Leyla", 16.0}};
    Aluno temp;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (t[j].media > t[j+1].media) {
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) printf("%s: %.1f\n", t[i].nome, t[i].media);
    return 0;
}