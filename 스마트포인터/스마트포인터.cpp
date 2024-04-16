#include<iostream>
#include<memory>

using namespace std;

void main()
{

	//동적 메모리 8바이트를 할당하였다.
	//스택 메모리 4바이트. (포인터니까)
	/*double* rate = new double;

	*rate = 3.1415;
	cout << *rate << endl;
	delete rate;*/

	//스마트포인터 버전
	auto_ptr<double> rate(new double); //이게 위의 double* rate = new double과 똑같음.
	//의문. rate는 왜 포인터처럼 사용되나? 포인터가 아닌데.
	*rate = 3.1415;
	cout << *rate << endl;
	//왜 자동으로 소멸자가 되는가? - 스마트포인터의 내부 안에 _Myptr; 이라는 자기 자신을 정리하는 소멸자가 있음.


	//try~catch로 알아보는 delete문의 한계.
	//int* a;
	//int b;
	//cout << "나누는 수 입력 : ";
	//cin >> b;

	//try {
	//	a = new int(10);
	//	if (b == 0) 
	//		throw b;
	//		cout << "나누기 결과 : " << *a / b << endl;
	//		delete a;
	//}
	//catch (int ex)
	//{
	//	cout << "예외 상황" << endl; //b가 0인 경우에는 throw를 타며 캐치로 받는데, 그러면 delete가 없다.
	//}


}
