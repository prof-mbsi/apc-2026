#include <stdio.h>

int main() {
    int numeros[10];
    int maior;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (i == 0) {
            maior = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);

    return 0;
}
