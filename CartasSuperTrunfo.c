#include <stdio.h>

int main () {
    // Declaração das variáveis
    char carta1[4], pais1[50], carta2[4], pais2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, opcao;
    float area1, area2;
    long double pib1, pib2, densidade1, densidade2;

    //Criando o menu interativo
    printf("===========================================\n");
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Escolha uma opção:\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("===========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    if (opcao == 2) {
        printf("Saindo do jogo...\n\n");
        return 0;
    } else if (opcao != 1) {
        printf("Opção inválida. Saindo do jogo...\n\n");
        return 0;
    }

    // Leitura dos dados da primeira carta
    printf("===========================================\n");
    printf("Digite a carta 1:");
    scanf(" %s", carta1);
    printf("Digite o país 1:");
    scanf(" %s", pais1);
    printf("Digite a populacao 1:");
    scanf(" %d", &populacao1);
    printf("Digite a area 1:");
    scanf(" %f", &area1);
    printf("Digite o PIB 1:");
    scanf(" %Lf", &pib1);
    printf("Digite o número de pontos turísticos:");
    scanf(" %d", &pontos_turisticos1);
    printf("===========================================\n");
    // Leitura dos dados da segunda carta
    printf("===========================================\n");
    printf("Digite a carta 2:");
    scanf(" %s", carta2);
    printf("Digite o país 2:");
    scanf(" %s", pais2);
    printf("Digite a populacao 2:");
    scanf(" %d", &populacao2);
    printf("Digite a area 2:");
    scanf(" %f", &area2);
    printf("Digite o PIB 2:");
    scanf(" %Lf", &pib2);
    printf("Digite o número de pontos turísticos:");
    scanf(" %d", &pontos_turisticos2);
    printf("\n\n");
    printf("===========================================\n");

    //Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas.
    printf("===========================================\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    printf("7. Sair\n");
    printf("===========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    if (opcao == 7) {
        printf("Saindo do jogo...\n\n");
        return 0;
    } else if (opcao < 1 || opcao > 6) {
        printf("Opção inválida. Saindo do jogo...\n\n");
        return 0;
    }
    
    //Iniciando a comparação de cartas
    switch (opcao)
    {
    case 1:
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1: %s (%s) - %d habitantes\n", carta1, pais1, populacao1);
        printf("Carta 2: %s (%s) - %d habitantes\n", carta2, pais2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", pais1);
            printf("===========================================\n");
        } else if (populacao2 > populacao1) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", pais2);
            printf("===========================================\n");
        } else {
            printf("Resultado: Empate!\n");
            printf("===========================================\n");
        }
        break;
    case 2:
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1: %s (%s) - %.2f km²\n", carta1, pais1, area1);
        printf("Carta 2: %s (%s) - %.2f km²\n", carta2, pais2, area2);
        if (area1 > area2) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", pais1);
            printf("===========================================\n");
        } else if (area2 > area1) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", pais2);
            printf("===========================================\n");
        } else {
            printf("Resultado: Empate!\n");
            printf("===========================================\n");
        }
        break;
    case 3:
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1: %s (%s) - %.2Lf\n", carta1, pais1, pib1);
        printf("Carta 2: %s (%s) - %.2Lf\n", carta2, pais2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", pais1);
            printf("===========================================\n");
        } else if (pib2 > pib1) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", pais2);
            printf("===========================================\n");
        } else {
            printf("Resultado: Empate!\n");
            printf("===========================================\n");
        }
        break;
    case 4:
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: Densidade):\n");
        densidade1 = (float)populacao1 / area1;
        densidade2 = (float)populacao2 / area2;
        printf("Carta 1: %s (%s) - %.Lf habitantes/km²\n", carta1, pais1, densidade1);
        printf("Carta 2: %s (%s) - %.Lf habitantes/km²\n", carta2, pais2, densidade2);
        if (densidade1 < densidade2) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", pais1);
            printf("===========================================\n");
        } else if (densidade2 < densidade1) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", pais2);
            printf("===========================================\n");
        } else {
            printf("Resultado: Empate!\n");
            printf("===========================================\n");
        }
        break;
    case 5:
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1: %s (%s) - %.2Lf\n", carta1, pais1, pib1 / populacao1);
        printf("Carta 2: %s (%s) - %.2Lf\n", carta2, pais2, pib2 / populacao2);
        if ((pib1 / populacao1) > (pib2 / populacao2)) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", pais1);
            printf("===========================================\n");
        } else if ((pib2 / populacao2) > (pib1 / populacao1)) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", pais2);
            printf("===========================================\n");
        } else {
            printf("Resultado: Empate!\n");
            printf("===========================================\n");
        }
        break; 
    case 6:
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: Pontos turísticos):\n");
        printf("Carta 1: %s (%s) - %d pontos turísticos\n", carta1, pais1, pontos_turisticos1);
        printf("Carta 2: %s (%s) - %d pontos turísticos\n", carta2, pais2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: A Carta 1 (%s) venceu!\n", pais1);
            printf("===========================================\n");
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Resultado: A Carta 2 (%s) venceu!\n", pais2);
            printf("===========================================\n");
        } else {
            printf("Resultado: Empate!\n");
            printf("===========================================\n");
        }
        break;
    }
}