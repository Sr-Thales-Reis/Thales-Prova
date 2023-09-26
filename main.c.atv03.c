
#include <stdlib.h>
#include <stdio.h>

int main() {
    int opcao;
    double numero1, numero2;

    printf("1. Multiplicação\n");
    printf("2. Divisão\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 2) {
        printf("Digite uma opcao valida\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
    }

    printf("Digite o número 1: ");
    scanf("%lf", &numero1);

    printf("Digite o número 2: ");
    scanf("%lf", &numero2); 

    if (opcao == 1) {
        printf("Resultado é: %.2lf\n", numero1 * numero2);
    } else {
        if (numero2 == 0) {
            printf("Não é possível fazer divisão por zero\n");
        } else {
            printf("Resultado é: %.2lf\n", numero1 / numero2);
        }
    }

    return 0;
}

