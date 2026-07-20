#include <stdio.h>

int main() {
    // 조건문으로 쓴 짝,홀 판별
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    if (n % 2 == 0) printf("짝수");
    else printf("홀수");

    return 0;
}