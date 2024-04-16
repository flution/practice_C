#include <stdio.h>

//문제
//int main()
//{
//	int arr[] = { 6, 4, 2, 3, 7, 8, 5, 9, 10, 1 };
//	int a = 0;
//
//	//검색
//	//8을 찾고 싶어요
//	printf("찾고싶은 수를 입력해 주세요 : ");
//	scanf_s("%d", &a);
//		
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		if (arr[i] == a)
//		{
//			printf("찾으시는 수의 위치는 %d번에 있습니다..", i + 1);
//				return 0;
//		}
//	}
//	printf("찾으시는 수가 배열에 없습니다.");
//	return 0;
//
//}
//
////순차 탐색
//int LinearSearch(int* pArr, int size, int search)
//{
//    for (int i = 0; i < size; i++) {
//        if (search == pArr[i])
//        {
//            printf("찾으시는 수의 위치는 %d번에 있습니다.", i + 1);
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
//    printf("찾고싶은 수를 입력해 주세요 : ");
//    scanf_s("%d", &a);
//
//    int ret = LinearSearch(arr, length, a);
//
//    if (ret == -1) {
//        printf("찾으시는 수가 배열에 없습니다.");
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

	printf("검색할 숫자를 입력해주세요 : ");
	scanf_s("%d", &key);

	for (;;)
	{
		middle = (lower + upper) / 2;
		
		if (arr[middle] == key)
		{
			printf_s("검색 되었습니다.");
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
			printf("검색되지 않았습니다.");
			break;
		}

	}
}

