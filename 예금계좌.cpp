#include<iostream>

using namespace std;

class Deposit //예금.
{
	private:
		char* strName; //예금 주
		double dBalance; //예금 잔액
		static double dInterestRate; //예금 금리는 상품마다 고정이니까 static을 붙여준다.
		static int nCount;

	public:
		Deposit() {
			nCount++;
				cout << "객체 생성 개수 : " << nCount << endl;
		} //생성자
		
		~Deposit() { //소멸자
			nCount--;
				cout << "객체 소멸 개수 : " << nCount << endl;
		}

		Deposit(char* name, double balance) //예금주랑 예금잔액을 끌어올 생성자.
		{
			strName = name;
			dBalance = balance;
		}
		void BankBalance() // 은행 잔액
		{
			dBalance = dBalance + (dBalance * dInterestRate);
		}
		static void SetInterestRate(double dNewRate)
		{
			dInterestRate = dNewRate;
		}
		static double GetInterestRate()
		{
			return dInterestRate;
		}
};

double Deposit::dInterestRate = 0.05;
//이걸 해줌으로써 dInterestRate 가 0.05로 계속 초기화 된다. 이건가?
int Deposit::nCount = 0;
//스코프 연산자는 main 함수의 바깥에 있어야 스태틱에 관여 가능.

void main()
{
	Deposit Kim, lee;
	//Public의 경우 오류가 안나더라도 이렇게 쓰면 빵점입니다~
	Deposit::SetInterestRate(0.06);
	//스태틱을 바꾸는 방법은 뒤에 static 변수를 또 만들어서 치환하는 방법 뿐임.
	/*Kim.SetInterestRate(0.07);*/
	cout << Deposit::GetInterestRate() << endl;
	
}