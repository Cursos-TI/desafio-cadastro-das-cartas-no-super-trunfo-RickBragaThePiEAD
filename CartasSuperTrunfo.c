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
    resultado2 = (float) ((pib) / hab);
}

float superpoder(int hab, float area, float pib, int pontos, float resultado1, float resultado2) //funçao superpoder
{
    float resultado3;
    resultado3 = (float) (hab + area + pib + pontos + resultado2 + (1 / resultado1));
}

int main() {
    
    // Declaração das variáveis para a carta 1
    char estado1;
    char carta1[4], cidade1[50];
    int pontos1;
    unsigned long int populacao1;
    unsigned long int pib1;
    float area1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char carta2[4], cidade2[50];
    int pontos2;
    unsigned long int populacao2;
    unsigned long int pib2;
    float area2;

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
    scanf("%lu", &populacao1);
    //printf("Digite a área da cidade: ");
    //scanf("%f", &area1);
    //printf("Digite o PIB da cidade: ");
    //scanf("%lu", &pib1);
    //printf("Digite os pontos turísticos da cidade:");
    //scanf("%d", &pontos1);
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
    scanf("%lu", &populacao2);
    //printf("Digite a área da cidade (em km²): ");
    //scanf("%f", &area2);
    //printf("Digite o PIB da cidade (em bilhões de R$): ");
    //scanf("%lu", &pib2);
    //printf("Digite os pontos turísticos da cidade:");
    //scanf("%d", &pontos2);
    //printf("\n\n");

    // Exibição das cartas
    printf("\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    //printf("Área: %.2f km²\n", area1);
    //printf("PIB: R$ %lu\n", pib1);
    //printf("Pontos turísticos: %d\n", pontos1);
    //float densidade1 = densidade(populacao1, area1);
    //printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    //float PIB1 = PIB(pib1 , populacao1); 
    //printf("PIB per Capita: R$ %.2f /hab \n", PIB1);
    printf("\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    //printf("Área: %.2f km²\n", area2);
    //printf("PIB: R$ %lu\n", pib2);
    //printf("Pontos turísticos: %d\n", pontos2);
    //float densidade2 = densidade(populacao2, area2);
    //printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    //float PIB2 = PIB(pib2 , populacao2);
    //printf("PIB per Capita: R$ %.2f /hab \n", PIB2);
    printf("\n\n");

    //Comparacao das cartas
    printf("--- Comparação de Cartas ---\n");
    // Comparação de População
    if (populacao1 > populacao2){
        printf("A carta 1 venceu! \n\n");
    } else if (populacao1 < populacao2){
        printf("A carta 2 venceu! \n\n");
    } else {
        printf("Empate!\n\n");
    }
    printf("--- --- --- ---\n");

    // Comparação de Área
    // printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));

    // Comparação de PIB
   // printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));

    // Comparação de Pontos Turísticos
    // printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2));

    // Comparação de Densidade Populacional (menor valor vence)
    // printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));

    // Comparação de PIB per Capita
    //printf("PIB per Capita: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
    
    return 0;
}