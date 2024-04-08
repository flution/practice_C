#include<iostream>
#include<set>
using namespace std;

void main()
{
	//숫자-배열형 타입
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

	set<char> scon(&str[0], &str[9]); //scon() 안에 &[i]를 넣음으로서 통째로 다 가져오게 한다.
	set<char>::iterator it;


	for (it = scon.begin(); it != scon.end(); it++)
	{
		cout << *it << endl; //sort()와 중복제거도 해준다!
	}
	cout << endl;
}