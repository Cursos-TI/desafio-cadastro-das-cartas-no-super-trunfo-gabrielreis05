#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2, escolha;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcap1, pibcap2, superpoder1, superpoder2;
    char estado1[4], estado2[4], cidade1[50], cidade2[50], codigo1[4], codigo2[4];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Cadastro Carta 1 *** \n");

    printf("Insira o Estado da carta 1: ");
    scanf("%s", &estado1);

    printf("Insira o código da cidade 1: ");
    scanf("%s", &codigo1);

    printf("Insira o nome da carta 1: ");
    scanf(" %[^\n]", &cidade1);

    printf("Insira a população da cidade 1: ");
    scanf("%lu", &populacao1);

    printf("Insira a área da cidade 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    printf("*** Cadastro Carta 2 *** \n");

    printf("Insira o Estado da carta 2: ");
    scanf("%s", &estado2);

    printf("Insira o código da cidade 2: ");
    scanf("%s", &codigo2);

    printf("Insira o nome da carta 2: ");
    scanf(" %[^\n]", &cidade2);

    printf("Insira a população da cidade 2: ");
    scanf("%lu", &populacao2);

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
    printf("População: %lu \n", populacao1); 
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    densidade1 = (float)populacao1 / area1;

    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);

    pibcap1 = (pib1 * 1000000000) / (float)populacao1;

    printf("PIB per Capita: %.2f reais \n", pibcap1);

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + (1 / densidade1) + pibcap1;

    printf("Super Poder: %.2f \n", superpoder1);

    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    densidade2 = (float)populacao2 / area2;
    
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    
    pibcap2 = (pib2 * 1000000000) / (float)populacao2;

    printf("PIB per Capita: %.2f reais \n", pibcap2);

    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1 / densidade2) + pibcap2;

    printf("Super Poder: %.2f \n", superpoder2);

    printf("\n");
    printf("*** Comparação das Cartas *** \n");
    printf("Escolha uma das opções abaixo! \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Poder \n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
        printf("*População* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%lu ---- %lu \n", populacao1, populacao2);
        break;
        case 2:
        printf("*Área* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%.2f ---- %.2f \n", area1, area2);
        break;
        case 3:
        printf("*PIB* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%.2f ---- %.2f \n", pib1, pib2);
        break;
        case 4:
        printf("*Pontos Turísticos* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%d ---- %d \n");
        break;
        case 5:
        printf("*Densidade Populacional* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%.2f ---- %.2f \n", densidade1, densidade2);
        break;
        case 6:
        printf("*PIB per Capita* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%.2f ---- %.2f \n", pibcap1, pibcap2);
        break;
        case 7:
        printf("*Super Poder* \n");
        printf("%s ---- %s \n", cidade1, cidade2);
        printf("%.2f ---- %.2f \n", superpoder1, superpoder2);
        break;
        default:
        printf("Opção inválida! \n");
    }

    if ((populacao1 == populacao2) || (area1 == area2) || (pib1 == pib2) || (pontosturisticos1 == pontosturisticos2) || (densidade1 == densidade2) || (pibcap1 == pibcap2) || (superpoder1 == superpoder2)) {
        printf("Empate! \n");
    } else if((populacao1 > populacao2) || (area1 > area2) || (pib1 > pib2) || (pontosturisticos1 > pontosturisticos2) || (densidade1 < densidade2) || (pibcap1 > pibcap2) || (superpoder1 > superpoder2)) {
        printf("Carta 1 (%s) venceu!!! \n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!!! \n", cidade2);
    }

    return 0;
}