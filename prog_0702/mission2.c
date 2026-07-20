#include <stdio.h>

int main() {    
    int h, w;
    printf("키: ");
    scanf("%d", &h);
    printf("몸무계: ");
    scanf("%d", &w);
    if (h < 120 && w < 40) {
        printf("키가 작습니다.\n");
        printf("이 놀이 기구는 탈 수 없습니다.\n");
        // printf("키가 %dcm 더 커야 합니다.\n", 120 - h);
    } 

    else {
        printf("환영합니다. 즐거운 시간되시기 바랍니다.\n");
        printf("놀이 기구를 탑승하시고 반드시 안전벨트를 매십서오.\n");
    }


    return 0;
}
