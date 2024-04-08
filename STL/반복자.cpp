#include <iostream>

using namespace std;

//void main() {
//
//	//정수배열
//	int arr[] = { 1,2,3,4,5 } //길이가 5인 배열이 있다고 치자.
//		//배열의 이름은 주소값.
//	int* pNum; //포인터 변수, int* pNum은 pNum의 주소값을 참조하라는 선언이다. 밑의 것과 다름.
//
//	for (pNum = &arr[0]; pNum != &arr[5]; pNum++)
//		//for문에서 굳이 이렇게 쓰는 이유는 간접참조를 안하고 직접참조를 하기 위해서다.
//	{
//		cout << *pNum << " "; //*pNum = pNum의 실제값.
//	}
//	cout << endl;
//		//arr; = &arr[0]; 둘은 동일하다.
//		//pNum != &arr[5]; 포인터 num은 arr[5]의 주소값을 참조하지 않는다.
//
//}

//문자타입
void main() 
{
	char arr[] = "programming";
	char* pArr; // 문자타입

	for (pArr = &arr[0]; pArr != &arr[12]; pArr++)
	{
		cout << *pArr << " ";

	}
	cout << endl;
	//두가지 단점이 있는데, 타입이 배열로 넘어가면 인덱스 접근이 어려워진다.
	//그리고 etc... 못들엇어 ㅠㅠ..
}