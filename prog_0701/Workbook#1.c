#define P 3.14
#include <stdio.h>
#include <math.h>

void F() {
    // 1
    int c;
    printf("섭씨온도 입력: ");
    scanf("%d", &c);
    
    printf("화씨: %.2lf\n\n", c * 1.8 + 32);

    int f;
    printf("화씨온도 입력: ");
    scanf("%d", &f);
    
    printf("섭씨: %.2lf\n\n", (f - 32) * (5.0 / 9.0));
    return;
}

void Radius() {
    // 2
    int r;
    printf("반지름 입력: ");
    scanf("%d", &r);

    printf("원의 넓이: %.2lf\n\n", P * r * r);
    return;
}

void Mile() {
    //3
    int M;
    printf("마일 입력: ");
    scanf("%d", &M);

    printf("KM: %.3lf,  FT: %d\n\n", 1.609 * M, 5280 * M);
    return;
}

void V() {
    //4
    int i, r1;
    printf("전류와 저항 값을 입력: ");
    scanf("%d %d", &i, &r1);

    printf("전압: %d\n\n", i * r1);
    return;
}

void Square() {
    //5
    int a;
    printf("한변의 길이를 입력: ");
    scanf("%d", &a);

    double v, s, h;
    v = (sqrt(2) / 12) * pow(a, 3); // v = sqrt(2) / 12 * a * a *a; 
    s = sqrt(3) * (a * a);
    h = (sqrt(6) / 3) * a;

    printf("부피: %.2lf, 겉넓이: %.2lf, 높이: %.2lf\n\n", v, s, h);
    return;
}

void S() {
    //6
    printf("문자열 입력: ");
    char c[100];
    scanf("%s", c);
    printf("%s\n\n", c);
    return;
}


char menu[1001] = {
    "********************** MENU **********************\n" 
    "*    0. 종료                                     *\n"
    "*    1. 화씨(섭씨)온도변환     2. 원 면적 계산   *\n"
    "*    3. KM,FT                  4. 전압식계산     *\n"
    "*    5. 부피,겉넓이,높이       6. 문자열출력     *\n"
    "**************************************************\n"
};


int main() {
    while (1) {
        printf("%s", menu);

        int num;
        scanf("%d", &num);
        if (num == 0)  {
            printf("종료");
            break;
        }
        
        
        switch (num)
        {
        case 1:
            F();
            break;

        case 2:
            Radius();
            break;

        case 3:
            Mile();
            break;

        case 4:
            V();
            break;

        case 5:
            Square();
            break;

        case 6:
            S();
            break;

        default:
            printf("잘못된 입력입니다.\n\n");
            break;
        }
    }

    return 0;
}