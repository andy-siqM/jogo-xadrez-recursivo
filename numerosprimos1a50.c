#include <stdio.h>
// Aplicação do laço for para imprimir números primos entre 1 e 50

int main() {
    printf("Números primos entre 1 e 50:\n");
    for (int num = 2; num <= 50; num++) { // começa em 2, pois 1 não é primo
        int primo = 1; // Assume que o número é primo até provar o contrário
        for (int divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) { // Se o número for divisível por algum divisor, não é primo
                primo = 0; // Marca como não primo
                break; // encerra o loop interno, pois descobre-se que o número não é primo
            }
        }
        if (primo) { // se primo = 1, a condição é verdadeira e o número é primo
            printf("%d, ", num); // Imprime o número primo
        }
    }
    printf("\nFim da lista de números primos.\n");
    return 0;
}