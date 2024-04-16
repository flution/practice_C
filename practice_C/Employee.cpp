#include<iostream>

using namespace std;


class Employee {
public:
	Employee() {
		strName = NULL; //보통은 디폴트 생성자에선 NULL이 일반적.
		strAddr = NULL; //마찬가지.
		cout << "1. Employee 생성자 호출" << endl;
	}
		
	Employee(const char* pName, const char* pAddr) {
		cout << "1. 인자가 2개인 생성자 호출" << endl;
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
		cout << "1. Employee 소멸자 호출" << endl;
	}
	void DisplayEmployee() {
		cout << "이름 : " << this->strName << endl;
		cout << "주소 : " << this->strAddr << endl;
	}
	virtual	double PayCheck() const = 0;
		//포인터를 받기 위해, 인자를 하나 더 0.0으로 추가함
		//그리고 virtual을 추가함으로서 가상함수로 변경함.
		//실제 함수긴 하지만, 사용되지 않은 함수로 여기는 것. 호

	

protected:
	char* strName; 
	//원래는 const가 필요했으나, 이제는 필요 없음.
	char* strAddr;

};

class Regular : public Employee //employee 클래스를 상속하겠다. 
{
public:
	Regular() {}
	Regular(const char* pName, const char* pAddr, double dSalary):Employee(pName, pAddr) {
		cout << "2. 인자가 3개인 Regular 생성자 호출" << endl;
		strName = new char[strlen(pName) + 1]; 
		//strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1]; 
		//strren ? 현재()의 주소값의 str 데이터의 문자열의 길이.
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;
	}
	~Regular() {
		cout << "2. Regular 소멸자 호출" << endl;
	}
	//소멸자의 경우, 파생 소멸자가 먼저 진행 된 후 부모 소멸자가 진행된다.
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
		cout << "3. 인자가 4개인 SalesMan 생성자 호출" << endl;
		this->allowance = allowance;
	}
	~SalesMan() {
		cout << "3. SalesMan 소멸자 호출" << endl;
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
		cout << "2. 인자가 4개인 Temporary 생성자 호출" << endl;
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
		cout << "2. Temporary 소멸자 호출" << endl;
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


	//이건 그냥 선언한거고 stack에서만 생성 // NULL 값 선언이고
	//*Employee* emp = new Employee();*/ //이건 new를 통해서 *emp 했다. 아님?
	//아래쪽은 힙 메모리에서 생성한 객체를 스택 메모리의 포인터값에 주소를 보내주는 것.
	//그러나 원칙적으로는 두개 다 같은거. 

	//요소에 대한 직접접근 (스택에서 생성, 힙에 넘겨주기)
	//Regular rgl("kim", "suwon", 300);
	//rgl.DisplayEmployee();
	//cout << "급여 : " << rgl->PayCheck() << endl;

	//요소에 대한 간접접근 ( 힙에서 생성해서 스택으로 넘겨주기)
	/*Regular* rgl = new Regular("kim", "suwon", 300);
	rgl->DisplayEmployee();
	cout << "급여 : " << rgl->PayCheck() << endl;*/

	Employee* rgl = new Regular("kim", "suwon", 300);
	rgl->DisplayEmployee();
	cout << "급여 : " << rgl->PayCheck() << endl;
	//일단 주소값 자체는 받을 수 있음. void 포인터여도.
	//근데 여기서 중요한건, 해당 메모리의 실제 값을 나타내기 위한게 타입.
	//원래는 타입이 같아야지만 가능했으나, 
	//상속 관계에서는 부모의 타입으로 자식의 ?? 를 가르킬 수 있게 해둠. 그렇게 설계 해둠.
	//해당 타입에 맞는 걸 따라가도록 설계 되어있다. 왜?
	//실제로 메모리를 받긴 했지만, Employee의 멤버를 호출하려고 할 것. 하지만 의도랑은 맞지않음.

	Temporary tmp("park", "jeju", 10, 20);
	tmp.DisplayEmployee();
	cout << "급여 : " << tmp.PayCheck() << endl;

	SalesMan slm("jung", "gasan", 300, 50);
	slm.DisplayEmployee();
	cout << "급여 : " << slm.PayCheck() << endl;

	objectTest(new Regular("kim", "suwon", 300));

}

//void objectTest(Employee* emp)
//{
//	Employee* rgl = new Regular("kim", "suwon", 300);
//	emp->DisplayEmployee();
//	cout << "급여 : " << emp->PayCheck() << endl;
//}