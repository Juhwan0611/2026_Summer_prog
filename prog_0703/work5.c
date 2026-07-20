#include <stdio.h>

int main() {
    int m;
    printf("월을 입력하시오: ");
    scanf("%d", &m);

    // if - else 조건문
    if (3 <= m && m <= 5) printf("봄\n");
    else if (6 <= m && m <= 8) printf("여름\n");
    else if (9 <= m && m <= 11) printf("가을\n");
    else printf("겨울\n");


    // 스위치 케이스 문
    switch (m)
    {
    case 3:
    case 4:
    case 5:
        printf("봄\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("여름\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("가을\n");
        break;

    default:
        printf("겨울\n");
        break;
    }

    return 0;
}
