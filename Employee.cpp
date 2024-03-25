#include<iostream>

using namespace std;


class Employee {
public:
	Employee() {
		strName = NULL; //보통은 디폴트 생성자에선 NULL이 일반적.
		strAddr = NULL; //마찬가지.
	}
		
	Employee(const char* pName, const char* pAddr) {
		cout << "인자가 2개인 생성자 호출" << endl;
		/*strName = pName; //쓰리쿠션되서 받을 수 있으나..
		strAddr = pAddr;*/
		strName = new char [strlen(pName) + 1]; //strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1]; //strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
	}
	~Employee() {
		delete[] strName;
		delete[] strAddr;
	}
	void DisplayEmployee() {
		cout << "이름 : " << this->strName << endl;
		cout << "주소 : " << this->strAddr << endl;
	}

protected:
	char* strName; 
	//원래는 const가 필요했으나, 이제는 필요 없음.
	char* strAddr;

};

class Regular : public Employee //employee 클래스를 상속하겠다. 
{
public:
	Regular() {}
	Regular(const char* pName, const char* pAddr, double dSalary) {
		cout << "인자가 3개인 Regular 생성자 호출" << endl;
		strName = new char[strlen(pName) + 1]; 
		//strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1]; 
		//strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;
	}
	~Regular() {}
	//소멸자의 경우, 파생 소멸자가 먼저 진행 된 후 부모 소멸자가 진행된다.
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
		cout << "인자가 4개인 Temporary 생성자 호출" << endl;
		strName = new char[strlen(pName) + 1];
		//strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		//strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
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
	////이건 그냥 선언한거고 stack에서만 생성 // NULL 값 선언이고
	///*Employee* emp = new Employee();*/ //이건 new를 통해서 *emp 했다. 아님?
	////아래쪽은 힙 메모리에서 생성한 객체를 스택 메모리의 포인터값에 주소를 보내주는 것.
	////그러나 원칙적으로는 두개 다 같은거. 

	Regular rgl("kim", "suwon", 300);
	rgl.DisplayEmployee();
	cout << "급여 : " << rgl.PayCheck() << endl;

	Temporary tmp("park", "jeju", 10, 20);
	tmp.DisplayEmployee();
	cout << "급여 : " << tmp.PayCheck() << endl;
}