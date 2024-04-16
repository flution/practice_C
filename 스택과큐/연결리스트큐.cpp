#include<stdio.h>
#include<stdlib.h>

struct Node { // 구조체로 Node를 선언해 줘야한다.
	int value; // 담기는 실제 데이터 값
	Node* prev; // 전 노드의 주소값
	Node* next; // 후 노드의 주소값
};

Node* head; //첫 노드는 헤드가 있어야 하므로 헤드를 선언한다.

int insert(int data)
{
	Node* New; //malloc으로 만드니까, 받아줄 node타입의 포인터가 하나 필요하다.
	Node* tail;
	 
	for (tail = head; tail->next; tail = tail->next) //2번째 노드를 위해서..?
	{

	}

	New = (Node*)malloc(sizeof(Node)); 
	New->value = data; //밸류값은 데이터
	New->next = NULL; // 뒤에 링크가 없으니 일단 NULL 반환.
	New->prev = tail; // 헤드의 주소값
	tail->next = New;
}

int Delete()
{
	int data;
	Node* Target = head->next;
	
	if (Target == NULL)
	{
		return -1;
	}

	data = Target->value;
	head->next = Target->next;

	if (head->next) {
		head->next->prev = head;

	}
	free(Target);
	return data;
}


void main()
{
	head = (Node*)malloc(sizeof(Node));
	head->prev = NULL;
	head->next = NULL;

	for (int i = 0; i < 100; i++)
	{
		insert(i + 1);
	}

	for (int i = 0; i < 100; i++)
	{
		printf("%d ", Delete());
	}

}