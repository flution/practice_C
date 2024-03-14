#include<iostream>

//void func()
//{
//	std::cout << "A학급 주성" << std::endl;
//}
//
//void func()
//{
//	std::cout << " B학급 주성" << std::endl;
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
	cout << "두 전달인자 출력 : " << a << b << endl;

}

//그럼 여기서의 개행은 어떻게 해야함?
void main()
{
	func();
	func(100);
	func(100, 200);
}