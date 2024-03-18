#include<iostream>

using namespace std;

//1. 클래스
//class MousePoint
//{
//	//클래스나 구조체는 main함수 바깥에서 적는것이다.
//private: 
//	int x;
//	int y;
//public:
//	void SetXY(int nX, int nY); //내부에서도 이렇게 써도 됨.
////{
////	x = nX;
////	y = nY;
////}
//};
//
//void MousePoint::SetXY(int nX, int nY) //내부 void Setxy를 외부로 빼서 표현하는 것. (외부로 빠져나온거 아님)
//{
//	x = nX;
//	y = nY;
//}

//
//void main()
//{
//	MousePoint pt; //클래스의 변수 = 객체를 MousePoint
//	pt.SetXY(10, 20);
//}



//2. 구조체
struct MousePoint
{
private:
	int x;
	int y;
public:
	MousePoint(int nX, int nY) //여기서부터 생성자. 클래스 이름과 객체 이름이 같죠?
	{
		x = nX;
		y = nY;
		cout << "전달인자가 2개인 생성자" << endl;
	}

	MousePoint()
	{
		cout << "디롶트 생성자" << endl;
	}

	~MousePoint()
	{
		cout << " 소멸자 " << endl;
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

//얕은 복사의 내용
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
	//MousePoint a; //이건 왜 오류냐? = 원인은 전달인자가 2개인 생성자 떄문이다.
	// 

	//cout << pt.GetX() << endl;
	//cout << pt.GetY() << endl;

	/*MousePoint pt[3] = { MousePoint(10, 20), MousePoint(100,200), MousePoint(500,600) };*/
	//배열을 초기화 하는 방법.
	
	/*MousePoint pt[3] = { 10, 20, 30 */
	//정수형 배열이 아니므로 { x , y , z }는 불가능하다.
	
	//이건 직접접근연산자다. 알겠나?
	//pt[0].SetXY(10, 20);
	//pt[1].SetXY(100, 200);
	
	//for문 돌려서 편해지기.
	/*for (int i = 0; i < 3; i++) 
	{
	cout << pt[i].GetX() << endl;
	cout << pt[i].GetY() << endl;
	}*/

	//이건 객체 포인터를 통한 "간접접근 연산자"
	/*MousePoint* pObj;
	MousePoint pt(10, 20);*/

	//pObj = &pt;
	//pt.SetXY(200, 300);
	////특히 -> 를 통해서 pObj(는 pt의 값을 참조하는 것) 의 값을 GetX에 넣겠다. 라는 거임.
	//cout << pObj->GetX() << endl;
	//cout << pObj->GetY() << endl;


	//얕븐 복사값에 대한 이해.
	/*MousePoint* pObj;
	MousePoint mp1(10, 20);
	MousePoint mp2(50, 60);

	SetRect(mp1, mp2);
	cout << mp1.GetX() << endl;
	cout << mp1.GetY() << endl;*/

}