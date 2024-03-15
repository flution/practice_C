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
	MousePoint a; //이건 왜 오류냐? = 원인은 전달인자가 2개인 생성자 떄문이다.
	 

	cout << pt.GetX() << endl;
	cout << pt.GetY() << endl;
}