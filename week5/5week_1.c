#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int sum(int a, int b);

int main()
{
	int num1, num2;
	printf("정수 2개 입력 : ");
	scanf("%d %d", &num1, &num2);

	int total = sum(num1, num2);
	printf("%d", total);
}

int sum(int a, int b)
{
	int temp;
	temp = a + b;

	return temp;
}