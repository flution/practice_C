#include<stdio.h>

int main() {
	
	int a, b, c;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	int sum = a + b + c;
	float avg = sum / 3.0f;

	printf("�� ������ �� : %d\n", sum); 
	printf("�� ������ ��� : %.2f", avg);

	return 0;

}
