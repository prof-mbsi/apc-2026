#include <stdio.h>

int main() {
    int numero, soma = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    printf("\nSoma = %d\n", soma);
    return 0;
}
