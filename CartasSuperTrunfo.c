#include <stdio.h>

int main () {
    // Declaração das variáveis
    char carta1[4], cidade1[50], estado1[3], carta2[4], cidade2[50], estado2[3];
    int populacao1, populacao2;
    float area1, area2;
    long double pib1, pib2, densidade1, densidade2;

    // Leitura dos dados da primeira carta
    printf("----------------------------------\n");
    printf("Digite a carta 1:");
    scanf(" %s", carta1);
    printf("Digite a cidade 1:");
    scanf(" %s", cidade1);
    printf("Digite o estado 1:");
    scanf(" %s", estado1);
    printf("Digite a populacao 1:");
    scanf(" %d", &populacao1);
    printf("Digite a area 1:");
    scanf(" %f", &area1);
    printf("Digite o PIB 1:");
    scanf(" %Lf", &pib1);
    printf("----------------------------------\n");
    // Leitura dos dados da segunda carta
    printf("----------------------------------\n");
    printf("Digite a carta 2:");
    scanf(" %s", carta2);
    printf("Digite a cidade 2:");
    scanf(" %s", cidade2);
    printf("Digite o estado 2:");
    scanf(" %s", estado2);
    printf("Digite a populacao 2:");
    scanf(" %d", &populacao2);
    printf("Digite a area 2:");
    scanf(" %f", &area2);
    printf("Digite o PIB 2:");
    scanf(" %Lf", &pib2);
    printf("\n\n");
    printf("----------------------------------\n");
    // Comparação das cartas atributo população
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1: %s (%s) - %s - %d habitantes\n", carta1, cidade1, estado1, populacao1); 
    printf("Carta 2: %s (%s) - %s - %d habitantes\n", carta2, cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: A Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: A Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }	 
    printf("\n\n");
    // Comparação das cartas atributo área
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1: %s (%s) - %s - %.2f km²\n", carta1, cidade1, estado1, area1); 
    printf("Carta 2: %s (%s) - %s - %.2f km²\n", carta2, cidade2, estado2, area2);
    if (area1 > area2) {
        printf("Resultado: A Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
        printf("Resultado: A Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("\n\n");
    // Comparação das cartas atributo PIB
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1: %s (%s) - %s - R$ %.2Lf\n", carta1, cidade1, estado1, pib1);
    printf("Carta 2: %s (%s) - %s - R$ %.2Lf\n", carta2, cidade2, estado2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: A Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: A Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("\n\n");
    // Cálculo da densidade
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Comparação das cartas atributo densidade
    printf("Comparação de cartas (Atributo: Densidade):\n");
    printf("Carta 1: %s (%s) - %s - %.2Lf habitantes/km²\n", carta1, cidade1, estado1, densidade1);
    printf("Carta 2: %s (%s) - %s - %.2Lf habitantes/km²\n", carta2, cidade2, estado2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: A Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 > densidade1) {
        printf("Resultado: A Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("\n\n");
    // Cálculo do PIB per capita
    long double pib_per_capita1 = (long double)pib1 / populacao1;
    long double pib_per_capita2 = (long double)pib2 / populacao2;

    // Comparação das cartas atributo PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1: %s (%s) - %s - R$ %.2Lf /hab\n", carta1, cidade1, estado1, pib_per_capita1);
    printf("Carta 2: %s (%s) - %s - R$ %.2Lf /hab\n", carta2, cidade2, estado2, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: A Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: A Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("\n\n");
    return 0;
}
