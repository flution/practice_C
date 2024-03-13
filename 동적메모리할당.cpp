#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num;
	int* student;
	int total = 0;

	printf("학생수를 입력하세요 : ");
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num); //동적 메모리인 student를 해당 값으로 선언하겠다. 맞나?

	if (student == NULL) 
	{
		printf("메모리가 부족하여 메모리를 할당할 수 없습니다.");
			return;
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 학생의 성적 입력 : ", i + 1);
		scanf_s("%d", &student[i]);

	}

	for (int i = 0; i < num; i++)
	{
		total = total + student[i];

	}

	printf("총점 %d, 평균 %d\n", total, total/num);
	free(student);
}