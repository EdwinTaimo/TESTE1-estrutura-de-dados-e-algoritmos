#include <stdio.h>

int main() {
    int vetor[] = {15, 3, 27, 8, 42}; // Vetor de inteiros
    int chave, i, posicao = -1;

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &chave);

    // Percorre o vetor elemento por elemento
    for (i = 0; i < 5; i++) {
        if (vetor[i] == chave) {
            posicao = i; // Guarda a posição se encontrar[cite: 10]
            break;       // Para o loop assim que encontrar
        }
    }

    if (posicao != -1) {
        printf("Numero encontrado na posicao %d.\n", posicao);
    } else {
        printf("Numero nao encontrado.\n");
    }

    return 0;
}