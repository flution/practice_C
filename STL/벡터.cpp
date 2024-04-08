#include<iostream>
#include<vector>
using namespace std;

void main()
{
	int i = 0;
	int num = 0;
	cout << "배열의 크기 입력 : "; // 이걸 DP해주고
	cin >> num; // num 값을 받았을때.

	vector<int> arr;

	for (i = 0; i < num; i++)
	{
		arr.push_back(i); //arr 배열의 뒤에 해당 i를 num만큼 밀어넣어라.
	}

	for (i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}