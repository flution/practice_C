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
		printf("������ �Է��ϼ��� : \n");
		scanf_s("%d", &i);
		sum = sum + i;
	} while (i != 0);
	printf("�� �� : %d\n, sum")*/

	//while������ �ٲ㺸��

	/*int i = 0;
	int sum = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &i);

		while ( i != 0 )  {
			sum = sum + i;
			printf("������ �Է��ϼ��� : ");
			scanf_s("%d", &i);
		} 
		printf("�� �� : %d\n, sum");*/


	//������ ����� 2��

	/*int dan = 0;
	printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}*/

	//1������ 12������ ����� for��
		/*for (int i = 1; i <= 12; i++) {
			printf("%d��\n", i);
		}*/

	/*int a = 0;
	while (true) {
		if (a > 100) {
			break;
			
		}
		printf("a : %d\n", a);
		a++;
	}
	printf("a�� 100���� Ů�ϴ�.");*/

	//continue��
	/*int a = 0;
	while (a < 100)
	{
		a++;
		if (a >= 80 && a < 90)
			continue;
		printf("a�� ���� %d\n", a);
	}*/

	//������ ��ü �����(2�ܺ��� 9�ܱ���)
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}	
		printf("\n");
	}
	return 0;
}
	