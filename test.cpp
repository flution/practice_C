#include<stdio.h>

int main() {
	
	int season = 0;

	printf("������ �� �� �ΰ��� : ");
	scanf_s("%d", &season);

	switch (season)
	{
	case 1:
		printf("%d���� �ܿ��Դϴ�.\n", 1);
		break;
	case 2:
		printf("%d���� �ܿ��Դϴ�.\n", 2);
		break;
	case 3:
		printf("%d���� ���Դϴ�.\n", 3);
		break;
	case 4:
		printf("%d���� ���Դϴ�.\n", 4);
		break;
	case 5:
		printf("%d���� ���Դϴ�.\n", 5);
		break;
	case 6:
		printf("%d���� �����Դϴ�.\n", 6);
		break;
	case 7:
		printf("%d���� �����Դϴ�.\n", 7);
		break;
	case 8:
		printf("%d���� �����Դϴ�.\n", 8);
		break;
	case 9:
		printf("%d���� �����Դϴ�.\n", 9);
		break;
	case 10:
		printf("%d���� �����Դϴ�.\n", 10);
		break;
	case 11:
		printf("%d���� �����Դϴ�.\n", 11);
		break;
	case 12:
		printf("%d���� �ܿ��Դϴ�.\n", 12);
		break;
	default:
		printf("%d�� ������ �����.");
		break;
	}
