#include <stdio.h>

int main() {
    int idade;
    int carteira;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Possui carteira? (1=Sim, 0=Nao): ");
    scanf("%d", &carteira);

    printf("idade >= 18: %d\n", idade >= 18);
    printf("idade >= 18 && carteira == 1: %d\n",
           idade >= 18 && carteira == 1);
    printf("idade < 18 || carteira == 1: %d\n",
           idade < 18 || carteira == 1);
    printf("!(idade >= 18): %d\n",
           !(idade >= 18));

    return 0;
}