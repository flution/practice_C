#include <stdio.h>

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int length = sizeof(a) / sizeof(a[0]);

    printf("�迭�� ��� ���: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("�迭�� �ּ� ���: ");
    for (int i = 0; i < length; ++i) {
        printf("%p ", (void*)&a[i]);
    }
    printf("\n");

    printf("�迭�� �̸� ���: ");
    printf("%p\n", (void*)a);

    return 0;
}