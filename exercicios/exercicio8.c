#include <stdio.h>

int main() {
    int vetor[] = {15, 3, 27, 8, 42, 11, 6, 33, 19, 50};
    int n = 10; 
    int chave, i, comparacoes = 0;
    int encontrado = 0;

    printf("Vetor: 15, 3, 27, 8, 42, 11, 6, 33, 19, 50\n");
    printf("Digite o numero a procurar: ");
    
    if (scanf("%d", &chave) != 1) {
        printf("Erro na leitura do numero.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        comparacoes++; 
        if (vetor[i] == chave) {
            printf("Elemento %d encontrado na posicao %d.\n", chave, i);
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado) {
        printf("Elemento %d nao encontrado.\n", chave);
    }

    printf("Total de comparacoes realizadas: %d\n", comparacoes);

    return 0;
}1