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
	//void 포인터
	/*void* a;
	int b = 1234;

	a = &b;
	printf("%x\n", a);
	printf("%d\n", *(int*)a);*/

	//함수 포인터
	//int x, y;
	//int (*fPtr)(int a, int b); //전달인자의 요소가 같아야한다. 형식이 같은 함수만 넘어 올 수 있다.

	//printf("두 정수를 입력하세요 : ");
	//scanf_s("%d%d", &x, &y);

	////int res = Plus(x,y);
	//fPtr = Plus;
	//int res = fPtr(x, y);
	//printf("결과 = %d\n", res);

	//fPtr = Minus;
	//res = fPtr(x, y);
	//printf("결과 = %d\n", res);

	//NULL 포인터

	char str[] = "Love";
	char* p;

	p = strchr(str, 'v');
	
	if (p != NULL)
	{
		*p = 'b';
		printf("변경 결과 : %s\n", str);
	}
	else
	{
		printf("NULL을 리턴하였습니다. \n");
	}

}