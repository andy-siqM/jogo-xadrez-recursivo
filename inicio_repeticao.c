// Prática com laços de repetição 
// Programa com loop while para imprimir numeros de 1 a 5
#include <stdio.h>

int main() {
    /*
    int i = 1;
   
    while (i <= 5) {
        printf("Imprimindo número: %d\n", i);
        i++;
    }
   
    return 0;
    */

    // Loop para leitura de dados
    // Loop ler numeros positivos até que apareça o negativo para encerrar programa
    /*
    int num;
    printf("Digite qualquer número (se for negativo, encerra programa): \n");
    scanf("%d", &num); // armazena valor na variavel num
    while (num >= 0) {
        printf("Você digitou o número: %d\n", num);
        printf("Digite qualquer número (se for negativo, encerra programa): \n");
        scanf("%d", &num);
    }
    // quando digitar número negativo, a condição se torna falsa
    printf("Número negativo detectado! Encerrando agora o programa...\n");
    return 0; // encerra programa
    */

    /*
    // Estrutura com do-while
     int i = 1;
    do {
        printf("Executando: %d\n", i);
        i++;
    } while (i <= 5);
    printf("Fim");
    return 0;
    */

    // Estrutura de menu interativo com do-while e switch-case
    /*
    int option;
    // executar primeiro o menu interativo
    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    // loop vai se repetir até que usuário escolha a opção de sair
    } while (option != 3);
    return 0;
    */

    // Estrutura de loop for para imprimir números pares de 1 a 20
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("Número par: %d\n", i);
        }
        else {
            printf("Número ímpar: %d\n", i);
        }
    }

    printf("____________________________");
    printf("\n");
    // Impressão de números de 0 a 100, com incremento diferenciado
    // Sequência de 10 em 10
    for(int i = 0; i <= 100; i += 10) {
        printf("Número: %d\n", i);
    }

    // Impressão de números de 100 a 0
    // Decremento de 10 em 10
    printf("____________________________");
    printf("\n");
    printf("Decremento de números de 100 a 0\n");
    printf("\n");
    for (int j = 100; j >= 0; j -= 10) {
        printf("Número: %d\n", j);
    }
    return 0; // encerra programa
}