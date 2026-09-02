#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];
    char busca[50];
    int encontrado = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", nomes[i]);
    }

    printf("\nDigite o nome que deseja procurar: ");
    scanf(" %49[^\n]", busca);

    for (int i = 0; i < 5; i++) {
        if (strcmp(nomes[i], busca) == 0) {
            encontrado = 1;
            printf("\nAluno encontrado na posicao %d.\n", i);
        }
    }

    if (encontrado == 0) {
        printf("\nAluno nao encontrado.\n");
    }

    return 0;
}
