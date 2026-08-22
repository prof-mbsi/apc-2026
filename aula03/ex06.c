#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;

    a = a + b;
    b = a - b;

    printf("%d %d\n", a, b);

    return 0;
}