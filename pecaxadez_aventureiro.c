// Você deverá implementar, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo. 
// O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L"
// Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. 
// Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while, à sua escolha. 
// Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("===== SIMULAÇÃO DA MOVIMENTAÇÃO DE PEÇAS DE XADREZ =====\n");
    // Movimentação da Torre de 5 casas para direita (loop FOR)
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");
    // Movimentação do Bispo - Cinco casas para diagonal cima e à direita - Laço While
    int posicao = 1;
    while(posicao <= 5) { // até 5 casas
        printf("Casa %d: Cima, Direita\n", posicao);
        posicao++;
    } 
    printf("\n");
    // Movimentação da Rainha - 8 casas para esquerda - Laço Do-While
        int casa = 1; // posição inicial da peça 
        do {
            printf("Casa %d: Esquerda\n", casa);
            casa++;
        } while (casa <= 8);
    printf("\n");
    // Movimentação do Cavalo - 2 casas para baixo e 1 casa para esquerda - Loops Aninhados
    for (int i = 1; i <= 2; i++) { // loop para as 2 casas para baixo
        printf("Casa %d: Baixo\n", i);
        if (i == 2) { // após mover 2 casas para baixo, mover 1 casa para esquerda
            int j = 1; // posição inicial para a esquerda
            do { // loop do-while para executar exatamente uma vez
                printf("Casa 3: Esquerda\n", j);
                j++;
            } while (j <= 1);
        }
    }
    printf("\n");
    printf("===== SIMULAÇÃO CONCLUÍDA =====\n");
    return 0;
}

