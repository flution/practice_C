#include<iostream>

using namespace std;


class Employee {
public:
	Employee() {
		strName = NULL; //������ ����Ʈ �����ڿ��� NULL�� �Ϲ���.
		strAddr = NULL; //��������.
		cout << "1. Employee ������ ȣ��" << endl;
	}
		
	Employee(const char* pName, const char* pAddr) {
		cout << "1. ���ڰ� 2���� ������ ȣ��" << endl;
		/*strName = pName; //������ǵǼ� ���� �� ������..
		strAddr = pAddr;*/
		strName = new char [strlen(pName) + 1]; //strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1]; //strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
	}
	~Employee() {
		delete[] strName;
		delete[] strAddr;
		cout << "1. Employee �Ҹ��� ȣ��" << endl;
	}
	void DisplayEmployee() {
		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
	}
	virtual	double PayCheck() const = 0;
		//�����͸� �ޱ� ����, ���ڸ� �ϳ� �� 0.0���� �߰���
		//�׸��� virtual�� �߰������μ� �����Լ��� ������.
		//���� �Լ��� ������, ������ ���� �Լ��� ����� ��. ȣ

	

protected:
	char* strName; 
	//������ const�� �ʿ�������, ������ �ʿ� ����.
	char* strAddr;

};

class Regular : public Employee //employee Ŭ������ ����ϰڴ�. 
{
public:
	Regular() {}
	Regular(const char* pName, const char* pAddr, double dSalary):Employee(pName, pAddr) {
		cout << "2. ���ڰ� 3���� Regular ������ ȣ��" << endl;
		strName = new char[strlen(pName) + 1]; 
		//strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1]; 
		//strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;
	}
	~Regular() {
		cout << "2. Regular �Ҹ��� ȣ��" << endl;
	}
	//�Ҹ����� ���, �Ļ� �Ҹ��ڰ� ���� ���� �� �� �θ� �Ҹ��ڰ� ����ȴ�.
	double PayCheck() const {
		return salary;
	}
private:
	double salary;

};

class SalesMan : public Regular
{
public:
	SalesMan() {

	}
	SalesMan(const char* pName, const char* pAddr, double dSalary, double allowance) 
		: Regular(pName, pAddr, dSalary) {
		cout << "3. ���ڰ� 4���� SalesMan ������ ȣ��" << endl;
		this->allowance = allowance;
	}
	~SalesMan() {
		cout << "3. SalesMan �Ҹ��� ȣ��" << endl;
	}
	double PayCheck() const {
		return Regular::PayCheck() + allowance;

	}

private:
	double allowance;

};


class Temporary : public Employee 
{
public:
	Temporary() {}
	Temporary(const char* pName, const char* pAddr, double dSalary, int days) {
		cout << "2. ���ڰ� 4���� Temporary ������ ȣ��" << endl;
		strName = new char[strlen(pName) + 1];
		//strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		//strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		this->dailyPayCheck = dSalary;
		this->days = days;

		
	}	
	~Temporary() {
		cout << "2. Temporary �Ҹ��� ȣ��" << endl;
	}
	double PayCheck() const {
		return dailyPayCheck * days;
	}
private:
	double dailyPayCheck;
	int days;
};

void main()
{

	/*Employee emp("lee", "seoul");
	emp.DisplayEmployee();*/


	//�̰� �׳� �����ѰŰ� stack������ ���� // NULL �� �����̰�
	//*Employee* emp = new Employee();*/ //�̰� new�� ���ؼ� *emp �ߴ�. �ƴ�?
	//�Ʒ����� �� �޸𸮿��� ������ ��ü�� ���� �޸��� �����Ͱ��� �ּҸ� �����ִ� ��.
	//�׷��� ��Ģ�����δ� �ΰ� �� ������. 

	//��ҿ� ���� �������� (���ÿ��� ����, ���� �Ѱ��ֱ�)
	//Regular rgl("kim", "suwon", 300);
	//rgl.DisplayEmployee();
	//cout << "�޿� : " << rgl->PayCheck() << endl;

	//��ҿ� ���� �������� ( ������ �����ؼ� �������� �Ѱ��ֱ�)
	/*Regular* rgl = new Regular("kim", "suwon", 300);
	rgl->DisplayEmployee();
	cout << "�޿� : " << rgl->PayCheck() << endl;*/

	Employee* rgl = new Regular("kim", "suwon", 300);
	rgl->DisplayEmployee();
	cout << "�޿� : " << rgl->PayCheck() << endl;
	//�ϴ� �ּҰ� ��ü�� ���� �� ����. void �����Ϳ���.
	//�ٵ� ���⼭ �߿��Ѱ�, �ش� �޸��� ���� ���� ��Ÿ���� ���Ѱ� Ÿ��.
	//������ Ÿ���� ���ƾ����� ����������, 
	//��� ���迡���� �θ��� Ÿ������ �ڽ��� ?? �� ����ų �� �ְ� �ص�. �׷��� ���� �ص�.
	//�ش� Ÿ�Կ� �´� �� ���󰡵��� ���� �Ǿ��ִ�. ��?
	//������ �޸𸮸� �ޱ� ������, Employee�� ����� ȣ���Ϸ��� �� ��. ������ �ǵ����� ��������.

	Temporary tmp("park", "jeju", 10, 20);
	tmp.DisplayEmployee();
	cout << "�޿� : " << tmp.PayCheck() << endl;

	SalesMan slm("jung", "gasan", 300, 50);
	slm.DisplayEmployee();
	cout << "�޿� : " << slm.PayCheck() << endl;

	objectTest(new Regular("kim", "suwon", 300));

}

//void objectTest(Employee* emp)
//{
//	Employee* rgl = new Regular("kim", "suwon", 300);
//	emp->DisplayEmployee();
//	cout << "�޿� : " << emp->PayCheck() << endl;
//}