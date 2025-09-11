#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int população1, população2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcap1, pibcap2;
    char estado1[50], estado2[50], cidade1[50], cidade2[50], codigo1[4], codigo2[4];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o Estado da carta 1: ");
    scanf("%s", &estado1);

    printf("Insira o código da cidade 1: ");
    scanf("%s", &codigo1);

    printf("Insira o nome da carta 1: ");
    scanf("%s", &cidade1);

    printf("Insira a população da cidade 1: ");
    scanf("%d", &população1);

    printf("Insira a área da cidade 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    printf("Insira o Estado da carta 2: ");
    scanf("%s", &estado2);

    printf("Insira o código da cidade 2: ");
    scanf("%s", &codigo2);

    printf("Insira o nome da carta 2: ");
    scanf("%s", &cidade2);

    printf("Insira a população da cidade 2: ");
    scanf("%d", &população2);

    printf("Insira a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", população1); 
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    densidade1 = população1 / area1;

    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);

    pibcap1 = pib1 / população1;

    printf("PIB per Capita: %f reais \n", pibcap1);

    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", população2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    densidade2 = população2 / area2;
    
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    
    pibcap2 = pib2 / população2;

    printf("PIB per Capita: %f reais \n", pibcap2);

    return 0;
}