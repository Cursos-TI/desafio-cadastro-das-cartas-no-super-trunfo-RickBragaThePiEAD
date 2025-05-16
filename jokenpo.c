#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand(time(NULL)); // Inicializa o gerador de números aleatórios
// Variáveis para armazenar a escolha do jogador e do computador
int escolha_jogador, escolha_computador;

    // Exibe as opções para o jogador
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &escolha_jogador);
    
    // Define a estrutura SWITCH para a escolha do jogador
    switch (escolha_jogador) {
        case 1:
            printf("### Você escolheu Pedra. ###\n");
            break;
        case 2:
            printf("### Você escolheu Papel. ###\n");
            break;
        case 3:
            printf("### Você escolheu Tesoura. ###\n");
            break;
        default:
            printf("XXX Escolha inválida! Tente novamente. XXX\n");
            break;
    }
    
    // Gera a escolha do computador (1, 2 ou 3)
    escolha_computador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
    switch (escolha_computador) {
        case 1:
            printf("@@@ O computador escolheu Pedra. @@@\n");
            break;
        case 2:
            printf("@@@ O computador escolheu Papel. @@@\n");
            break;
        case 3:
            printf("@@@ O computador escolheu Tesoura. @@@\n");
            break;
    }

    // Verifica o resultado do jogo
    if (escolha_jogador == escolha_computador) {
        printf("### Empate! ###\n");
    } else if ((escolha_jogador == 1 && escolha_computador == 3) ||
               (escolha_jogador == 2 && escolha_computador == 1) ||
               (escolha_jogador == 3 && escolha_computador == 2)) {
        printf("### Você venceu! ###\n");
    } else {
        printf("@@@ O computador venceu! @@@\n");
    }
    // Fim do jogo
    printf("Obrigado por jogar!\n");
    return 0;
}