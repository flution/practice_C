#include<stdio.h>

void main()
{
	int array[5];

	for (int i = 0; i < 5; i++)
	{
		printf("정수를 입력하세요 : ";
		scanf_s("%d", &array[i]);

	}

	printf("배열 요소의 출력 : %d, %d, %d, %d, %d\n", array[1], array[2], array[3], array[4], array[5])
}