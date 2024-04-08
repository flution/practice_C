#include<iostream>
#include<deque>
using namespace std;

void main()
{

	deque<int> num;

	num.push_back(5);
	num.push_back(6);
	num.push_front(2);
	num.push_front(1);

	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i]
			<< " ";
	}
	cout << endl; // 왜 여기서 endl을 빼줬나요? for문 안에서 하면 안됨? 이라고 하려 할뻔~

	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i]
			<< " ";
	}

}