#include<iostream>

using namespace std;

//1. Ŭ����
//class MousePoint
//{
//	//Ŭ������ ����ü�� main�Լ� �ٱ����� ���°��̴�.
//private: 
//	int x;
//	int y;
//public:
//	void SetXY(int nX, int nY); //���ο����� �̷��� �ᵵ ��.
////{
////	x = nX;
////	y = nY;
////}
//};
//
//void MousePoint::SetXY(int nX, int nY) //���� void Setxy�� �ܺη� ���� ǥ���ϴ� ��. (�ܺη� �������°� �ƴ�)
//{
//	x = nX;
//	y = nY;
//}

//
//void main()
//{
//	MousePoint pt; //Ŭ������ ���� = ��ü�� MousePoint
//	pt.SetXY(10, 20);
//}



//2. ����ü
struct MousePoint
{
private:
	int x;
	int y;
public:
	MousePoint(int nX, int nY) //���⼭���� ������. Ŭ���� �̸��� ��ü �̸��� ����?
	{
		x = nX;
		y = nY;
		cout << "�������ڰ� 2���� ������" << endl;
	}

	MousePoint()
	{
		cout << "����Ʈ ������" << endl;
	}

	~MousePoint()
	{
		cout << " �Ҹ��� " << endl;
	}

	int GetX() {
		return x;
	}

	int GetY() {
		return y;
	}

	void SetXY(int nX, int nY) {
		x = nX;
		y = nY;
	}
};

void main()
{
	/*MousePoint pt = { 50, 100 };*/
	MousePoint pt(10, 20);
	MousePoint a; //�̰� �� ������? = ������ �������ڰ� 2���� ������ �����̴�.
	 

	cout << pt.GetX() << endl;
	cout << pt.GetY() << endl;
}