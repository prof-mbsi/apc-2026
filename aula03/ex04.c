#include <stdio.h>

int main() {
    int nota = 7;

    if (nota >= 9) {
        printf("A\n");
    } else if (nota >= 7) {
        printf("B\n");
    } else if (nota >= 5) {
        printf("C\n");
    } else {
        printf("D\n");
    }

    return 0;
}