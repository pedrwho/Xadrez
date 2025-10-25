#include <stdio.h>

void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

void moverBispoDiagonal(int casas) {
    if (casas <= 0) return;
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {
                printf("Diagonal (Cima + Direita)\n");
            }
        }
    }
    moverBispoDiagonal(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Movimentos da Torre (Rainha):\n");
    moverTorreCima(casas);
    moverTorreDireita(casas);
    printf("Movimentos do Bispo (Rainha):\n");
    moverBispoDiagonal(casas - 1);
    moverRainha(casas - 1);
}

void moverCavalo(void) {
    int movimentosVertical = 2;
    int movimentosHorizontal = 1;
    printf("Movimentos do Cavalo:\n");
    for (int i = 0; i < movimentosVertical; i++) {
        printf("Cima (%d)\n", i + 1);
        for (int j = 0; j < movimentosHorizontal + 1; j++) {
            if (j == 0) continue;
            printf("Direita (%d)\n", j);
            break;
        }
    }
}

int main(void) {
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 2;

    printf("=== MOVIMENTOS DAS PEÇAS ===\n\n");

    printf("Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("Bispo:\n");
    moverBispoDiagonal(casasBispo);
    printf("\n");

    printf("Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    moverCavalo();
    printf("\n");

    printf("=== Fim da Simulação ===\n");

    return 0;
}
