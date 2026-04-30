#include <stdio.h>

int main() {
    int v[] = {3, 8, 11, 15, 27}, inicio = 0, fim = 4, meio, chave;
    
    printf("Buscar: "); scanf("%d", &chave);

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (v[meio] == chave) {
            printf("Encontrado no indice %d\n", meio);
            return 0;
        }
        if (v[meio] < chave) inicio = meio + 1;
        else fim = meio - 1;
    }

    printf("Nao encontrado\n");
    return 0;
}