// Criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha
// Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento
// O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
// Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
// Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
// Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha;

    // Menu interativo
    printf("Vamos iniciar um jogo de xadrez diferenciado com simulação de peças únicas!\n");
    printf("Escolhe uma peça de xadrez para movimentar: \n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &escolha);

    // Aplicação da lógica de movimentação dentro do bloco switch-case
    switch (escolha) {
        case 1: // Movimentação da Torre de 5 casas para direita (loop FOR)
            for(int i = 1; i <= 5; i++) {
                printf("Casa %d: Direita\n", i);
            }
            break;
        case 2: // Movimentação do Bispo - Cinco casas para diagonal cima e à direita - Laço While
            int posicao = 1;
            while(posicao <= 5) { // até 5 casas
                printf("Casa %d: Cima, Direita\n", posicao);
                posicao++;
            }
            break;
        case 3: // Movimentação da Rainha - 8 casas para esquerda
            int casa = 1; // posição inicial da peça 
            do {
                printf("Casa %d: Esquerda\n", casa);
                casa++;
            } while (casa <= 8);
            break;
        default:
            printf("Opção inválida!\n");
            printf("Encerrando programa...\n");
    }
    printf("===== SIMULAÇÃO CONCLUÍDA =====\n");
    return 0;
}