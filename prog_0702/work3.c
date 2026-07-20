#include <stdio.h>

int main(void) {
    int a = 17, b = 6;
    float x;

    x = (float)(a / b) + (float)a / b;

    printf("%.2f", x);

    return 0;
}