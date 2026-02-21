#include <stdio.h>              // Inclui a biblioteca padrão de entrada e saída (printf, scanf)

int main() {                    // Função principal: ponto inicial do programa

    char nome[50];              // Declara uma variável do tipo texto (string) com até 49 caracteres

    printf("Digite seu nome: "); // Mostra uma mensagem na tela pedindo o nome do usuário

    scanf("%s", nome);          // Lê o nome digitado e armazena na variável 'nome'

    printf("Ola, %s! Seja bem-vinda(o).\n", nome);
                                // Exibe uma mensagem usando o //nome digitado (%s é texto)

    return 0;                   // Finaliza o programa indicando que tudo ocorreu corretamente
}
