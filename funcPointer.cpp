#include<stdio.h>

//void func(int* pArr) //int *pArr = arr; arr�� �����ض�.
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
//	func(arr); // �迭�� �̸��� �׳� �Ѱ��ָ�, �迭�� ������ �ִ� �޸𸮸� �����ض�.
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
//	int size = sizeof(arr) / sizeof(arr[0]); //sizeof = 20? ��? ??? ���� �Ȱ���.. ����?
//
//	int sumArr = func(arr, size);
//
//	printf("���� �� : %d\n", sumArr);
//}

//���� �Լ�
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
//	printf("���μ� a�� ��� : %d\n", a);
//	
//	return 0;
//
//}
//
//void callReference(int* b)
//{
//	*b = *b + 3;
//	printf("�����μ� *b�� ��� : %d\n", *b);
//
//}