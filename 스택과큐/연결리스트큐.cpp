#include<stdio.h>
#include<stdlib.h>

struct Node { // ����ü�� Node�� ������ ����Ѵ�.
	int value; // ���� ���� ������ ��
	Node* prev; // �� ����� �ּҰ�
	Node* next; // �� ����� �ּҰ�
};

Node* head; //ù ���� ��尡 �־�� �ϹǷ� ��带 �����Ѵ�.

int insert(int data)
{
	Node* New; //malloc���� ����ϱ�, �޾��� nodeŸ���� �����Ͱ� �ϳ� �ʿ��ϴ�.
	Node* tail;
	 
	for (tail = head; tail->next; tail = tail->next) //2��° ��带 ���ؼ�..?
	{

	}

	New = (Node*)malloc(sizeof(Node)); 
	New->value = data; //������� ������
	New->next = NULL; // �ڿ� ��ũ�� ������ �ϴ� NULL ��ȯ.
	New->prev = tail; // ����� �ּҰ�
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