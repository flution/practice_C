#include<iostream>
#include<memory>

using namespace std;

void main()
{

	//���� �޸� 8����Ʈ�� �Ҵ��Ͽ���.
	//���� �޸� 4����Ʈ. (�����ʹϱ�)
	/*double* rate = new double;

	*rate = 3.1415;
	cout << *rate << endl;
	delete rate;*/

	//����Ʈ������ ����
	auto_ptr<double> rate(new double); //�̰� ���� double* rate = new double�� �Ȱ���.
	//�ǹ�. rate�� �� ������ó�� ���ǳ�? �����Ͱ� �ƴѵ�.
	*rate = 3.1415;
	cout << *rate << endl;
	//�� �ڵ����� �Ҹ��ڰ� �Ǵ°�? - ����Ʈ�������� ���� �ȿ� _Myptr; �̶�� �ڱ� �ڽ��� �����ϴ� �Ҹ��ڰ� ����.


	//try~catch�� �˾ƺ��� delete���� �Ѱ�.
	//int* a;
	//int b;
	//cout << "������ �� �Է� : ";
	//cin >> b;

	//try {
	//	a = new int(10);
	//	if (b == 0) 
	//		throw b;
	//		cout << "������ ��� : " << *a / b << endl;
	//		delete a;
	//}
	//catch (int ex)
	//{
	//	cout << "���� ��Ȳ" << endl; //b�� 0�� ��쿡�� throw�� Ÿ�� ĳġ�� �޴µ�, �׷��� delete�� ����.
	//}


}
