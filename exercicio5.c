#include <stdio.h>

typedef struct {
    char nome[30];
    float preco;
    int qtd;
} Produto;

int main() {
    Produto estoque[3] = {{"Caderno", 50.0, 10}, {"Caneta", 5.5, 20}, {"Regua", 10.0, 5}};
    float total = 0;

    for (int i = 0; i < 3; i++) {
        float sub = estoque[i].preco * estoque[i].qtd;
        total += sub;
        printf("%s: %.2f MT\n", estoque[i].nome, sub);
    }
    printf("Total Geral: %.2f MT\n", total);
    return 0;
}