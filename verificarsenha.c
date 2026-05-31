// Leia uma senha até que o usuário acerte uma senha fixa, como 1234.
// Verifique quantas vezes o usuário errou uma senha antes de acertá-la.

#include <stdio.h>
int main() {
    int senha_correta = 1234; // senha fixa
    int senha_usuario; // variável para guardar senha digitada pelousuário
    int tentativas = 0; // contagem de tentativas/entradas incorretas

    printf("Bem-vindo! Tente adivinhar a senha.\n");
    printf("Digite a senha: \n");
    // Evitar entrada de dados não numéricos e gerar uma mensagem de erro caso isso aconteça
    if (scanf("%d", &senha_usuario) != 1) { 
        printf("Entrada inválida.\n");
        return 1;
    }

    // se não for a senha correta, o loop continua pedindo para o usuário tentar novamente
    while (senha_usuario != senha_correta) {
        tentativas++;
        printf("Senha incorreta. Tente novamente: \n");
        if (scanf("%d", &senha_usuario) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }
    }
    printf("Senha correta! Você errou %d vezes antes de acertar!\n", tentativas);
    return 0; // encerra programa
}