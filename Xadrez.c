#include <stdio.h>

void torre(int casas) {
    if (casas > 0){
        printf("Direita\n");
        torre(casas - 1);
    }
}

void bispo(int casas) {
    for (int i = 0; i < casas; i++){
        for(int j = 0; j < 1; j++){
            printf("Cima Direita\n");
        }
    }
}

void rainha(int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

int main(){
    int cavalo = 1;

    //movimentação torre, bispo, rainha atualizada
    printf("Torre:\n");
    torre(5);

    printf(" \n");
    printf("Bispo:\n");
    bispo(5);
    
    printf(" \n");
    printf("Rainha:\n");
    rainha(8);

    //movimentação cavalo
    printf(" \n");
    printf("Cavalo:\n");
    while(cavalo--){
        for(int i = 1; i <= 2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}