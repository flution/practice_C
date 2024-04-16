#include<stdio.h>
#include<string.h>

//struct student
//{
//	char name[10];
//	int age;
//	int height;
//}st1, st2, *pA;
//
//union unTemp 
//{
//	char a;
//	int b;
//	double c;
//}un;

////enum체
//enum Week
//{
//	sun = 1.
//	mon,
//	tue,
//	wed,
//	thu,
//	fri,
//	sat
//
//};
//
//void main()
//{
//
//	int day;
//	printf("요일을 선택하세요 : ");
//	scanf_s("%d", &day);
//
//	switch (day)
//	{
//		case sun;
//			printf("일요일엔 짜파게티\n");
//			break;
//		case mon;
//			printf("월요일엔 스트레스\n");
//			break;
//		case tue;
//			printf("화요일엔 쉬어요\n");
//			break;
//		case wed;
//			printf("수요일엔 빨간장미를\n");
//			break;
//		case thu;
//			printf("목요일엔 뭐하지?\n");
//			break;
//		case fri;
//			printf("금요일에 만나요\n");
//			break;
//		case sat;
//			printf("토요일엔 나들이\n");
//			break;
//		default
//			printf("잘못 입력하셨습니다.\n");
//			break;
//
//	}

	//공용체의 경우
	//printf("%d\n", sizeof(un.a)); // 1 
	//printf("%d\n", sizeof(un.b)); // 4 
	//printf("%d\n", sizeof(un.c)); // 8

	//un.a = 'A';
	//printf("%c\n", un.a);
	//un.b = 100;
	//printf("%d\n", un.b);
	//un.c = 3.14;
	//printf("%f\n", un.c);
	//printf("%c\n", un.a);


	//포인터으로는 간접 참조만 가능.
	/*pA = &st1;
	pA->age = 25;
	pA->height = 160;
	strcpy_s(pA, "lee");*/

	//직접 참조의 예시
	/*st1.age = 25;
	st1.height = 160;
	strcpy_s(st1.name, "lee");
	printf("이름 : %s, 나이 : %d, 키 : %d\n", st1.name, st1.age, st1.height);*/
