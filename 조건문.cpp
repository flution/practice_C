#include <stdio.h>

int main() {
    int a = 0;
    printf("������ �Է��ϼ��� : ");
    scanf_s("%d", &a);

    if (a > 0) 
    {
        printf("a�� %d���� Ů�ϴ�.", a);
    }
    if (a <= 0) 
    {
        printf("a�� %d���� �۰ų� �����ϴ�.", a);
    }

    return 0;
}