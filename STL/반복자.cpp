#include <iostream>

using namespace std;

//void main() {
//
//	//�����迭
//	int arr[] = { 1,2,3,4,5 } //���̰� 5�� �迭�� �ִٰ� ġ��.
//		//�迭�� �̸��� �ּҰ�.
//	int* pNum; //������ ����, int* pNum�� pNum�� �ּҰ��� �����϶�� �����̴�. ���� �Ͱ� �ٸ�.
//
//	for (pNum = &arr[0]; pNum != &arr[5]; pNum++)
//		//for������ ���� �̷��� ���� ������ ���������� ���ϰ� ���������� �ϱ� ���ؼ���.
//	{
//		cout << *pNum << " "; //*pNum = pNum�� ������.
//	}
//	cout << endl;
//		//arr; = &arr[0]; ���� �����ϴ�.
//		//pNum != &arr[5]; ������ num�� arr[5]�� �ּҰ��� �������� �ʴ´�.
//
//}

//����Ÿ��
void main() 
{
	char arr[] = "programming";
	char* pArr; // ����Ÿ��

	for (pArr = &arr[0]; pArr != &arr[12]; pArr++)
	{
		cout << *pArr << " ";

	}
	cout << endl;
	//�ΰ��� ������ �ִµ�, Ÿ���� �迭�� �Ѿ�� �ε��� ������ ���������.
	//�׸��� etc... ������� �Ф�..
}