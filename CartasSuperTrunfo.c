#include <stdio.h>

int main () {
    // Declaração das variáveis
    char carta1[4], cidade1[50], estado1[3], carta2[4], cidade2[50], estado2[3];
    long int populacao1, populacao2;

    // Leitura dos dados da primeira carta
    printf("Digite a carta 1:");
    scanf(" %s", carta1);
    printf("Digite a cidade 1:");
    scanf(" %s", cidade1);
    printf("Digite o estado 1:");
    scanf(" %s", estado1);
    printf("Digite a populacao 1:");
    scanf(" %ld", &populacao1);
    // Leitura dos dados da segunda carta
    printf("Digite a carta 2:");
    scanf(" %s", carta2);
    printf("Digite a cidade 2:");
    scanf(" %s", cidade2);
    printf("Digite o estado 2:");
    scanf(" %s", estado2);
    printf("Digite a populacao 2:");
    scanf(" %ld", &populacao2);
    printf("\n\n");

    //Exibição das cartas
    printf("Carta 1: %s (%s) - %s - %ld\n", carta1, cidade1, estado1, populacao1); 
    printf("Carta 2: %s (%s) - %s - %ld\n", carta2, cidade2, estado2, populacao2);
    printf("\n\n");
    
    // Comparação das cartas
    printf("Comparação de cartas (Atributo: População):\n");
    if (populacao1 > populacao2) {
        printf("Resultado: A Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: A Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }	 

    return 0;
}
