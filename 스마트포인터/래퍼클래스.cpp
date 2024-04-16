#include<iostream>

using namespace std;

template <class T> 

class SmartPointer 
{
private:
	T* p;

public:
	//SmartPointer(T *sp) : p(sp)
	//	//내가 sp에 전달인자를 받았을때, p라는 데이터에 
	//	//즉 p = sp

	SmartPointer(T *sp) {
		p = sp;
	}
	~SmartPointer()
	{
		delete p;
	}
	
	T& operator*() const {
		return *p;
	}
	//만약 필요한 연산자가 더 있다? 연산자 오버로딩 더 사용하면 된다.
};

void main()
{
	SmartPointer<string> str(new string("test"));
	//위에서 선언한 것처럼 들어감. 즉 new string("test")의 주소값은 sp에 들어가고
	//sp = p기 때문에, 저 p를 제거해주면, 깔끔하게 소멸자까지 다 들어가겠죠?
	cout << str.operator*() << endl;
	cout << *str << endl;
	//두개는 같은 것.
}