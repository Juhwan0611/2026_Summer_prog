#include <stdio.h>

int main(void) {
    float x = 12.8, y = 5.3;
    int a, b, c;

    a = (int)x + (int)y; // 정수 형 계산
    b = (int)(x + y);
    c = (int)(x / y);

    printf("%d %d %d", a, b, c);

    return 0;
}