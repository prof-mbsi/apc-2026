#include <stdio.h>

int main(){
    int qtd;
    float preco, total;

    printf("Qual o valor do produto: ");
    scanf("%f", &preco);
    printf("Qual a quantidade: ");
    scanf("%d", &qtd);

    total = qtd * preco;
    printf("Preco total: %.2f", total);

    return 0;
}