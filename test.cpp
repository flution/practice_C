#include<stdio.h>

void selectOrder(int price) {
	if (price == 100) {
		printf("��Ŀ��");
	}
	else if (price == 200) {
		printf("��ũĿ��");
	}
	else {
		printf("�ٽ� �������ּ���.");
	}

}

int main()
{
	int count = 0;

	printf("�˸��� �ݾ��� �־� �ּ��� : ");
	scanf_s("%d", &count);
	selectOrder(count);
	}