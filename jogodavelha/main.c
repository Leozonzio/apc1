#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3
#define MAX_PARTIDAS 10


int main() {

    typedef struct {
        char tabuleiro[TAM][TAM];
        int vencedor; 
        int movimentos; 
    } Partida;
    
    Partida historico[MAX_PARTIDAS]; 
    int partidas_jogadas = 0; 
    int opcao, jogando = 1, jogador = 1;
    int linha, coluna, movimentos = 0;
    char simbolo;

    do {
        printf("========== MENU PRINCIPAL ==========\n");
        printf("1. Iniciar novo jogo\n");
        printf("2. Ver histórico de partidas\n");
        printf("3. Sobre o jogo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (partidas_jogadas >= MAX_PARTIDAS) {
                printf("Limite de partidas alcançado! Confira o histórico.\n");
                continue;
            }

            
            Partida *nova_partida = &historico[partidas_jogadas];
            for (int i = 0; i < TAM; i++) {
                for (int j = 0; j < TAM; j++) {
                    nova_partida->tabuleiro[i][j] = ' ';
                }
            }

            jogando = 1;
            movimentos = 0;
            jogador = 1;

            
            while (jogando) {
                
                printf("\n    0   1   2\n");
                for (int i = 0; i < TAM; i++) {
                    printf(" %d ", i); 
                    for (int j = 0; j < TAM; j++) {
                        printf(" %c ", nova_partida->tabuleiro[i][j]);
                        if (j < TAM - 1) printf("|");
                    }
                    if (i < TAM - 1) printf("\n   ---+---+---\n");
                }
                printf("\n");

                
                simbolo = (jogador == 1) ? 'X' : 'O';
                printf("Jogador %d (%c), escolha sua jogada (linha e coluna): ", jogador, simbolo);
                scanf("%d %d", &linha, &coluna);

                
                if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM && nova_partida->tabuleiro[linha][coluna] == ' ') {
                    nova_partida->tabuleiro[linha][coluna] = simbolo;
                    movimentos++;

                    
                    int ganhou = 0;

                   
                    for (int i = 0; i < TAM; i++) {
                        if (nova_partida->tabuleiro[i][0] == simbolo && nova_partida->tabuleiro[i][1] == simbolo && nova_partida->tabuleiro[i][2] == simbolo)
                            ganhou = 1;
                        if (nova_partida->tabuleiro[0][i] == simbolo && nova_partida->tabuleiro[1][i] == simbolo && nova_partida->tabuleiro[2][i] == simbolo)
                            ganhou = 1;
                    }
                    if (nova_partida->tabuleiro[0][0] == simbolo && nova_partida->tabuleiro[1][1] == simbolo && nova_partida->tabuleiro[2][2] == simbolo)
                        ganhou = 1;
                    if (nova_partida->tabuleiro[0][2] == simbolo && nova_partida->tabuleiro[1][1] == simbolo && nova_partida->tabuleiro[2][0] == simbolo)
                        ganhou = 1;

                    if (ganhou) {
                        printf("\nJogador %d venceu!\n", jogador);
                        nova_partida->vencedor = jogador;
                        jogando = 0;
                    } else if (movimentos == TAM * TAM) {
                        printf("\nO jogo empatou!\n");
                        nova_partida->vencedor = 0;
                        jogando = 0;
                    } else {
                        jogador = (jogador == 1) ? 2 : 1; 
                    }
                } else {
                    printf("Jogada invalida! Tente novamente.\n");
                }
            }

            nova_partida->movimentos = movimentos;
            partidas_jogadas++;
        } else if (opcao == 2) {
            printf("\n=== Histórico de Partidas ===\n");
            if (partidas_jogadas == 0) {
                printf("Nenhuma partida foi jogada ainda.\n");
            } else {
                for (int p = 0; p < partidas_jogadas; p++) {
                    Partida *partida = &historico[p];
                    printf("Partida %d:\n", p + 1);
                    printf("    Tabuleiro final:\n");
                    printf("    0   1   2\n");
                    for (int i = 0; i < TAM; i++) {
                        printf(" %d ", i);
                        for (int j = 0; j < TAM; j++) {
                            printf(" %c ", partida->tabuleiro[i][j]);
                            if (j < TAM - 1) printf("|");
                        }
                        if (i < TAM - 1) printf("\n   ---+---+---\n");
                    }
                    printf("\n    Vencedor: ");
                    if (partida->vencedor == 0)
                        printf("Empate\n");
                    else
                        printf("Jogador %d\n", partida->vencedor);
                    printf("    Movimentos: %d\n\n", partida->movimentos);
                }
            }
        } else if (opcao == 3) {
            printf("\n=== Sobre o jogo ===\n");
            printf("Este e um jogo da velha criado como trabalho a ser apresentado na materia de apc1 na faculdade IESB.\n");
            printf("O codigo foi criado utilizando-se essencialmente apenas da funcao main para sua efetividade.\n\n");
            printf("\nCriador: Leonardo Barreto\n\n");
        } else if (opcao != 4) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    printf("Saindo do jogo. Ate mais!\n");
    return 0;
}
