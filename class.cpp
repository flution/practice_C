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

	int GetX() const {

		return x;
	}

	int GetY() const {
		return y;
	}

	void SetXY(int x, int y) {
			
			this->x = x;
			this->y = y;
	}
};

//���� ������ ����
void SetRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.GetX() << endl;
	cout << pt2.GetX() << endl;
	cout << pt1.GetY() << endl;
	cout << pt2.GetY() << endl;
	pt1.SetXY(1000, 2000);
	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;
}

MousePoint& CopyObject(MousePoint& pt1, MousePoint& pt2)
{
	pt1 = pt2;
	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;
	return pt1;
}

void main()
{

	MousePoint mp1(10, 20);
	MousePoint mp2(50, 60);
	CopyObject(mp1, mp2);
	cout << mp1.GetX() << endl;
	cout << mp1.GetY() << endl;



	///*MousePoint pt = { 50, 100 };*/
	//MousePoint pt(10, 20);
	//MousePoint a; //�̰� �� ������? = ������ �������ڰ� 2���� ������ �����̴�.
	// 

	//cout << pt.GetX() << endl;
	//cout << pt.GetY() << endl;

	/*MousePoint pt[3] = { MousePoint(10, 20), MousePoint(100,200), MousePoint(500,600) };*/
	//�迭�� �ʱ�ȭ �ϴ� ���.
	
	/*MousePoint pt[3] = { 10, 20, 30 */
	//������ �迭�� �ƴϹǷ� { x , y , z }�� �Ұ����ϴ�.
	
	//�̰� �������ٿ����ڴ�. �˰ڳ�?
	//pt[0].SetXY(10, 20);
	//pt[1].SetXY(100, 200);
	
	//for�� ������ ��������.
	/*for (int i = 0; i < 3; i++) 
	{
	cout << pt[i].GetX() << endl;
	cout << pt[i].GetY() << endl;
	}*/

	//�̰� ��ü �����͸� ���� "�������� ������"
	/*MousePoint* pObj;
	MousePoint pt(10, 20);*/

	//pObj = &pt;
	//pt.SetXY(200, 300);
	////Ư�� -> �� ���ؼ� pObj(�� pt�� ���� �����ϴ� ��) �� ���� GetX�� �ְڴ�. ��� ����.
	//cout << pObj->GetX() << endl;
	//cout << pObj->GetY() << endl;


	//��� ���簪�� ���� ����.
	/*MousePoint* pObj;
	MousePoint mp1(10, 20);
	MousePoint mp2(50, 60);

	SetRect(mp1, mp2);
	cout << mp1.GetX() << endl;
	cout << mp1.GetY() << endl;*/

}