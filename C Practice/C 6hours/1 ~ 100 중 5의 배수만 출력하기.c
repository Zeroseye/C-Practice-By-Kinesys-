#include <stdio.h>

int main(void) {
    int i = 0;
    printf("1 ~ 100 중 5의 배수만 출력하기\n");
    printf("-------------------------------------------- \n");

    for (int i = 0; i <100; i++) {
        printf("[%d] - %3d \n", i, i);
    }
    return 0;
}