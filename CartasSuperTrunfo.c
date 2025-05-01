#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1 , estado2;
    char carta1[4], carta2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    // Leitura dos dados da primeira carta
    printf("Digite o primeiro estado: "); //Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("(Uma letra de 'A' a 'H' (representando um dos oito estados))\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta do primeiro estado: ");
    printf("(A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos da cidade:");
    scanf("%d", &pontos1);
    printf("\n\n");

    // Leitura dos dados da segunda carta
    printf("Digite o segundo estado: "); //Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("(Uma letra de 'A' a 'H' (representando um dos oito estados))\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta do segundo estado: ");
    printf("(A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos da cidade:");
    scanf("%d", &pontos2);
    printf("\n\n");

    // Exibição das cartas
    printf("\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitante\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("\n\n");
    
    return 0;
}