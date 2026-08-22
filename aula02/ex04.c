#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Bem-vindo(a), %s!\n", nome);

    return 0;
}