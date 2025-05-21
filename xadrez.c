#include <stdio.h>

int main() {
    
     // TORRE - Movimenta 5 casas para a direita usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO - Movimenta 5 casas na diagonal (cima e direita) usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // RAINHA - Movimenta 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
