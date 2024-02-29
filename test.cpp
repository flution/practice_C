#include<stdio.h>

int main() {
	
	int season = 0;

	printf("지금은 몇 월 인가요 : ");
	scanf_s("%d", &season);

	switch (season)
	{
	case 1:
		printf("%d월은 겨울입니다.\n", 1);
		break;
	case 2:
		printf("%d월은 겨울입니다.\n", 2);
		break;
	case 3:
		printf("%d월은 봄입니다.\n", 3);
		break;
	case 4:
		printf("%d월은 봄입니다.\n", 4);
		break;
	case 5:
		printf("%d월은 봄입니다.\n", 5);
		break;
	case 6:
		printf("%d월은 여름입니다.\n", 6);
		break;
	case 7:
		printf("%d월은 여름입니다.\n", 7);
		break;
	case 8:
		printf("%d월은 여름입니다.\n", 8);
		break;
	case 9:
		printf("%d월은 가을입니다.\n", 9);
		break;
	case 10:
		printf("%d월은 가을입니다.\n", 10);
		break;
	case 11:
		printf("%d월은 가을입니다.\n", 11);
		break;
	case 12:
		printf("%d월은 겨울입니다.\n", 12);
		break;
	default:
		printf("%d월 같은건 없어요.");
		break;
	}
