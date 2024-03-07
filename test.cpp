#include<stdio.h>

void selectOrder(int price) {
	if (price == 100) {
		printf("블랙커피");
	}
	else if (price == 200) {
		printf("밀크커피");
	}
	else {
		printf("다시 선택해주세요.");
	}

}

int main()
{
	int count = 0;

	printf("알맞은 금액을 넣어 주세요 : ");
	scanf_s("%d", &count);
	selectOrder(count);
	}