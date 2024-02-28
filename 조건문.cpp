#include <stdio.h>

int main() {
    int a = 0;
    printf("정수를 입력하세요 : ");
    scanf_s("%d", &a);

    if (a > 0) 
    {
        printf("a는 %d보다 큽니다.", a);
    }
    if (a <= 0) 
    {
        printf("a는 %d보다 작거나 같습니다.", a);
    }

    return 0;
}