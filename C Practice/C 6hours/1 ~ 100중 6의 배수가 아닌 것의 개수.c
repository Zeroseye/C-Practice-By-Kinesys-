#include <stdio.h>

int main(void) {
    int i = 0;
    int data = 0;

    printf("1 ~ 100 중 6의 배수가 아닌 것의 개수\n");
    printf("--------------------------------------------- \n");

    for (i = 1; i <= 100; i++) {
        if ((i % 6) != 0) {
            data++;
        }
    }
    printf("1 ~ 100중 6의 배수가 아닌 것은 %d입니다.\n", data);

    return 0;
}