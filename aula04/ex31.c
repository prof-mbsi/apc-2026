#include <stdio.h>

int main() {
    int numero, quantidade = 0, soma = 0, maior;
    float media;
    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &numero);
    while (numero != 0) {
        if (quantidade == 0 || numero > maior) maior = numero;
        quantidade++;
        soma += numero;
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &numero);
    }
    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("\nQuantidade: %d\nSoma: %d\nMedia: %.2f\nMaior: %d\n", quantidade, soma, media, maior);
    } else{
        printf("\nNenhum numero foi informado.\n");
    } 
    return 0;
}
