#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

void moverBispoRec(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRec(casas - 1);
}

void moverBispoLoop(int casas) {
    for (int v = 0; v < casas; v++) {      // movimento vertical
        for (int h = 0; h < casas; h++) {  // movimento horizontal
            if (v == h) { 
                printf("Cima, Direita\n");
            }
        }
    }
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        int passosCima = 0;
        int passosDireita = 0;

        // duas casas para cima
        while (passosCima < 2) {
            printf("Cima\n");
            passosCima++;
        }

        // uma casa para direita
        while (passosDireita < 1) {
            printf("Direita\n");
            passosDireita++;
        }

        // controle de fluxo
        if (i == movimentos - 1) {
            break; // encerra no último movimento
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("TORRE MOVE-SE:\n");
    moverTorre(casasTorre);

    printf("\nBISPO MOVE-SE:\n");
    moverBispoRec(casasBispo);

    printf("\nBISPO MOVE-SE:\n");
    moverBispoLoop(casasBispo);

    printf("\nRAINHA MOVE-SE:\n");
    moverRainha(casasRainha);

    printf("\nCAVALO MOVE-SE:\n");
    moverCavalo(movimentosCavalo);

}
