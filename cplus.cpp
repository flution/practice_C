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

using namespace std;

//int main()
//{
//	int a = 10;
//}s
//
//	cout << a << endl;
//	return 0;
//}

void func(int a = 10, int b = 20)
{
	cout << "�� �������� ��� : " << a << b << endl;

}

//�׷� ���⼭�� ������ ��� �ؾ���?
void main()
{
	func();
	func(100);
	func(100, 200);
}