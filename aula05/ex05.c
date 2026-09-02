#include <stdio.h>

int main() {
    int numeros[10];
    int valor;
    int quantidade = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite o valor que deseja procurar: ");
    scanf("%d", &valor);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == valor) {
            quantidade++;
        }
    }

    printf("\nO valor %d aparece %d vez(es) no vetor.\n", valor, quantidade);

    return 0;
}
