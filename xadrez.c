#include <stdio.h>

int main() {
    printf("Desafio Xadrez!/n");
    // Torre (for)
    printf("Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Movendo para a direita. Passo %d\n", i);
    }
    printf("\n");

    // Bispo (while)
    printf("Bispo:\n");
    int passo = 1;
    while (passo <= 5) {
        printf("Movendo para cima e direita. Passo %d\n", passo);
        passo++;
    }
    printf("\n");

    // Rainha (do-while)
    printf("Rainha:\n");
    passo = 1;
    do {
        printf("Movendo para a esquerda. Passo %d\n", passo);
        passo++;
    } while (passo <= 8);
    printf("\n");

    return 0;
}