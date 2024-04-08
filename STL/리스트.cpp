#include<iostream>
#include<list>
using namespace std;

void main()
{

	list<int> lst;


	for (int i = 0; i < 5; i++)
	{
		lst.push_back(i);
	}
	
	/*for (int i = 0; i < 5; i++)
	{
		cout << lst[i] << endl;
	}*/

	int i;
	list<int>::iterator it;
	for (it = lst.begin(), i = 0; it != lst.end(); it++, i++)
	{
		cout << *it << endl;
	}

}