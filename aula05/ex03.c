#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma = soma + numeros[i];
    }

    media = soma / 10.0;

    printf("\nMedia dos numeros: %.2f\n", media);

    return 0;
}
