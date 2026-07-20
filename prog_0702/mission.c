#include <stdio.h>

int main() {

    // 세 정수의 최댓값 구하기
    int x, y ,z;
    printf("세 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);  

    (x > y && x > z) ? printf("%d\n\n", x) : (y > x && y > z) ? printf("%d\n\n", y) : printf("%d\n", z);

    
    // 짝수 홀수 판별
    int a;
    printf("정수 입력: ");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("짝수") : printf("홀수");

    return 0;
}