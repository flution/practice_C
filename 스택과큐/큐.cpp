#include<stdio.h>
#include<stdlib.h>

int* queue;
int qsize;
int head, tail;

int insert(int data)
{
	if ((tail + 1) % qsize == head ) { //큐 구조가 꽉 차서 다시 head와 같아진다면.
		return 0;
	}
	queue[tail] = data;
	tail = (tail + 1) % qsize; //서클 구조로 가려면 (tail+1) % qsize로 나누는거의 나머지?
	return 1;
}

int Delete() {
	int data;
	if (head == tail) //삭제할 게 없다면
	{
		return -1;
	}

	data = queue[head];
	head = (head + 1) % qsize;
	return data;

}

void main()
{
	//초기화
	qsize = 10;
	queue = (int*)malloc(qsize * sizeof(int));
	head = 0;
	tail = 0;

	for (int i = 0; i < 9; i++)
	{
		insert(i);
	}

	printf("가득찬 상태에서 삽입 : %s\n", insert(50) ? "성공" : "실패");

	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());

	free(queue);

}