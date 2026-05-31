#include <stdio.h>

int main() {
// Exercício de do-while
// Crie um programa de calculadora simples que execute pelo menos uma operação antes de perguntar se o usuário deseja continuar.
    printf("Olá, você está usando uma calculadora simples!\n");
    printf("Começando em 3, 2, 1...\n");
    int operacao;
    // executar o menu interativo
    do {
        printf("Escolha uma operação para a calculadora: \n");
        printf("Digite 1 para realizar uma soma\n");
        printf("Digite 2 para realizar uma subtração\n");
        printf("Digite 3 para realizar uma multiplicação\n");
	    printf("Digite 4 para realizar uma divisão\n");
	    printf("Digite 5 para desligar a calculadora\n");
        printf("Escolha uma opção: \n");
        if (scanf("%d", &operacao) != 1) { 
            printf("Entrada inválida.\n");
            return 1;
        }
		switch(operacao) {
			case 1: { // SOMA
				int num1, num2;
				printf("Você escolheu a operação de soma!\n");
				printf("Digite um número: \n");
				if (scanf("%d", &num1) != 1) { printf("Entrada inválida.\n"); break; }
				printf("Digite outro número: \n");
				if (scanf("%d", &num2) != 1) { printf("Entrada inválida.\n"); break; }
				int soma = num1 + num2;
				printf("%d + %d = %d\n", num1, num2, soma);
				break;
			}
			case 2: { // SUBTRAÇÃO
				int num1, num2;
				printf("Você escolheu a operação de subtração!\n");
				printf("Digite um número: \n");
				if (scanf("%d", &num1) != 1) { printf("Entrada inválida.\n"); break; }
				printf("Digite outro número: \n");
				if (scanf("%d", &num2) != 1) { printf("Entrada inválida.\n"); break; }
				int subtracao = num1 - num2;
				printf("%d - %d = %d\n", num1, num2, subtracao);
				break;
			}
			case 3: { // MULTIPLICAÇÃO
				int num1, num2;
				printf("Você escolheu a operação de multiplicação!\n");
				printf("Digite um número: \n");
				if (scanf("%d", &num1) != 1) { printf("Entrada inválida.\n"); break; }
				printf("Digite outro número: \n");
				if (scanf("%d", &num2) != 1) { printf("Entrada inválida.\n"); break; }
				int multiplicacao = num1 * num2;
				printf("%d x %d = %d\n", num1, num2, multiplicacao);
				break;
			}
			case 4: { // DIVISÃO
				int num1, num2;
				printf("Você escolheu a operação de divisão!\n");
				printf("Digite um número: \n");
				if (scanf("%d", &num1) != 1) { printf("Entrada inválida.\n"); break; }
				printf("Digite outro número: \n");
				if (scanf("%d", &num2) != 1) { printf("Entrada inválida.\n"); break; }
				if (num2 == 0) { printf("Erro: divisão por zero.\n"); break; }
				double divisao = (double)num1 / (double)num2;
				printf("%d / %d = %.1f\n", num1, num2, divisao);
				break;
			}
            case 5:
                printf("Encerrando a calculadora...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    // loop vai se repetir até que usuário escolha a opção de sair
    } while (operacao != 5);
    return 0;
}