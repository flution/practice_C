#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num;
	int* student;
	int total = 0;

	printf("�л����� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num); //���� �޸��� student�� �ش� ������ �����ϰڴ�. �³�?

	if (student == NULL) 
	{
		printf("�޸𸮰� �����Ͽ� �޸𸮸� �Ҵ��� �� �����ϴ�.");
			return;
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d��° �л��� ���� �Է� : ", i + 1);
		scanf_s("%d", &student[i]);

	}

	for (int i = 0; i < num; i++)
	{
		total = total + student[i];

	}

	printf("���� %d, ��� %d\n", total, total/num);
	free(student);
}