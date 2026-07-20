#include <stdio.h>
#include <math.h>

int main() {
    double n;
    printf("실수 값 입력: ");
    scanf("%lf", &n);

    if (n < 0) {
        n = -n;
        printf("%lf의 제곱근 : %.2lf\n", sqrt(n));
    }
    else printf("%lf의 제곱근: %.2lf\n", n, sqrt(n));

    return 0;
}
