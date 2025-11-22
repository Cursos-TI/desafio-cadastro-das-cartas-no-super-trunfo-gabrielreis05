#include <stdio.h>

int main(){

    int linha = 10, coluna = 11;
    int tabuleiro [linha][coluna];
    char colunaLetra [11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tamanhonavio = 3;

    for (int coluna = 0; coluna < 11; coluna++) {
        printf("  %c", colunaLetra[coluna]);
    }

    printf(" \n");

    for (int l = 0; l < linha; l++){
        for (int c = 0; c < coluna; c++){
            if (c == 0) {
                tabuleiro[l][c] = l + 1;
            } else {
                tabuleiro[l][c] = 0;
            }
        }
    }
    
    int navio1_linha = 2;
    int navio1_coluna_inicio = 2; 
    for (int i = 0; i < tamanhonavio; i++) {
        tabuleiro[navio1_linha][navio1_coluna_inicio + i] = 3;
    }

    int navio2_linha_inicio = 6;
    int navio2_coluna = 8;
    for (int i = 0; i < tamanhonavio; i++) {
        tabuleiro[navio2_linha_inicio + i][navio2_coluna] = 3;
    }

    int navio4_linha_inicio = 5;
    int navio4_coluna = 3;
    for (int i = 0; i < tamanhonavio; i++){
        tabuleiro[navio4_linha_inicio + i][navio4_coluna + i] = 3;
    }

    int navio5_linha_inicio = 1;
    int navio5_coluna = 9;
    for (int i = 0; i < tamanhonavio; i++){
        tabuleiro[navio5_linha_inicio + i][navio5_coluna - i] = 3;
    }

    for (int l = 0; l < linha; l++){
        for (int c = 0; c < coluna; c++){
            printf("%3d", tabuleiro[l][c]);
    
        }
        printf(" \n");
    }

    return 0;
}