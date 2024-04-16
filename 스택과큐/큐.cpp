#include<stdio.h>
#include<stdlib.h>

int* queue;
int qsize;
int head, tail;

int insert(int data)
{
	if ((tail + 1) % qsize == head ) { //ť ������ �� ���� �ٽ� head�� �������ٸ�.
		return 0;
	}
	queue[tail] = data;
	tail = (tail + 1) % qsize; //��Ŭ ������ ������ (tail+1) % qsize�� �����°��� ������?
	return 1;
}

int Delete() {
	int data;
	if (head == tail) //������ �� ���ٸ�
	{
		return -1;
	}

	data = queue[head];
	head = (head + 1) % qsize;
	return data;

}

void main()
{
	//�ʱ�ȭ
	qsize = 10;
	queue = (int*)malloc(qsize * sizeof(int));
	head = 0;
	tail = 0;

	for (int i = 0; i < 9; i++)
	{
		insert(i);
	}

	printf("������ ���¿��� ���� : %s\n", insert(50) ? "����" : "����");

	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());

	free(queue);

}