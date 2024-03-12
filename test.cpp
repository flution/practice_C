#include<stdio.h>
#include<string.h>

struct object
{
	char name[10];
	int height;
	int weight;
}obj1, *pA;



void main()
{
	obj1.height = 30;
		obj1.weight = 2;
		strcpy_s(obj1.name, "책");
		printf("보낼 물건의 정보 : %s, %dcm, %dkg", obj1.name, obj1.height, obj1.weight);
	/*st1.age = 25;
	st1.height = 160;
	strcpy_s(st1.name, "lee");
	printf("이름 : %s, 나이 : %d, 키 : %d\n", st1.name, st1.age, st1.height);*/
}