#include <stdio.h>

int main() {
    int a = 15, b = 4;

    a %= b;
    printf("a = %d, b = %d\n", a, b);

    b = a++ + b;
    printf("a = %d, b = %d\n", a, b);

    a += ++b;
    printf("a = %d, b = %d\n", a, b);

    b = a-- % b;
    printf("a = %d, b = %d\n", a, b);

    a = b++ + --a;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}