#include<iostream>
#include<string.h>

using namespace std;

class SingletonClass  //외부 객체를 생성할 수 없게 만들어버리는 패턴이구나.
{
private: //변수는 프라이빗
	static SingletonClass* instance; //싱글톤클래스라는 타입으로, instance라는 변수를 선언.
	int total;


public:  //함수는 퍼블릭.
	SingletonClass() {
		total = 0;
	}
	~SingletonClass() {
		delete instance;
	}
	static SingletonClass* getInstance() {
		if (instance == NULL) {
			instance = new SingletonClass();
			
		}
		return instance;
	}
	
	void ShowMessage() {
		cout << "싱글톤패턴 실행" << endl;
	}
	//필요한 함수들이 있으면, 이 밑에 넣으면 된다.

	void addValue(int value) {
		total = total + value;
	}
	int getTotalValue() {
		return total;
	}
	void destroy()
	{
		if (instance != NULL) {
			delete instance;
			instance = NULL;
			cout << "instance  해제" << endl;
		}
	}
};

SingletonClass* SingletonClass::instance = NULL;
//왜 포인터를 붙여야하나, NULL은 왜 들어가야 하는가?

void main()
{
	//SingletonClass sc; //객체를 외부에서 선언해서 실행할 수 없다!
	/*SingletonClass::getInstance().ShowMessage();*/ //instance.ShowMessage();
	//퍼블릭에서 참조연산자를 통해 instance를 베껴온 후에 외부에서 쓰도록 만든다.
	//다만 본체는 private에 갇혀 있음으로써 1:다수를 관장하게 한다.
	SingletonClass* ins1 = SingletonClass::getInstance();
	SingletonClass* ins2 = SingletonClass::getInstance();
	SingletonClass* ins3 = SingletonClass::getInstance();

	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance()->destroy(); //distroy 함수를 만들어줌으로서 메모리릭을 방지한다.
}