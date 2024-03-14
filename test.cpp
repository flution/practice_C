#include <stdio.h>

void max(int* a)
{
    int max;

    if (a[0] > a[1])
    {
        max = a[0];
    }
    else
    {
        max = a[1];
    }
    printf("두 수 중에서 큰 수는 %d 입니다. \n", max);
}

int main() {
    
    int arr[2];


    printf("두 개의 값을 입력하세요 : ");
    for (int i = 0; i < 2; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    max(arr);
    
    return 0;
}