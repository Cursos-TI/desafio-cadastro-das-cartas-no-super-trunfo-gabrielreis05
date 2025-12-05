#include <stdio.h>
#include <stdlib.h>

#define linha 10
#define coluna 11

 int criarCone (int cone[5][5]){
        int centro = 2;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j <5; j++){
                if (j >= centro - i && j <= centro + i && i < 3){
                    cone[i][j] = 1;
                } else {
                    cone[i][j] = 0;
                }
            }
        }
        return 0;
    }

    int criarCruz (int cruz[5][5]){
        int centro = 2;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j <5; j++){
                if (i == centro || j == centro ){
                    cruz[i][j] = 1;
                } else {
                    cruz[i][j] = 0;
                }
            }
        }
        return 0;
    }

    int criarLosango (int losango[5][5]){
        int centro = 2;
        int raio = 2;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j <5; j++){
                if (abs(i - centro) + abs(j - centro) <= raio){
                    losango[i][j] = 1;
                } else {
                    losango[i][j] = 0;
                }
            }
        }
        return 0;
    }

    int usarHabilidade(int habilidade[5][5], int tabuleiro[linha][coluna], int origemX, int origemY){

    int centro = 2;    
    for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (habilidade[i][j] == 1){
                    int tabLinha = origemX + (i - centro);
                    int tabColuna = origemY + (j - centro);
                }
            }
        }
    }   

int main(){

    int tabuleiro [linha][coluna];
    char colunaLetra [11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tamanhonavio = 3;

    for (int i = 0; i < coluna; i++) {
        printf("  %c", colunaLetra[i]);
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

    int matrizCone[5][5];
    criarCone(matrizCone);
    usarHabilidade(matrizCone, tabuleiro, 5 ,5);

    int matrizCruz[5][5];
    criarCruz(matrizCruz);
    usarHabilidade(matrizCruz, tabuleiro, 2 ,7);

    int matrizLosango[5][5];
    criarLosango(matrizLosango);
    usarHabilidade(matrizLosango, tabuleiro, 8 ,3);


    for (int l = 0; l < linha; l++){
        for (int c = 0; c < coluna; c++){
            printf("%3d", tabuleiro[l][c]);
    
        }
        printf(" \n");
    }

    return 0;
}