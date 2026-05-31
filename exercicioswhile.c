#include <stdio.h>

// Exercicios para treinar uso do loop while.
// Gera a tabuada de um número de 1 a 10.

int main() {
    int num_user;
    int fator = 1;
    printf("Digite um número para criar a sua tabuada: \n");
    if (scanf("%d", &num_user) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    while(fator <= 10) {
        int resultado = num_user * fator;
        printf("Tabuada de %d:\n", num_user);
        printf("%d x %d = %d\n", num_user, fator, resultado);
        fator++;
    }
    printf("Fim da tabuada!");
    return 0; // encerra programa
}