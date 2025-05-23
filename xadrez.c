#include <stdio.h>

// Número de casas para cada peça
#define TORRE_CASAS 3
#define BISPO_CASAS 2
#define RAINHA_CASAS 4
#define CAVALO_LINHAS 2
#define CAVALO_COLUNAS 3

// Torre: movimento recursivo para a direita
void torre(int num) {
    if (num > 0) {
        printf("Direita\n");
        torre(num - 1);
    }
}

// Bispo: recursivo + loops aninhados (vertical externo, horizontal interno)
void bispo(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int i = 0; i < horizontal; i++) {
            printf("Direita\n");
        }
        printf("Cima\n");
        bispo(vertical - 1, horizontal);
    }
}

// Rainha: movimento recursivo para a esquerda
void rainha(int num) {
    if (num > 0) {
        printf("Esquerda\n");
        rainha(num - 1);
    }
}

// Cavalo: loops aninhados, movimento em "L" (duas para cima, uma para direita)
void cavalo(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j) continue; // Exemplo de uso de continue
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            if (i + j > 3) break; // Exemplo de uso de break
        }
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    torre(TORRE_CASAS);
    printf("\n");

    printf("Movimentos do Bispo:\n");
    bispo(BISPO_CASAS, BISPO_CASAS);
    printf("\n");

    printf("Movimentos da Rainha:\n");
    rainha(RAINHA_CASAS);
    printf("\n");

    printf("Movimentos do Cavalo:\n");
    cavalo(CAVALO_LINHAS, CAVALO_COLUNAS);
    printf("\n");

    printf("Novo comit\n")
    return 0;
}
