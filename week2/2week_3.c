#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("정수 한개를 입력하시오 : ");
	scanf("%d", &a);

	if (a % 3 == 0)
	{
		printf("%d는 3의 배수입니다", a);
	}
	else
	{
		printf("%d는 3의 배수가 아닙니다", a);
	}
}