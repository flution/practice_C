#include<iostream>
#include<vector>
using namespace std;

void main()
{
	int i = 0;
	int num = 0;
	cout << "�迭�� ũ�� �Է� : "; // �̰� DP���ְ�
	cin >> num; // num ���� �޾�����.

	vector<int> arr;

	for (i = 0; i < num; i++)
	{
		arr.push_back(i); //arr �迭�� �ڿ� �ش� i�� num��ŭ �о�־��.
	}

	for (i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}