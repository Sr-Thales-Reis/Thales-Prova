#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
if (num % 2 == 1) { 
        printf("Numeros impares entre 0 e %d:\n", num);
        for (int i = 1; i <= num; i+=2) {
            printf("%d ", i);
        }
    } else {  
        printf("Numeros pares entre 0 e %d:\n", num);
        for (int i = 0; i <= num; i+=2) {
            printf("%d ", i);
			  }
}
    printf("\n");  
    return 0;
}

