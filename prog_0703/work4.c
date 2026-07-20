#include <stdio.h>

int main() {
    // menu
    printf("(C) coffee(1500원)\n");
    printf("(D) doughnut(2000원)\n");
    printf("(H) hamburger(4000원)\n");
    printf("(P) pizza(5000원)\n");
    printf("(S) spaghetti(3500원)\n");
    printf("(T) tea(1500원)\n");
    printf("(Q) quit\n");

    char c;
    printf("what do you want? ");
    scanf("%c", &c);

    switch (c)
    {
    case 'C':
        printf("1500원 입니다\n");
        break;
    case 'D':
        printf("2000원 입니다\n");
        break;
    case 'H':
        printf("4000원 입니다\n");
        break;
    case 'P':
        printf("5000원 입니다\n");
        break;
    case 'S':
        printf("3500원 입니다\n");
        break;
    case 'T':
        printf("1500원 입니다\n");
        break;

    default:
        printf("나갑니다\n");
        break;
    }

    return 0;
}
