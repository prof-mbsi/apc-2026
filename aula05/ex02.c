#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma = soma + numeros[i];
    }

    printf("\nSoma dos numeros: %d\n", soma);

    return 0;
}
