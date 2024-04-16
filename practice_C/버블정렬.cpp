#include<stdio.h>
#include<string.h>

void Swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	* b = temp;
}

//버블 sort 함수 따로 만들기. (추가과제)
void BubbleSort(char str[], int num) {
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			if (str[j] > str[j + 1]) {
				Swap(&str[j], &str[j + 1]);
			}
		}
	}
}

void SelectedSort(char str[], int num) {
	int minidx = 0;
	int minidx2 = 0;
	for (int i = 0; i < num - 1; i++) {
		minidx = i;
		for (int j = i + 1, minidx2 = i; j < num; j++) {
			if (str[minidx] > str[j]) {
				minidx = j;
			}
		}
		if (minidx != i) {
			Swap(&str[minidx], &str[i]);
		}
	}
}


void main()
{
	char str[] = "javascript";
	int num = strlen(str);

	printf("정렬 전의 문자열 %s\n", str);

	//BubbleSort(str, num);
	SelectedSort(str, num);

	printf("정렬된 문자열 %s\n", str);
}