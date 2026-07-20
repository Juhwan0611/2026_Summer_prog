#include <stdio.h>

int main() {
    double a, b, c, root, root2, d;
    
    printf("3개의 계수 입력(a, b, c): ");
    scanf("%lf %*c %lf %*c %lf", &a, &b, &c);
    d = b * b - 4. * a * c; // 판별식

    if (d == 0) printf("중근\n");
    else if (d > 0) printf("두 개의 실근\n");
    else printf("허근\n");

    return 0;
}