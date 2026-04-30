#include <stdio.h>
#include <stdlib.h> // Necessária para gerar números aleatórios
#include <time.h>   // Necessária para a semente do tempo

int main() {
    int n, i, j, temp;
    int v1[100], v2[100];
    int trocasBubble = 0, trocasSelection = 0;

    printf("Quantos números quer gerar no vetor? ");
    scanf("%d", &n);

    // Gerar vetor aleatório e copiar para dois vetores iguais
    srand(time(NULL)); // Semente para números sempre diferentes
    for (i = 0; i < n; i++) {
        v1[i] = rand() % 100; // Gera números de 0 a 99
        v2[i] = v1[i];        // Copia para o segundo vetor
    }

    // 1. Bubble Sort com contagem de trocas
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v1[j] > v1[j + 1]) {
                temp = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = temp;
                trocasBubble++; // Conta a troca
            }
        }
    }

    // 2. Selection Sort com contagem de trocas[cite: 10]
    for (i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (v2[j] < v2[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = v2[i];
            v2[i] = v2[min];
            v2[min] = temp;
            trocasSelection++; // Conta a troca[cite: 10]
        }
    }

    // Exibir resultados[cite: 10]
    printf("\n--- RESULTADO DA ORDENAÇÃO ---");
    printf("\nTrocas no Bubble Sort:    %d", trocasBubble);
    printf("\nTrocas no Selection Sort: %d", trocasSelection);
    printf("\n------------------------------\n");

    return 0;
}