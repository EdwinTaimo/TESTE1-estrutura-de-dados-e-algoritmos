#include <stdio.h>

int main() {
    int v[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    int i, j, temp;

    // Algoritmo Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                // Troca os elementos de lugar
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado (Simples): ");
    for (i = 0; i < n; i++) printf("%d ", v[i]);
    
    return 0;
}