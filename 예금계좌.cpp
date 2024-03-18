#include<iostream>

class Deposit //����.
{
	private:
		char* strName; //���� ��
		double dBalance; //���� �ܾ�
		static double dInterestRate; //���� �ݸ��� ��ǰ���� �����̴ϱ� static�� �ٿ��ش�.

	public:
		Deposit() {}
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
};

double Deposit::dInterestRate = 0.05;
//�̰� �������ν� dInterestRate �� 0.05�� ��� �ʱ�ȭ �ȴ�. �̰ǰ�?

void main()
{
	Deposit Kim, lee;
	//Public�� ��� ������ �ȳ����� �̷��� ���� �����Դϴ�~
	Deposit::SetInterestRate(0.06);
	//����ƽ�� �ٲٴ� ����� �ڿ� static ������ �� ���� ġȯ�ϴ� ��� ����.
	Kim.SetInterestRate(0.07);
}