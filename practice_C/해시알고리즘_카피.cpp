#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int pKey) {
    return pKey % 10;
}

void InsertValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);

    for (int i = 0; i < SL; i++)
    {
        while (hashtable[bucket][i] != 0)
        {
            bucket = bucket + 1;
        }
        hashtable[bucket][i] = pKey;
        break;
    }
}

//void FindValue(int pKey)
//{
//   int bucket = 0;
//   bucket = Hash(pKey);
//   if (hashtable[bucket][0] == pKey)
//   {
//      printf("검색되었습니다.");
//   }
//   else
//   {
//      printf("입력값은 존재하지 않습니다.");
//   }
//}

bool FindValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);
    for (int i = 0; i < SL; i++)
    {
        if (hashtable[bucket][i] == pKey) {
            return true;
        }
    }

    return false;
}

void main()
{
    int key = 0;

    memset(hashtable, 0, sizeof(hashtable));

    for (int i = 0; i < 5; i++)
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
}