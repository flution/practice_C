#include<iostream>
#include<map>
#include<string>

//�޴��� ��� �˻�

using namespace std;

struct PhoneAddr //����ü ��addr �����
{
	string name; // ���� 1�� string Ÿ�� name
	int phonenum; // ���� 2�� int Ÿ�� phonenum
}arPerson[] = { {"��ȿ��", 1234}, {"������", 4567}, {"���缮", 78910} };
//arPerson[] �̶�� �迭�� ���� �����Ѵ�,(����ü�� ��Ĵ�� str.name / int.pnum����)

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
		cout << "�̸� �Է� : ";
		cin >> name;
		if (name == "q")
			break;
		it = person.find(name);
		if (it == person.end())
		{
			cout << "�׷� ��� �����ϴ�." << endl;
		}
		else
		{
			cout << it->first << "�� ��ȭ��ȣ�� " << it->second << "�Դϴ�." << endl;
			//nth child �� ����Ѱǰ�?
		}
	}
}