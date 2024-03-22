#include<iostream>
#include<string.h>

using namespace std;

class String
{
public:	

	String(char ch, int nSize)
	{
		nLength = nSize;
		pBuffer = new char[nLength + 1]; //���ڿ��� ���� null �� ���Ƿ� +1�� �ݵ�� ������Ѵ�.
		memset(pBuffer, ch, nLength); // pBuffer�� ch���� nLength ��ŭ �־���.
		pBuffer[nLength] = '\0'; // �������� A, A, A, Null. �� Null�� �ֳĸ� ���ڿ� �ߴܼ����� �ʿ��ϱ� ����.
		cout << "pBuffer : " << pBuffer << endl;

	}
	~String() 
	{
		delete[] pBuffer; // pBuffer�� private�� ������ �ȵǹǷ�, �Ҹ��ڰ� ���⿡ �ִ°� ����. public�̾��ٸ� void main�� ����?
	}

	void operator=(const String& s) //���Կ����ڴ� const(���) String�� ���۷��� s.
	{
		delete this->pBuffer; //pBuffer���� �����ض�
		this->nLength = s.nLength; //n.length�� s.nLength ��ŭ ȣȯ�ض� 
		this->pBuffer = new char[this->nLength + 1];  // 3��ŭ�� �޸𸮸� new �����ڷ� �������. nLength ��ŭ�� ���̸�.
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
	String str1('A', 3); //��ü�� �����Ͽ���. ��. Stirng�� �� Ŭ���� Ÿ���̱���?
	String str2('B', 5);

	
	//str2.operator=(str1); //���� ǥ��
	str2 = str1; //�̰͵� ������ ǥ�����ǥ��(�ֳ��ϸ� void Operator�� �����صױ� ������.
	str2.SetData();
};