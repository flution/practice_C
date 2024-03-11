#include<stdio.h>

int global = 0;

void Bookmark(int page) {
	static int num = 0;
	global += page;
	num += page;
	print_s("최종 누적 페이지 : ")
}