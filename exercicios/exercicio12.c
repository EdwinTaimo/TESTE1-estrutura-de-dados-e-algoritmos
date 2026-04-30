#include <stdio.h>

int main() {
    int vetor[1000];
    int n = 1000;
    int chave, i;
    int passosLinear = 0, passosBinaria = 0;

    // Preenchendo o vetor de forma ordenada (0, 1, 2, ..., 999)
    for (i = 0; i < n; i++) {
        vetor[i] = i;
    }

    printf("=== COMPARACAO EXPERIMENTAL (1000 elementos) ===\n");
    printf("Digite um numero entre 0 e 999 para buscar: ");
    scanf("%d", &chave);

    // 1. Executando a Busca Linear
    for (i = 0; i < n; i++) {
        passosLinear++;
        if (vetor[i] == chave) {
            break; // Encontrou
        }
    }

    // 2. Executando a Busca Binaria
    int inicio = 0, fim = n - 1, meio;
    while (inicio <= fim) {
        passosBinaria++;
        meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            break; // Encontrou
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    // Exibicao dos resultados comparativos
    printf("\nRESULTADOS PARA O NUMERO %d:\n", chave);
    printf("--------------------------------------\n");
    printf("Busca Linear:  %d comparacoes (passos)\n", passosLinear);
    printf("Busca Binaria: %d comparacoes (passos)\n", passosBinaria);
    printf("--------------------------------------\n");

    return 0;
}