#include<iostream>

using namespace std;


class Employee {
public:
	Employee() {
		strName = NULL; //������ ����Ʈ �����ڿ��� NULL�� �Ϲ���.
		strAddr = NULL; //��������.
	}
		
	Employee(const char* pName, const char* pAddr) {
		cout << "���ڰ� 2���� ������ ȣ��" << endl;
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
	}
	void DisplayEmployee() {
		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
	}

protected:
	char* strName; 
	//������ const�� �ʿ�������, ������ �ʿ� ����.
	char* strAddr;

};

class Regular : public Employee //employee Ŭ������ ����ϰڴ�. 
{
public:
	Regular() {}
	Regular(const char* pName, const char* pAddr, double dSalary) {
		cout << "���ڰ� 3���� Regular ������ ȣ��" << endl;
		strName = new char[strlen(pName) + 1]; 
		//strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1]; 
		//strren ? ����()�� �ּҰ��� str �������� ���ڿ��� ����.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;
	}
	~Regular() {}
	//�Ҹ����� ���, �Ļ� �Ҹ��ڰ� ���� ���� �� �� �θ� �Ҹ��ڰ� ����ȴ�.
	double PayCheck() const {
		return salary;
	}
private:
	double salary;
};

class Temporary : public Employee 
{
public:
	Temporary() {}
	Temporary(const char* pName, const char* pAddr, double dSalary, int days) {
		cout << "���ڰ� 4���� Temporary ������ ȣ��" << endl;
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
	Employee emp("lee", "seoul"); 
	emp.DisplayEmployee();
	////�̰� �׳� �����ѰŰ� stack������ ���� // NULL �� �����̰�
	///*Employee* emp = new Employee();*/ //�̰� new�� ���ؼ� *emp �ߴ�. �ƴ�?
	////�Ʒ����� �� �޸𸮿��� ������ ��ü�� ���� �޸��� �����Ͱ��� �ּҸ� �����ִ� ��.
	////�׷��� ��Ģ�����δ� �ΰ� �� ������. 

	Regular rgl("kim", "suwon", 300);
	rgl.DisplayEmployee();
	cout << "�޿� : " << rgl.PayCheck() << endl;

	Temporary tmp("park", "jeju", 10, 20);
	tmp.DisplayEmployee();
	cout << "�޿� : " << tmp.PayCheck() << endl;
}