#include<iostream>
#include<crtdbg.h>

using namespace std;

void main()
{
	_CrtSetBreakAlloc(80);
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int* nData = new int; //이 경우 4바이트의 메모리 릭이 난다.
	_CrtDumpMemoryLeaks();
	//delete nData;
}