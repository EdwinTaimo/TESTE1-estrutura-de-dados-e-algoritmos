#include <stdio.h>

int buscaRecursiva(int v[], int ini, int fim, int chave) {
    if (ini > fim) return -1; // Não encontrado

    int meio = (ini + fim) / 2;

    if (v[meio] == chave) return meio;
    if (v[meio] > chave) return buscaRecursiva(v, ini, meio - 1, chave);
    return buscaRecursiva(v, meio + 1, fim, chave);
}

int main() {
    int v[] = {10, 20, 30, 40, 50};
    int pos = buscaRecursiva(v, 0, 4, 30);
    printf("Posicao: %d\n", pos);
    return 0;
}