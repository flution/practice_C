#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 10


int hashtable[BK][SL]; //10개의 버킷에 1개의 슬롯을 선언하겠다.

int Hash(int pKey) {

	return pKey % 10; //pKey 값을 받을때 % 해서 리턴하라.
	//반대로 찾을때(find)는 해시 함수를 역이용하면 된다.

}

void InsertValue(int pKey) //밸류를 넣어주는 값(전달인자 : 포인터 키)
{
	int bucket = 0;
	bucket = Hash(pKey);
	//bucket은 Hash 함수의 key값이다. ( 즉 55를 입력했다면 bucket값은 나머지 값이므로 2 )
	hashtable[bucket][0] = pKey;
	//해쉬테이블 함수의 [bucket]의 index[0]에 key값을 저장하겠다.
}

bool FindValue(int pKey) // 밸류를 찾아주는 값 (전달인자? 모름)
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

	memset(hashtable, 0, sizeof(hashtable)); //메모리 세트 (해시테이블을 / 0으로 만들어라 / sizeof로

	//그럼 나는 그 앞자리(정수단)을 받아서 버킷으로 쓸 생각이다.

	for (int i = 0; i < 3; i++) //반복문을 통해 5번 순회하겠다.
	{
		printf("데이터를 입력하세요 : ");
		scanf_s("%d", &key);
		InsertValue(key);
	}

	printf("검색키를 입력하세요 : ");
	scanf_s("%d", &key);
	bool ret = FindValue(key);
	if (ret == true)
	{
		printf("검색되었습니다.");
	}
	else 
	{
		printf("입력값은 존재하지 않습니다.");
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