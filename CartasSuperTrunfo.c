#include <stdio.h>

//Definiçao das funções fora da funçao MAIN
float densidade(int hab, float area) //funçao densidade populacional
{
    float resultado1;
    resultado1 = (float) hab / area;
}

float PIB(float pib, float hab) //funçao PIB per capita
{
    float resultado2;
    resultado2 = (float) ((pib * 1e9) / hab);
}
int main() {
    // Declaração das variáveis
    char estado1 , estado2;
    char carta1[4], carta2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    
    //Leitura dos dados da primeira carta
    printf("Digite o primeiro estado: ");
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
    printf("Digite o segundo estado: ");
    printf("(Uma letra de 'A' a 'H' (representando um dos oito estados))\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta do segundo estado: ");
    printf("(A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de R$): ");
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
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhão(ões) de Reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    float densidade1 = densidade(populacao1, area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    float PIB1 = PIB(pib1 , populacao1); 
    printf("PIB per Capita: R$ %.2f /hab \n", PIB1);
    printf("\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhão(ões) de Reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    float densidade2 = densidade(populacao2, area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    float PIB2 = PIB(pib2 , populacao2);
    printf("PIB per Capita: R$ %.2f /hab \n", PIB2);
    printf("\n\n");
    
    return 0;
}