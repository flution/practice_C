#include<stdio.h>

void main()
{
	int array[5];

	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��ϼ��� : ";
		scanf_s("%d", &array[i]);

	}

	printf("�迭 ����� ��� : %d, %d, %d, %d, %d\n", array[1], array[2], array[3], array[4], array[5])
}