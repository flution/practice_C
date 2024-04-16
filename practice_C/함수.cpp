#include<stdio.h>.


//int Add(int a, int b)
//
//void print_hap(int result)
//{
//	printf("결과값은 %d 입니다. \n", result);
//}
//
//int func(int a)
//{
//	return a * 2;
//}
//
//
//void main(
//	{
//		int i = 5;
//		int j = 3;
//
//		int k = Add(i, j);
//
//		print_Hap(k);
//
//		int g = func(10);
//		printf("%d\n", g);
//	}
//
//	int Add(int a, int b)
//	{
//
//	}

//#include <stdio.h>

//int plus(int a, int b)
//{
//    return a + b;
//}
//
//int minus(int a, int b)
//{
//    return a - b;
//}
//
//int multiple(int a, int b)
//{
//    return a * b;
//}
//
//double divide(int a, int b)
//{
//    return (double)a / b;
//}
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//
//    printf("두 정수를 입력하세요 : ");
//    scanf_s("%d%d", &x, &y);
//
//    printf("두 수의 합 : %d\n", plus(x, y));
//    printf("두 수의 차 : %d\n", minus(x, y));
//    printf("두 수의 곱 : %d\n", multiple(x, y));
//    printf("두 수의 나누기 : %lf\n", divide(x, y));


// 두 수를 입력 받아서 최대값 최소값 구하는 함수 구하기.

//#include <stdio.h>
//
//void minmax(int a, int b)
//{
//    if (a > b) {
//        printf("최대값 : %d, 최소값 : %d\n", a, b);
//    }
//    else {
//        printf("최대값 : %d, 최소값 : %d\n", b, a);
//    }
//}
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    printf("두 수를 입력하세요 : ");
//    scanf_s("%d%d", &x, &y);
//    minmax(x, y);
//
//    return 0;
//}

//두 수를 비교하여 나오는 최대 최소값 확인하기
/*#include <stdio.h>

void minmax(int a, int b)
{
    if (a > b) {
        printf("최대값 : %d, 최소값 : %d\n", a, b);
    }
    else {
        printf("최대값 : %d, 최소값 : %d\n", b, a);
    }
}

int main()
{
    int x = 0;
    int y = 0;
    printf("두 수를 입력하세요 : ");
    scanf_s("%d%d", &x, &y);
    minmax(x, y);

    return 0*/;

    //스택(Stack) 만들기

    /*void func1();
    void func2();

    void main(void);
    {
        int val = 0;
        printf("첫 번째 메모리 할당 : val = 0\n");
        func1();
        printf("두 번째 메모리 소멸 : local = 10\n");

    }

    //void func1()
    //{
    //    int local = 10;
    //    printf("두 번째 메모리 할당 : local = 10\n");
    //    func2();
    //    printf("첫 번째 메모리 소멸 : local = 20\n");

    //}

    //void func2()
    //{
    //    int local = 20;
    //    printf("세 번째 메모리 할당 : local = 20\n");
    //}*/

     /*int Add(int a, int b ){
         int res = a + b;
         return res;
    }*/

    int global;

     void Add(int a, int b) 
     {
         global = a + b;
     }

     void main()
     {
         int a = 0;
         int b = 0;
         printf("두 수를 입력하세요 : ");
         scanf_s("%d%d", &a, &b);

         Add(a, b);
         printf("두 정수의 값의 합 : %d\m", global);
     }

     //#include <stdio.h>
//
//void func1();
//void func2();
//
//void main(void)
//{
//    int val = 0;
//    printf("첫 번째 메모리 할당 : val = 0\n");
//    func1();
//    printf("두 번째 메모리 소멸 : local = 10\n");
//
//}
//
//void func1()
//{
//    int local = 10;
//    printf("두 번째 메모리 할당 : local = 10\n");
//    func2();
//    printf("첫 번째 메모리 소멸 : local = 20\n");
//}
//
//void func2()
//{
//    int local = 20;
//    printf("세 번째 메모리 할당 : local = 20\n");
//}

//Stack 메모리 순서
//#include <stdio.h>
//
//void func1();
//void func2();
//
//void main(void)
//{
//    int val = 0;
//    printf("첫 번째 메모리 할당 : val = 0\n");
//    func1();
//    printf("두 번째 메모리 소멸 : local = 10\n");
//
//}
//
//void func1()
//{
//    int local = 10;
//    printf("두 번째 메모리 할당 : local = 10\n");
//    func2();
//    printf("첫 번째 메모리 소멸 : local = 20\n");
//}
//
//void func2()
//{
//    int local = 20;
//    printf("세 번째 메모리 할당 : local = 20\n");
//}

