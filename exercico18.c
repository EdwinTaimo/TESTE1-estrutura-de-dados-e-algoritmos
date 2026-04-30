#include <stdio.h>

int main() {
    int v[] = {1, 2, 3, 5, 4}; // Vetor quase ordenado
    int n = 5;
    int i, j, temp, trocou;

    for (i = 0; i < n - 1; i++) {
        trocou = 0; // No início de cada volta, assume que não haverá troca

        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocou = 1; // Se houve uma troca, marca como 1[cite: 10]
            }
        }

        // Se após percorrer o vetor 'trocou' continuar 0, o vetor está pronto[cite: 10]
        if (trocou == 0) {
            printf("Otimizacao: Parando na volta %d porque ja esta ordenado.\n", i + 1);
            break; 
        }
    }

    printf("Vetor ordenado (Otimizado): ");
    for (i = 0; i < n; i++) printf("%d ", v[i]);

    return 0;
}