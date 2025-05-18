#include <stdio.h>

int main() {

    // Declaração das variáveis   
    // Dados da primeira carta
    char carta1_codigo[4], carta1_pais[50];
    int carta1_populacao, carta1_pontos_turisticos;
    float carta1_area, carta1_densidade, carta1_pib_per_capita, carta1_pib;
    
    // Dados da segunda carta
    char carta2_codigo[4], carta2_pais[50];
    int carta2_populacao, carta2_pontos_turisticos;
    float carta2_area, carta2_densidade, carta2_pib_per_capita, carta2_pib;
    
    // Variáveis para armazenar os resultados
    int atributo1 = 0, atributo2 = 0, atributo1_escolhido = 0;

    printf("===========================================\n");
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("===========================================\n");

    // Leitura dos dados da primeira carta
    printf("Digite os dados da carta 1:\n");
    printf("Código: ");
    scanf("%3s", carta1_codigo); // Evitando o estouro do buffer
    printf("País: ");
    scanf("%49s", carta1_pais); // Evitando o estouro do buffer
    printf("População: ");
    scanf("%d", &carta1_populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1_area);
    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &carta1_pib);
    printf("Número de Pontos turísticos: ");
    scanf("%d", &carta1_pontos_turisticos);
    printf("===========================================\n");

    // Cálculo da densidade e PIB per capita para a primeira carta
    carta1_densidade = (float)carta1_populacao / carta1_area;
    carta1_pib_per_capita = (float)carta1_pib * 1000000000000.0 / carta1_populacao;

    // Leitura dos dados da segunda carta
    printf("Digite os dados da carta 2:\n");
    printf("Código: ");
    scanf("%3s", carta2_codigo); // Evitando o estouro do buffer
    printf("País: ");
    scanf("%49s", carta2_pais); // Evitando o estouro do buffer
    printf("População: ");
    scanf("%d", &carta2_populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2_area);
    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &carta2_pib);
    printf("Número de Pontos turísticos: ");
    scanf("%d", &carta2_pontos_turisticos);
    printf("===========================================\n");

    // Cálculo da densidade e PIB per capita para a segunda carta
    carta2_densidade = (float)carta2_populacao / carta2_area;
    carta2_pib_per_capita = (float)carta2_pib * 1000000000000.0 / carta2_populacao;

    // Exibição das cartas
    printf("===========================================\n");
    printf("Carta 1: %s (%s)\n", carta1_pais, carta1_codigo);
    printf("População: %d habitantes\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area);
    printf("PIB: USD %.2f (trilhões) \n", carta1_pib);
    printf("Pontos turísticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade: %.2f habitantes/km²\n", carta1_densidade);
    printf("PIB per capita: USD %.2f /habitantes\n", carta1_pib_per_capita);
    printf("===========================================\n");
    printf("Carta 2: %s (%s)\n", carta2_pais, carta2_codigo);
    printf("População: %d habitantes\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area);
    printf("PIB: USD %.2f (trilões) \n", carta2_pib);
    printf("Pontos turísticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade: %.2f habitantes/km²\n", carta2_densidade);
    printf("PIB per capita: USD %.2f /habitantes\n", carta2_pib_per_capita);
    printf("===========================================\n");

// Menu para escolher o primeiro atributo
    printf("===========================================\n");
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Densidade\n");
    printf("6 - Pontos Turísticos\n");
    printf("7 - Sair\n");
    printf("===========================================\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo1);

    printf("===========================================\n");
    switch (atributo1) {
        case 1:
            printf("Primeiro atributo escolhido: População\n");
            atributo1_escolhido = 1;
            break;
        case 2:
            printf("Primeiro atributo escolhido: Área\n");
            atributo1_escolhido = 1;
            break;
        case 3:
            printf("Primeiro atributo escolhido: PIB\n");
            atributo1_escolhido = 1;
            break;
        case 4:
            printf("Primeiro atributo escolhido: PIB per capita\n");
            atributo1_escolhido = 1;
            break;
        case 5:
            printf("Primeiro atributo escolhido: Densidade\n");
            atributo1_escolhido = 1;
            break;
        case 6:
            printf("Primeiro atributo escolhido: Pontos Turísticos\n");
            atributo1_escolhido = 1;
            break;
        case 7:
            printf("Saindo do jogo...\n");
            return 0;
        }
    printf("===========================================\n");

    // Menu para escolher o segundo atributo excluindo o primeiro
    printf("===========================================\n");
    if (atributo1_escolhido == 1) {
        printf("Escolha o segundo atributo para comparar:\n");
        if (atributo1 != 1) 
            printf("1 - População\n");
        if (atributo1 != 2) 
            printf("2 - Área\n");
        if (atributo1 != 3) 
            printf("3 - PIB\n");
        if (atributo1 != 4) 
            printf("4 - PIB per capita\n");
        if (atributo1 != 5) 
            printf("5 - Densidade\n");
        if (atributo1 != 6) 
            printf("6 - Pontos Turísticos\n");
        printf("Digite o número do atributo: ");
        scanf("%d", &atributo2);
    printf("===========================================\n");

    // Validação do segundo atributo
    printf("===========================================\n");
        int segundo_atributo_valido = 0;
        if (atributo1 != atributo2) {
            if (atributo2 >= 1 && atributo2 <= 6) {
                segundo_atributo_valido = 1;
                switch (atributo2) {
                    case 1: 
                        printf("Segundo atributo escolhido: População\n"); 
                        break;
                    case 2: 
                        printf("Segundo atributo escolhido: Área\n"); 
                        break;
                    case 3: 
                        printf("Segundo atributo escolhido: PIB\n"); 
                        break;
                    case 4: 
                        printf("Segundo atributo escolhido: PIB per capita\n"); 
                        break;
                    case 5: 
                        printf("Segundo atributo escolhido: Densidade\n"); 
                        break;
                    case 6: 
                        printf("Segundo atributo escolhido: Pontos Turísticos\n"); 
                        break;
                }
            }
        }
        if (segundo_atributo_valido == 0) {
            printf("Opção inválida para o segundo atributo.\n");
            return 1;
        }
    }
    printf("===========================================\n");

    if (atributo1_escolhido == 1 && atributo2 != 0) {
        printf("===========================================\n");
        printf("@@@ Resultado da Comparação @@@\n");
        printf("Países: %s vs %s\n", carta1_pais, carta2_pais);
        printf("===========================================\n");

        // Comparação do primeiro atributo
        printf("Comparando %s:\n", (atributo1 == 1) ? "População" : 
                                   (atributo1 == 2) ? "Área" : 
                                   (atributo1 == 3) ? "PIB" : 
                                   (atributo1 == 4) ? "PIB per capita" : 
                                   (atributo1 == 5) ? "Densidade" : "Pontos Turísticos");
        int resultado1 = 0, carta1_pontos = 0, carta2_pontos = 0;
        if (atributo1 == 1) 
            resultado1 = (carta1_populacao > carta2_populacao) ? 1 : ((carta1_populacao < carta2_populacao) ? -1 : 0);
        else if (atributo1 == 2)
            resultado1 = (carta1_area > carta2_area) ? 1 : ((carta1_area < carta2_area) ? -1 : 0);
        else if (atributo1 == 3) 
            resultado1 = (carta1_pib > carta2_pib) ? 1 : ((carta1_pib < carta2_pib) ? -1 : 0);
        else if (atributo1 == 4) 
            resultado1 = (carta1_pib_per_capita > carta2_pib_per_capita) ? 1 : ((carta1_pib_per_capita < carta2_pib_per_capita) ? -1 : 0);
        else if (atributo1 == 5) 
            resultado1 = (carta1_densidade < carta2_densidade) ? 1 : ((carta1_densidade > carta2_densidade) ? -1 : 0);
        else if (atributo1 == 6) 
            resultado1 = (carta1_pontos_turisticos > carta2_pontos_turisticos) ? 1 : ((carta1_pontos_turisticos < carta2_pontos_turisticos) ? -1 : 0);

        if (resultado1 == 1)
            carta1_pontos++;
        else if (resultado1 == -1)
            carta2_pontos++;

        printf("%s: ", carta1_pais);
        if (atributo1 == 1) 
            printf("População: %d vs %d -> %s venceu!\n", carta1_populacao, carta2_populacao,
                (resultado1 > 0) ? carta1_pais : (resultado1 < 0) ? carta2_pais : "Empate");
        else if (atributo1 == 2) 
            printf("Área: %.2f vs %.2f -> %s venceu!\n", carta1_area, carta2_area, 
                (resultado1 > 0) ? carta1_pais : (resultado1 < 0) ? carta2_pais : "Empate");
        else if (atributo1 == 3) 
            printf("PIB: %.2f vs %.2f (em trilhões) -> %s venceu!\n", carta1_pib / 1000000000000LL, carta2_pib / 1000000000000LL, 
                (resultado1 > 0) ? carta1_pais : (resultado1 < 0) ? carta2_pais : "Empate");
        else if (atributo1 == 4) 
            printf("PIB per capita: %.2f vs %.2f -> %s venceu!\n", carta1_pib_per_capita, carta2_pib_per_capita, 
                (resultado1 > 0) ? carta1_pais : (resultado1 < 0) ? carta2_pais : "Empate");
        else if (atributo1 == 5) 
            printf("Densidade: %.2f vs %.2f -> %s venceu!\n", carta1_densidade, carta2_densidade, 
                (resultado1 > 0) ? carta1_pais : (resultado1 < 0) ? carta2_pais : "Empate");
        else if (atributo1 == 6) 
            printf("Pontos Turísticos: %d vs %d -> %s venceu!\n", carta1_pontos_turisticos, carta2_pontos_turisticos, 
                (resultado1 > 0) ? carta1_pais : (resultado1 < 0) ? carta2_pais : "Empate");

        // Comparação do segundo atributo
        printf("\nComparando %s:\n", (atributo2 == 1) ? "População" : 
                                     (atributo2 == 2) ? "Área" : 
                                     (atributo2 == 3) ? "PIB" : 
                                     (atributo2 == 4) ? "PIB per capita" : 
                                     (atributo2 == 5) ? "Densidade" : "Pontos Turísticos");
        int resultado2 = 0;
        if (atributo2 == 1) 
            resultado2 = (carta1_populacao > carta2_populacao) ? 1 : (carta1_populacao < carta2_populacao) ? -1 : 0;
        else if (atributo2 == 2) 
            resultado2 = (carta1_area > carta2_area) ? 1 : (carta1_area < carta2_area) ? -1 : 0;
        else if (atributo2 == 3) 
            resultado2 = (carta1_pib > carta2_pib) ? 1 : (carta1_pib < carta2_pib) ? -1 : 0;
        else if (atributo2 == 4) 
            resultado2 = (carta1_pib_per_capita > carta2_pib_per_capita) ? 1 : (carta1_pib_per_capita < carta2_pib_per_capita) ? -1 : 0;
        else if (atributo2 == 5) 
            resultado2 = (carta1_densidade < carta2_densidade) ? 1 : (carta1_densidade > carta2_densidade) ? -1 : 0;
        else if (atributo2 == 6) 
            resultado2 = (carta1_pontos_turisticos > carta2_pontos_turisticos) ? 1 : (carta1_pontos_turisticos < carta2_pontos_turisticos) ? -1 : 0;
        
        if (resultado2 == 1)
            carta1_pontos++;
        else if (resultado2 == -1)
            carta2_pontos++;

        printf("%s: ", carta1_pais);
        if (atributo2 == 1)
            printf("População: %d vs %d -> %s venceu!\n", carta1_populacao, carta2_populacao, 
                (resultado2 > 0) ? carta1_pais : (resultado2 < 0) ? carta2_pais : "Empate");
        else if (atributo2 == 2) 
            printf("Área: %.2f vs %.2f -> %s venceu!\n", carta1_area, carta2_area, 
                (resultado2 > 0) ? carta1_pais : (resultado2 < 0) ? carta2_pais : "Empate");
        else if (atributo2 == 3) 
            printf("PIB: %.2f vs %.2f (em trilhões) -> %s venceu!\n", carta1_pib / 1000000000000LL, carta2_pib / 1000000000000LL, 
                (resultado2 > 0) ? carta1_pais : (resultado2 < 0) ? carta2_pais : "Empate");
        else if (atributo2 == 4) 
            printf("PIB per capita: %.2f vs %.2f -> %s venceu!\n", carta1_pib_per_capita, carta2_pib_per_capita, 
                (resultado2 > 0) ? carta1_pais : (resultado2 < 0) ? carta2_pais : "Empate");
        else if (atributo2 == 5) 
            printf("Densidade: %.2f vs %.2f -> %s venceu!\n", carta1_densidade, carta2_densidade, 
                (resultado2 > 0) ? carta1_pais : (resultado2 < 0) ? carta2_pais : "Empate");
        else if (atributo2 == 6) 
            printf("Pontos Turísticos: %d vs %d -> %s venceu!\n", carta1_pontos_turisticos, carta2_pontos_turisticos, 
                (resultado2 > 0) ? carta1_pais : (resultado2 < 0) ? carta2_pais : "Empate");
        
        // Soma dos atributos
        
        printf("============================================\n");
        printf("Placar Final:\n");
        printf("%s %d X %d %s\n", carta1_pais, carta1_pontos, carta2_pontos, carta2_pais);
        // printf("%s: %d\n", carta2_pais, carta2_pontos);

        // Determinação do vencedor pela soma dos atributos
        printf("Resultado da Rodada:\n");
        if (carta1_pontos > carta2_pontos) {
            printf("A Carta 1 (%s) venceu!\n", carta1_pais);
        } else if (carta2_pontos > carta1_pontos) {
            printf("A Carta 2 (%s) venceu!\n", carta2_pais);
        } else {
            printf("Tivemos um Empate!\n");
        }
    }

    return 0;
}
// Fim do código