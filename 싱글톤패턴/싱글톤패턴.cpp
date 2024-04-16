#include<iostream>
#include<string.h>

using namespace std;

class SingletonClass  //�ܺ� ��ü�� ������ �� ���� ���������� �����̱���.
{
private: //������ �����̺�
	static SingletonClass* instance; //�̱���Ŭ������� Ÿ������, instance��� ������ ����.
	int total;


public:  //�Լ��� �ۺ�.
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
		cout << "�̱������� ����" << endl;
	}
	//�ʿ��� �Լ����� ������, �� �ؿ� ������ �ȴ�.

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
			cout << "instance  ����" << endl;
		}
	}
};

SingletonClass* SingletonClass::instance = NULL;
//�� �����͸� �ٿ����ϳ�, NULL�� �� ���� �ϴ°�?

void main()
{
	//SingletonClass sc; //��ü�� �ܺο��� �����ؼ� ������ �� ����!
	/*SingletonClass::getInstance().ShowMessage();*/ //instance.ShowMessage();
	//�ۺ����� ���������ڸ� ���� instance�� ������ �Ŀ� �ܺο��� ������ �����.
	//�ٸ� ��ü�� private�� ���� �������ν� 1:�ټ��� �����ϰ� �Ѵ�.
	SingletonClass* ins1 = SingletonClass::getInstance();
	SingletonClass* ins2 = SingletonClass::getInstance();
	SingletonClass* ins3 = SingletonClass::getInstance();

	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance()->destroy(); //distroy �Լ��� ����������μ� �޸𸮸��� �����Ѵ�.
}