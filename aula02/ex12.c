#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("Depois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}