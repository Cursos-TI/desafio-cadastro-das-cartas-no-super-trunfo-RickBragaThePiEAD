#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definindo as variáveis
    int numerojogador, numerocomputador, resultado;
    char tipoComparacao;

    // Inicializando o gerador de números aleatórios
    srand(time(0));
    // Gerando um número aleatório entre 1 e 100
    numerocomputador = rand() % 100 + 1;

    //Iniciando o jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número entre 1 e 100 e o tipo de comparação (>, < ou =).\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação (M/N/I): ");
    scanf(" %c", &tipoComparacao);

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numerojogador);

    //Exibir o número do computador
    printf("O número do computador é: %d\n", numerocomputador);

    //Criando o menu de opcao
    switch (tipoComparacao) {
        case 'M':
        case 'm':
            printf("Você escolheu a opçao maior!\n");
            resultado = numerojogador > numerocomputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu a opçao menor!\n");
            resultado = numerojogador < numerocomputador ? 1 : 0;
        break;
        case 'I':
        case 'i':
            printf("Você escolheu a opçao igual!\n");
            resultado = numerojogador == numerocomputador ? 1 : 0;
        break;
        default:
            printf("Opção de jogo inválida!\n");
        break;
    }
        printf("O número do computador é: %d e o do jogador é: %d\n", numerocomputador, numerojogador);
        
        if (resultado == 1) {
            printf("Parabéns! Você ganhou!\n");
        } else {
            printf("Você perdeu! Tente novamente.\n");
        }

        return 0;
    }