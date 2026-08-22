#include <stdio.h>

int main() {
    int idade = 20;
    int carteira = 1;

    printf("idade >= 18: %d\n", idade >= 18);
    printf("idade >= 18 && carteira == 1: %d\n", idade >= 18 && carteira == 1);
    printf("idade < 18 || carteira == 1: %d\n", idade < 18 || carteira == 1);
    printf("!(idade >= 18): %d\n", !(idade >= 18));

    return 0;
}