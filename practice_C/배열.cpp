#include<stdio.h>

void main()
{
	/*int array[5];

	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &array[i]);

	}

	printf("�迭 ����� ��� : %d, %d, %d, %d, %d\n", array[1], array[2], array[3], array[4], array[5])*/

	int array[5] = { 1,2,3,4,5 };
	int array2[5] = {};

		for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
		{
			array[i] = array2[i];
			printf("������ �Է��ϼ��� : ");
			scanf_s("%d", &array2[i]);
	
		}

		//array�� ����

		int total = 0;
		for (int i = 0; i < 5; i++)
		{
			total = total + array[i];
	}
	
	double avg = total / 5;

	printf("�迭 ����� ��� : %d, %f\n", total, avg);
}

