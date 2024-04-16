#include<iostream>

using namespace std;

template <class T> 

class SmartPointer 
{
private:
	T* p;

public:
	//SmartPointer(T *sp) : p(sp)
	//	//���� sp�� �������ڸ� �޾�����, p��� �����Ϳ� 
	//	//�� p = sp

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
	//���� �ʿ��� �����ڰ� �� �ִ�? ������ �����ε� �� ����ϸ� �ȴ�.
};

void main()
{
	SmartPointer<string> str(new string("test"));
	//������ ������ ��ó�� ��. �� new string("test")�� �ּҰ��� sp�� ����
	//sp = p�� ������, �� p�� �������ָ�, ����ϰ� �Ҹ��ڱ��� �� ������?
	cout << str.operator*() << endl;
	cout << *str << endl;
	//�ΰ��� ���� ��.
}