#include<stdio.h>

int main() {

	/*int i = 0;

	while (i < 10)
	{
		printf(2 * i);
		i++;
	}*/

	/*int i = 0;*/
	
	/*while (true) {
		printf("Programming\n");
		if (i > 100)
			return;
		i++;
	}*/

	/*int i = 0;*/
	/*int sum = 0;

	do {
		printf("정수를 입력하세요 : \n");
		scanf_s("%d", &i);
		sum = sum + i;
	} while (i != 0);
	printf("총 합 : %d\n, sum")*/

	//while문으로 바꿔보기

	/*int i = 0;
	int sum = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &i);

		while ( i != 0 )  {
			sum = sum + i;
			printf("정수를 입력하세요 : ");
			scanf_s("%d", &i);
		} 
		printf("총 합 : %d\n, sum");*/


	//구구단 만들기 2단

	/*int dan = 0;
	printf("단을 입력하세요 : ");
		scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}*/

	//1월부터 12월까지 만들기 for문
		/*for (int i = 1; i <= 12; i++) {
			printf("%d월\n", i);
		}*/

	/*int a = 0;
	while (true) {
		if (a > 100) {
			break;
			
		}
		printf("a : %d\n", a);
		a++;
	}
	printf("a는 100보다 큽니다.");*/

	//continue문
	/*int a = 0;
	while (a < 100)
	{
		a++;
		if (a >= 80 && a < 90)
			continue;
		printf("a의 값은 %d\n", a);
	}*/

	//구구단 전체 만들기(2단부터 9단까지)
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}	
		printf("\n");
	}
	return 0;
}
	