#include<iostream>

//void func()
//{
//	std::cout << "A�б� �ּ�" << std::endl;
//}
//
//void func()
//{
//	std::cout << " B�б� �ּ�" << std::endl;
//
//}

//using namespace std;

//int main()
//{
//	int a = 10;
//}s
//
//	cout << a << endl;
//	return 0;
//}

//void func(int a = 10, int b = 20)
//{
//	cout << "�� �������� ��� : " << a << b << endl;
//
//}
//
////�׷� ���⼭�� ������ ��� �ؾ���?
//void main()
//{
//	func();
//	func(100);
//	func(100, 200);
//}

//���������� ��������, C++������ ����� �� �ִ� ���������� ������.
//using namespace std;

//int nTemp = 10;
//
//void main()
//{
//	{
//		int ntemp = 20;
//		cout << "nTemp = " << nTemp << endl;
//		cout << "nTemp = " << ::nTemp << endl; // ::(������ ������) �տ� �ƹ��͵� ���ٸ�, ���������� ��Ÿ����.
//	}
//	
//}

//�Լ��� �����ε� ����غ���
using namespace std;


int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

char Add(char a, char b)
{
	return a + b;
}


void main()
{
	char ch = '1' - '0';
	cout << Add(10, 20) << endl;
	cout << Add(3.14, 1.59) << endl;
	cout << Add('A', 'B') << endl;

}