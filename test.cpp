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
    printf("�� �� �߿��� ū ���� %d �Դϴ�. \n", max);
}

int main() {
    
    int arr[2];


    printf("�� ���� ���� �Է��ϼ��� : ");
    for (int i = 0; i < 2; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    max(arr);
    
    return 0;
}