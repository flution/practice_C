#include<iostream>
#include<memory>
#include<string>

using namespace std;

void main()
{
	auto_ptr<int> ptr1 = auto_ptr<int>(new int(10));
	shared_ptr<int> ptr2 = shared_ptr<int>(new int(50));

	
	cout << *ptr1 << endl; //지금까지 오토 포인터
	cout << *ptr2 << endl; //쉐어드 포인터.

}
