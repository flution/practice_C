#include<iostream>

using namespace std;

void main()
{	//�ٺ������� ���ô�. 3�̶�� ���� �־�����
	int stLen = 0;
	
	cout << "�л� ���� �Է��ϼ��� : " << endl; // c��� ���� printf
	cin >> stLen; //cout = ����ض� cin = �Է��ض� 
	// c��� ���� scanf_s �̰͵� ��Ÿ�� 
	int* pMem = new int[stLen]; //���� ���� �޸� �Ҵ� // �̰͵� ��Ÿ��
	

	for (int i = 0; i < stLen; i++)
	{
		pMem[i] = i + 1;
	}
	for (int i = 0; i < stLen; i++)
	{
		cout << pMem[i] << endl;
	}

	delete[] pMem;
	//delete pMem �ϸ� ù �޸𸮸� �����ϱ�, �迭�� ������ delete[] �Ѵ�.
}