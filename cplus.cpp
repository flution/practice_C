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
//	cout << "두 전달인자 출력 : " << a << b << endl;
//
//}
//
////그럼 여기서의 개행은 어떻게 해야함?
//void main()
//{
//	func();
//	func(100);
//	func(100, 200);
//}

//지역변수와 전역변수, C++에서만 사용할 수 있는 전역변수의 스코프.
//using namespace std;

//int nTemp = 10;
//
//void main()
//{
//	{
//		int ntemp = 20;
//		cout << "nTemp = " << nTemp << endl;
//		cout << "nTemp = " << ::nTemp << endl; // ::(스코프 연산자) 앞에 아무것도 없다면, 전역변수를 나타내라.
//	}
//	
//}

//함수의 오버로딩 사용해보기
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