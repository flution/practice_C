#include<stdio.h>

int main() {
	
	int a, b, c;

	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	int sum = a + b + c;
	float avg = sum / 3.0f;

	printf("세 정수의 합 : %d\n", sum); 
	printf("세 정수의 평균 : %.2f", avg);

	return 0;

}
