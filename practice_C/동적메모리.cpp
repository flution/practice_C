#include<iostream>

using namespace std;

void main()
{	//근본적으로 봅시다. 3이라는 값을 넣었을때
	int stLen = 0;
	
	cout << "학생 수를 입력하세요 : " << endl; // c언어 기준 printf
	cin >> stLen; //cout = 출력해라 cin = 입력해라 
	// c언어 기준 scanf_s 이것도 런타임 
	int* pMem = new int[stLen]; //힙에 동적 메모리 할당 // 이것도 런타임
	

	for (int i = 0; i < stLen; i++)
	{
		pMem[i] = i + 1;
	}
	for (int i = 0; i < stLen; i++)
	{
		cout << pMem[i] << endl;
	}

	delete[] pMem;
	//delete pMem 하면 첫 메모리만 날리니까, 배열을 날릴땐 delete[] 한다.
}