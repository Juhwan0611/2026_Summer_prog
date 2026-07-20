#include <stdio.h>

void add() {
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

    return;
}

void float_num() {
    float x = 12.8, y = 5.3;
    int a, b, c;

    a = (int)x + (int)y; // 정수 형 계산
    b = (int)(x + y);
    c = (int)(x / y);

    printf("%d %d %d", a, b, c);

    return;
}

void float_num2() {
    int a = 17, b = 6;
    float x;

    x = (float)(a / b) + (float)a / b;

    printf("%.2f", x);

    return;
}



int main() {
    int num;
    scanf("%d", &num);

    while (1) {
        switch (num)
        {
        case 1:
            add();
            break;
        
        case 2:
            float_num();
            break;

        case 3:
            float_num2();
            break;

        default:
            printf("잘못된 입력");
            break;
        }
    }


    return 0;
}