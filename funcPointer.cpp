#include<stdio.h>

//void func(int* pArr) //int *pArr = arr; arr를 참조해라.
//{
//	printf("pArr : %x\n", pArr);
//
//	for (int i = 0; i < 5; i++) {
//		printf("pArr : %x\n", (pArr + 1));
//	}
//
//	printf("pArr : %x\n", *pArr);
//	printf("pArr : %x\n", *(pArr + 1));
//	printf("pArr : %x\n", pArr[2]);
//	printf("pArr : %x\n", pArr[3]);
//	printf("pArr : %x\n", pArr[4]);
//}
//
//void main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	func(arr); // 배열의 이름을 그냥 넘겨주면, 배열이 가지고 있는 메모리를 참조해라.
//
//	printf("arr : %x\n", arr);
//}

//int func(int* pArr, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum = sum + *(pArr + i);
//	}
//	return sum;
//}
//
//void main() {
//
//	int arr[] = { 1,2,3,4,5 };
//	int* pArr = arr;
//
//	int size = sizeof(arr) / sizeof(arr[0]); //sizeof = 20? 왜? ??? 이해 안가네.. 왜지?
//
//	int sumArr = func(arr, size);
//
//	printf("누적 합 : %d\n", sumArr);
//}

//스왑 함수
void Swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("a = %d, b = %d \n", a, b);
}

void main()
{
	int x = 10;
	int y = 20;
	printf("x = %d, y = %d \n", x, y);
	Swap(&x, &y);
	printf("x = %d, y = %d \n", x, y);
}

//void callReference(int* b);
//int main(void)
//{
//	int a = 1;
//	callReference(&a);
//	printf("실인수 a의 출력 : %d\n", a);
//	
//	return 0;
//
//}
//
//void callReference(int* b)
//{
//	*b = *b + 3;
//	printf("형식인수 *b의 출력 : %d\n", *b);
//
//}