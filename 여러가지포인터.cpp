#include<stdio.h>
#include<string.h>

int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

void main()
{
	//void ������
	/*void* a;
	int b = 1234;

	a = &b;
	printf("%x\n", a);
	printf("%d\n", *(int*)a);*/

	//�Լ� ������
	//int x, y;
	//int (*fPtr)(int a, int b); //���������� ��Ұ� ���ƾ��Ѵ�. ������ ���� �Լ��� �Ѿ� �� �� �ִ�.

	//printf("�� ������ �Է��ϼ��� : ");
	//scanf_s("%d%d", &x, &y);

	////int res = Plus(x,y);
	//fPtr = Plus;
	//int res = fPtr(x, y);
	//printf("��� = %d\n", res);

	//fPtr = Minus;
	//res = fPtr(x, y);
	//printf("��� = %d\n", res);

	//NULL ������

	char str[] = "Love";
	char* p;

	p = strchr(str, 'v');
	
	if (p != NULL)
	{
		*p = 'b';
		printf("���� ��� : %s\n", str);
	}
	else
	{
		printf("NULL�� �����Ͽ����ϴ�. \n");
	}

}