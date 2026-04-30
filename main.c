#include <stdio.h>

// Protótipos das funções
void bubbleSort(int v[], int n);
void bubbleSortOtimizado(int v[], int n);

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
}

int main() {
    int vetor1[] = {5, 1, 4, 2, 8};
    int vetor2[] = {1, 2, 3, 5, 4}; // Quase ordenado para testar o otimizado
    int n = 5;

    printf("Vetor 1 original: "); imprimirVetor(vetor1, n);
    bubbleSort(vetor1, n);
    printf("Vetor 1 ordenado: "); imprimirVetor(vetor1, n);

    printf("\nVetor 2 original: "); imprimirVetor(vetor2, n);
    bubbleSortOtimizado(vetor2, n);
    printf("Vetor 2 ordenado: "); imprimirVetor(vetor2, n);

    return 0;
}
