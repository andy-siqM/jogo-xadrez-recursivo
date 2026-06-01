// Novo programa com recursividade e loops complexos

#include <stdio.h>
#include <stdlib.h>

// Função recursiva para simular o movimento da Torre
void moverTorre(int casa) {
    if(casa < 6) { // até 5 casas
        printf("Casa %d: Direita\n", casa);
        moverTorre(casa + 1); // chamada recursiva para a próxima casa
    }
}

// Função recursiva para simular o movimento do Bispo
void moverBispo(int casa_v, int casa_h) { // 5 casas diagonal direita para cima
    // limitar recursão
    if (casa_v > 5 && casa_h > 5) return; // para evitar recursão infinita

    // imprime 5 movimentos para cima e, em seguida, 5 para a direita
    // loop aninhado para imprimir os movimentos verticais e horizontais
    for (casa_v = 1; casa_v <= 5; casa_v++) {
        printf("Casa %d: Cima\n", casa_v);
        for (casa_h = 1; casa_h <= 5; casa_h++) {
        printf("Casa %d: Direita\n", casa_h);
        }   
    }
    
    // chamada recursiva diagonal (próxima casa vertical e horizontal)
    moverBispo(casa_v + 1, casa_h + 1);
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int casa) {
    if(casa < 9) { // até 8 casas  
        printf("Casa %d: Esquerda\n", casa);
        moverRainha(casa + 1); // chamada recursiva para a próxima casa
    }
}


int main() {
    printf("===== SIMULAÇÃO DA MOVIMENTAÇÃO DE PEÇAS DE XADREZ =====\n");
    printf("\n");

    printf("Movimentação da Torre de 5 casas para direita (recursiva)\n");
    moverTorre(1);
    printf("\n");

    printf("Movimentação do Bispo - Cinco casas para diagonal cima e à direita\n");
    moverBispo(1, 1);
    printf("\n");

    printf("Movimentação da Rainha - 8 casas para esquerda\n");
    moverRainha(1);
    printf("\n");

    // Movimentação aprimorada do Cavalo - 2 casas para cima e 1 para a direita
    printf("Movimentação do Cavalo - 2 casas para cima e 1 casa para direita - Loops Aninhados Complexos\n");
    for (int i = 1; i <= 2; i++) {
        printf("Casa %d: Cima\n", i);
        if (i == 2) {
            printf("Casa 3: Direita\n");
        }
    }

    printf("\n");
    printf("===== SIMULAÇÃO CONCLUÍDA =====\n");
    return 0;
}
    
