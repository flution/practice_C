#include<iostream>
#include<string.h>

using namespace std;

class String
{
public:

	//이게 생성자다.
	String(char ch, int nSize)
	{
		nLength = nSize;
		pBuffer = new char[nLength + 1]; //문자열은 끝에 null 이 들어가므로 +1을 반드시 해줘야한다.
		memset(pBuffer, ch, nLength); // pBuffer에 ch값을 nLength 만큼 넣었다.
		pBuffer[nLength] = '\0'; // 생성값은 A, A, A, Null. 왜 Null을 넣냐면 문자열 중단선언이 필요하기 때문.
		cout << "pBuffer : " << pBuffer << endl;

	}
	//이게 소멸자.
	~String()
	{
		delete[] pBuffer; // pBuffer가 private라 접근이 안되므로, 소멸자가 여기에 있는게 맞음. public이었다면 void main도 가능?
	}
	String(const String& s)
	{
		this->nlength = s.nLength;
		this->pBuffer = new char[this->nLength + 1]; //새로운 메모리를 생성해라
		strcpy_s(this->pBuffer, this->nLength + 1, str1.pBuffer); // nLenght만큼 pBuffer에 복제하라.
	}


	void operator=(const String& s) //대입연산자는 const(상수) String의 레퍼런스 s.
	{
		delete this->pBuffer; //pBuffer값을 삭제해라
		this->nLength = s.nLength; //n.length를 s.nLength 만큼 호환해라 
		this->pBuffer = new char[this->nLength + 1];  // 3만큼의 메모리를 new 연산자로 만들었다. nLength 만큼의 길이를.
		strcpy_s(this->pBuffer, this-> nLength + 1, s.pBuffer);
	}

	void SetData() {
		cout << "pBuffer : " << this->pBuffer << endl;
	}

private:
	char* pBuffer;
	int nLength;

};

void main()
{
	String str1('A', 3); //객체를 생성하였다. 아. Stirng은 다 클래스 타입이구나?
	String str2 = str1; //str2(str1); 과 같은 내용이다.
	str2.SetData();

	//여기서부턴 str2 = str1 operator를 만드는 용도
	//String str2('B', 5);

	//
	////str2.operator=(str1); //정식 표현
	//str2 = str1; //이것도 가능한 표현약식표현(왜냐하면 void Operator에 지정해뒀기 때문에.
	//str2.SetData();
};