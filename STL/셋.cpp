#include<iostream>
#include<set>
using namespace std;

void main()
{
	//����-�迭�� Ÿ��
	/*int arr[] = { 1,2,6,3,4,9 };
	set<int> scon;
	set<int>::iterator it;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scon.insert(arr[i]);
	}

	for (it = scon.begin(); it != scon.end(); it++)
	{
		cout << *it << endl;
	}*/

	const char* str = "fgdkabcafk";

	set<char> scon(&str[0], &str[9]); //scon() �ȿ� &[i]�� �������μ� ��°�� �� �������� �Ѵ�.
	set<char>::iterator it;


	for (it = scon.begin(); it != scon.end(); it++)
	{
		cout << *it << endl; //sort()�� �ߺ����ŵ� ���ش�!
	}
	cout << endl;
}