#include<stdio.h>

void func()
{
	int value = 0;
	value++;
	printf("%d\n", value);
}

void main()
{
	int i = 0;
	while (i < 5)
	{
		func();
		i++;
	}
}