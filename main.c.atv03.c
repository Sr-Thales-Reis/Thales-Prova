
#include <stdlib.h>
#include <stdio.h>

int main() {
    int opcao;
    double numero1, numero2;

    printf("1. Multiplica��o\n");
    printf("2. Divis�o\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 2) {
        printf("Digite uma opcao valida\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
    }

    printf("Digite o n�mero 1: ");
    scanf("%lf", &numero1);

    printf("Digite o n�mero 2: ");
    scanf("%lf", &numero2); 

    if (opcao == 1) {
        printf("Resultado �: %.2lf\n", numero1 * numero2);
    } else {
        if (numero2 == 0) {
            printf("N�o � poss�vel fazer divis�o por zero\n");
        } else {
            printf("Resultado �: %.2lf\n", numero1 / numero2);
        }
    }

    return 0;
}

