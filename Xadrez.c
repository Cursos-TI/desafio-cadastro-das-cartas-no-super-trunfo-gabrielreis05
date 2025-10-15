#include <stdio.h>

int main(){
    int torre = 1, bispo = 1, rainha;

    printf("Torre:\n");
    while (torre <=5){
        printf("Direita\n");
        torre++;
    }

    printf(" \n");
    printf("Bispo:\n");
    do {
        printf("Cima Direita\n");
        bispo++;
    } while(bispo <= 5);

    printf(" \n");
    printf("Rainha:\n");
    for(rainha = 1; rainha <= 8; rainha++){
        printf("Esquerda\n");
    }


    return 0;
}