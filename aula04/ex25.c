#include <stdio.h>

int main() {
    int numero, maior;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        if (i == 1 || numero > maior) maior = numero;
    }
    printf("\nMaior numero = %d\n", maior);
    return 0;
}
