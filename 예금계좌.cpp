#include<iostream>

using namespace std;

class Deposit //����.
{
	private:
		char* strName; //���� ��
		double dBalance; //���� �ܾ�
		static double dInterestRate; //���� �ݸ��� ��ǰ���� �����̴ϱ� static�� �ٿ��ش�.
		static int nCount;

	public:
		Deposit() {
			nCount++;
				cout << "��ü ���� ���� : " << nCount << endl;
		} //������
		
		~Deposit() { //�Ҹ���
			nCount--;
				cout << "��ü �Ҹ� ���� : " << nCount << endl;
		}

		Deposit(char* name, double balance) //�����ֶ� �����ܾ��� ����� ������.
		{
			strName = name;
			dBalance = balance;
		}
		void BankBalance() // ���� �ܾ�
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
//�̰� �������ν� dInterestRate �� 0.05�� ��� �ʱ�ȭ �ȴ�. �̰ǰ�?
int Deposit::nCount = 0;
//������ �����ڴ� main �Լ��� �ٱ��� �־�� ����ƽ�� ���� ����.

void main()
{
	Deposit Kim, lee;
	//Public�� ��� ������ �ȳ����� �̷��� ���� �����Դϴ�~
	Deposit::SetInterestRate(0.06);
	//����ƽ�� �ٲٴ� ����� �ڿ� static ������ �� ���� ġȯ�ϴ� ��� ����.
	/*Kim.SetInterestRate(0.07);*/
	cout << Deposit::GetInterestRate() << endl;
	
}