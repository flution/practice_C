#include<stdio.h>.


//int Add(int a, int b)
//
//void print_hap(int result)
//{
//	printf("������� %d �Դϴ�. \n", result);
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
//    printf("�� ������ �Է��ϼ��� : ");
//    scanf_s("%d%d", &x, &y);
//
//    printf("�� ���� �� : %d\n", plus(x, y));
//    printf("�� ���� �� : %d\n", minus(x, y));
//    printf("�� ���� �� : %d\n", multiple(x, y));
//    printf("�� ���� ������ : %lf\n", divide(x, y));


// �� ���� �Է� �޾Ƽ� �ִ밪 �ּҰ� ���ϴ� �Լ� ���ϱ�.

//#include <stdio.h>
//
//void minmax(int a, int b)
//{
//    if (a > b) {
//        printf("�ִ밪 : %d, �ּҰ� : %d\n", a, b);
//    }
//    else {
//        printf("�ִ밪 : %d, �ּҰ� : %d\n", b, a);
//    }
//}
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    printf("�� ���� �Է��ϼ��� : ");
//    scanf_s("%d%d", &x, &y);
//    minmax(x, y);
//
//    return 0;
//}

//�� ���� ���Ͽ� ������ �ִ� �ּҰ� Ȯ���ϱ�
/*#include <stdio.h>

void minmax(int a, int b)
{
    if (a > b) {
        printf("�ִ밪 : %d, �ּҰ� : %d\n", a, b);
    }
    else {
        printf("�ִ밪 : %d, �ּҰ� : %d\n", b, a);
    }
}

int main()
{
    int x = 0;
    int y = 0;
    printf("�� ���� �Է��ϼ��� : ");
    scanf_s("%d%d", &x, &y);
    minmax(x, y);

    return 0*/;

    //����(Stack) �����

    /*void func1();
    void func2();

    void main(void);
    {
        int val = 0;
        printf("ù ��° �޸� �Ҵ� : val = 0\n");
        func1();
        printf("�� ��° �޸� �Ҹ� : local = 10\n");

    }

    //void func1()
    //{
    //    int local = 10;
    //    printf("�� ��° �޸� �Ҵ� : local = 10\n");
    //    func2();
    //    printf("ù ��° �޸� �Ҹ� : local = 20\n");

    //}

    //void func2()
    //{
    //    int local = 20;
    //    printf("�� ��° �޸� �Ҵ� : local = 20\n");
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
         printf("�� ���� �Է��ϼ��� : ");
         scanf_s("%d%d", &a, &b);

         Add(a, b);
         printf("�� ������ ���� �� : %d\m", global);
     }

     //#include <stdio.h>
//
//void func1();
//void func2();
//
//void main(void)
//{
//    int val = 0;
//    printf("ù ��° �޸� �Ҵ� : val = 0\n");
//    func1();
//    printf("�� ��° �޸� �Ҹ� : local = 10\n");
//
//}
//
//void func1()
//{
//    int local = 10;
//    printf("�� ��° �޸� �Ҵ� : local = 10\n");
//    func2();
//    printf("ù ��° �޸� �Ҹ� : local = 20\n");
//}
//
//void func2()
//{
//    int local = 20;
//    printf("�� ��° �޸� �Ҵ� : local = 20\n");
//}

//Stack �޸� ����
//#include <stdio.h>
//
//void func1();
//void func2();
//
//void main(void)
//{
//    int val = 0;
//    printf("ù ��° �޸� �Ҵ� : val = 0\n");
//    func1();
//    printf("�� ��° �޸� �Ҹ� : local = 10\n");
//
//}
//
//void func1()
//{
//    int local = 10;
//    printf("�� ��° �޸� �Ҵ� : local = 10\n");
//    func2();
//    printf("ù ��° �޸� �Ҹ� : local = 20\n");
//}
//
//void func2()
//{
//    int local = 20;
//    printf("�� ��° �޸� �Ҵ� : local = 20\n");
//}

