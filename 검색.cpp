#include <stdio.h>

//����
//int main()
//{
//	int arr[] = { 6, 4, 2, 3, 7, 8, 5, 9, 10, 1 };
//	int a = 0;
//
//	//�˻�
//	//8�� ã�� �;��
//	printf("ã����� ���� �Է��� �ּ��� : ");
//	scanf_s("%d", &a);
//		
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		if (arr[i] == a)
//		{
//			printf("ã���ô� ���� ��ġ�� %d���� �ֽ��ϴ�..", i + 1);
//				return 0;
//		}
//	}
//	printf("ã���ô� ���� �迭�� �����ϴ�.");
//	return 0;
//
//}
//
////���� Ž��
//int LinearSearch(int* pArr, int size, int search)
//{
//    for (int i = 0; i < size; i++) {
//        if (search == pArr[i])
//        {
//            printf("ã���ô� ���� ��ġ�� %d���� �ֽ��ϴ�.", i + 1);
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 6, 4, 2, 3, 7, 8, 5, 9, 10, 1 };
//    int a = 0;
//    int length = sizeof(arr) / sizeof(arr[0]);
//
//    printf("ã����� ���� �Է��� �ּ��� : ");
//    scanf_s("%d", &a);
//
//    int ret = LinearSearch(arr, length, a);
//
//    if (ret == -1) {
//        printf("ã���ô� ���� �迭�� �����ϴ�.");
//    }
//    return 0;
//}

void main()
{
	int arr[] = { 2,6,13,19,21,23,29,35,48,62,89,90,95,99,102,109,208,629 };

	int key = 0;

	int size = sizeof(arr) / sizeof(arr[0]);

	int upper, lower, middle;

	lower = 0;
	upper = size - 1;

	printf("�˻��� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &key);

	for (;;)
	{
		middle = (lower + upper) / 2;
		
		if (arr[middle] == key)
		{
			printf_s("�˻� �Ǿ����ϴ�.");
			break;
		}

		if (arr[middle] > key)
		{
			upper = middle - 1;
		}
		else
		{
			lower = middle + 1;
		}

		if (upper <= lower) {
			printf("�˻����� �ʾҽ��ϴ�.");
			break;
		}

	}
}

