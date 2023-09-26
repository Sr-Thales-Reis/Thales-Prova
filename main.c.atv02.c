#include <stdio.h>
#include <stdlib.h>
int main() {
    int opcao;

    do {
        
        printf("Menu de Opcoes:\n");
        printf("1. Cadastrar\n");
        printf("2. Buscar\n");
        printf("3. Atualizar\n");
        printf("4. Excluir\n");
        printf("5. Sair\n");
        printf("Digite o numero da opcao desejada: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                printf("Voce escolheu a opcao Cadastrar.\n");
                break;
            case 2:
                printf("Voce escolheu a opcao Buscar.\n");
                break;
            case 3:
                printf("Voce escolheu a opcao Atualizar.\n");
                break;
            case 4:
                printf("Voce escolheu a opcao Excluir.\n");
                break;
            case 5:
                printf("Voce escolheu a opcao Sair.\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                break;
        }
    } while (opcao != 5);
    return 0;
}

