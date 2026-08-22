#include <stdio.h>

int main() {
    int x = 4;
    int y = 7;

    if (x > y) {
        x = x + 10;
    } else {
        y = y + 10;
    }

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}