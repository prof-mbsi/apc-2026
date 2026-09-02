#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    int maior;
    int busca;
    int encontrado = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma = soma + numeros[i];

        if (i == 0) {
            maior = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
        }
    }

    media = soma / 10.0;

    printf("\n----- RESULTADOS -----\n");
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior valor: %d\n", maior);

    printf("\nDigite um numero para buscar no vetor: ");
    scanf("%d", &busca);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == busca) {
            encontrado = 1;
        }
    }

    if (encontrado == 1) {
        printf("\nO numero %d esta no vetor.\n", busca);
    } else {
        printf("\nO numero %d nao esta no vetor.\n", busca);
    }

    return 0;
}
