#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 10


int hashtable[BK][SL]; //10���� ��Ŷ�� 1���� ������ �����ϰڴ�.

int Hash(int pKey) {

	return pKey % 10; //pKey ���� ������ % �ؼ� �����϶�.
	//�ݴ�� ã����(find)�� �ؽ� �Լ��� ���̿��ϸ� �ȴ�.

}

void InsertValue(int pKey) //����� �־��ִ� ��(�������� : ������ Ű)
{
	int bucket = 0;
	bucket = Hash(pKey);
	//bucket�� Hash �Լ��� key���̴�. ( �� 55�� �Է��ߴٸ� bucket���� ������ ���̹Ƿ� 2 )
	hashtable[bucket][0] = pKey;
	//�ؽ����̺� �Լ��� [bucket]�� index[0]�� key���� �����ϰڴ�.
}

bool FindValue(int pKey) // ����� ã���ִ� �� (��������? ��)
{

	int bucket = 0;
	return bucket = Hash(pKey);
	if (hashtable[bucket][0] ==  pKey)
	{
		return true;
	}
	else {
		return false;
	}
	
}


int main()
{
	int key = 0;

	memset(hashtable, 0, sizeof(hashtable)); //�޸� ��Ʈ (�ؽ����̺��� / 0���� ������ / sizeof��

	//�׷� ���� �� ���ڸ�(������)�� �޾Ƽ� ��Ŷ���� �� �����̴�.

	for (int i = 0; i < 3; i++) //�ݺ����� ���� 5�� ��ȸ�ϰڴ�.
	{
		printf("�����͸� �Է��ϼ��� : ");
		scanf_s("%d", &key);
		InsertValue(key);
	}

	printf("�˻�Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &key);
	bool ret = FindValue(key);
	if (ret == true)
	{
		printf("�˻��Ǿ����ϴ�.");
	}
	else 
	{
		printf("�Է°��� �������� �ʽ��ϴ�.");
	}

	printf("%d\n", hashtable[0][0]);
	printf("%d\n", hashtable[1][0]);
	printf("%d\n", hashtable[2][0]);
	printf("%d\n", hashtable[3][0]);
	printf("%d\n", hashtable[4][0]);
	printf("%d\n", hashtable[5][0]);
	printf("%d\n", hashtable[6][0]);
	printf("%d\n", hashtable[7][0]);
	printf("%d\n", hashtable[8][0]);
	printf("%d\n", hashtable[9][0]);

}