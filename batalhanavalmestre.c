#include <stdio.h>

#define tamanho 10
#define H 5   // tamanho da habilidade

// Função para habilidade
void aplicarHabilidade(int tabuleiro[tamanho][tamanho], int habilidade[H][H], int origemLinha, int origemColuna) {

    int centro = H / 2;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {

            if (habilidade[i][j] == 1) {

                int linhaTab = origemLinha + (i - centro);
                int colunaTab = origemColuna + (j - centro);

                if (linhaTab >= 0 && linhaTab < tamanho &&
                    colunaTab >= 0 && colunaTab < tamanho &&
                    tabuleiro[linhaTab][colunaTab] == 0) {

                    tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }
    }
}

int main() {

    int tabuleiro[tamanho][tamanho] = {0};

    //Navios exemplo
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[8][6] = 3;

    //Matrizes de habilidade 
    int cone[H][H] = {0};
    int cruz[H][H] = {0};
    int octaedro[H][H] = {0};

    int centro = H / 2;

    // Construir CONE
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (j >= centro - i && j <= centro + i) {
                cone[i][j] = 1;
            }
        }
    }

    // Construir CRUZ
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (i == centro || j == centro) {
                cruz[i][j] = 1;
            }
        }
    }

    // Construir losango
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;
            }
        }
    }

    // habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 1, 1);
    aplicarHabilidade(tabuleiro, cruz, 5, 5);
    aplicarHabilidade(tabuleiro, octaedro, 8, 2);

    // Tabuleiro
    printf("\nTABULEIRO COM HABILIDADES\n\n");

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {

            if (tabuleiro[i][j] == 0)
                printf("~ ");   // Água
            else if (tabuleiro[i][j] == 3)
                printf("N ");   // Navio
            else if (tabuleiro[i][j] == 5)
                printf("* ");   // Área da habilidade
        }
        printf("\n");
    }

    return 0;
}