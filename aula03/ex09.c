#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota: ");
    scanf("%d", &nota);

    if (nota >= 9) {
        printf("Conceito A\n");
    } else if (nota >= 7) {
        printf("Conceito B\n");
    } else if (nota >= 5) {
        printf("Conceito C\n");
    } else {
        printf("Conceito D\n");
    }

    return 0;
}