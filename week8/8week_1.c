#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int num1, int num2);

int main()
{
	int a = 1;
	int b = 2;

	// result 재사용
	int result = sum(a, b);
	printf("%d\n", result);

	// result 일회성
	printf("%d\n\n", sum(a, b));

	// while은 주로 무한반복
	int j = 0;
	while (j < 10)
	{
		printf("%d ", j);
		j++;
	}

	printf("\n");

	// for는 주로 구체적인 횟수
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
}

int sum(int num1, int num2)
{
	return num1 + num2;
}