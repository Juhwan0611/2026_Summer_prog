#include <stdio.h>

int main() {
    int kor, eng, mat, sum = 0;
    double avg = 0.0;

    printf("±¹¾î ¿µ¾î ¼öÇÐ Á¡¼ö: ");
    scanf("%lf %lf %lf", &kor, &eng, &mat);
    sum = kor + eng + mat;

    avg = sum / 3.;

    if (avg >= 90) printf("A\n");
    else if (avg >= 80) printf("B\n");
    else if (avg >= 70) printf("C\n");
    else if (avg >= 60) printf("D\n");
    else printf("F\n");

    return 0;
}
