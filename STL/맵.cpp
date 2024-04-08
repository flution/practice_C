#include<iostream>
#include<map>
#include<string>

//휴대폰 사람 검색

using namespace std;

struct PhoneAddr //구조체 폰addr 만들기
{
	string name; // 인자 1번 string 타입 name
	int phonenum; // 인자 2번 int 타입 phonenum
}arPerson[] = { {"김효동", 1234}, {"아이유", 4567}, {"유재석", 78910} };
//arPerson[] 이라는 배열을 간단 선언한다,(구조체의 방식대로 str.name / int.pnum으로)

void main()
{
	map<string, int> person;
	map<string, int>::iterator it;
	string name;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++)
	{
		person[arPerson[i].name] = arPerson[i].phonenum;
	}
	for (;;)
	{
		cout << "이름 입력 : ";
		cin >> name;
		if (name == "q")
			break;
		it = person.find(name);
		if (it == person.end())
		{
			cout << "그런 사람 없습니다." << endl;
		}
		else
		{
			cout << it->first << "의 전화번호는 " << it->second << "입니다." << endl;
			//nth child 랑 비슷한건가?
		}
	}
}