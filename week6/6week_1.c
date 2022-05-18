#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int icecream = 1000;
	int* ic = &icecream;

	// 아이스크림 값
	printf("아이스크림 값 : %d\n", icecream);

	// 아이스크림이 있는 주소
	printf("아이스크림 주소 : %d\n", &icecream);

	// 아이스크림의 포인터 값
	printf("아이스크림 포인터 값 : %d\n", ic);

	// 아이스크림의 포인터가 지정하는 값
	printf("아이스크림 포인터가 지정하는 값 : %d\n", *ic);
}