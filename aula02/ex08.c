#include <stdio.h>

int main() {
    float prova1, prova2, trabalho, notaFinal;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &prova1);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &prova2);

    printf("Digite a nota do trabalho: ");
    scanf("%f", &trabalho);

    notaFinal = (prova1 + prova2 + trabalho) / 3;

    printf("Nota final = %.2f\n", notaFinal);

    return 0;
}