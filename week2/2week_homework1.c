#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b;

	printf("숫자 2개를 입력해 주세요 (A B) ");
	scanf("%f %f", &a, &b);

	if (a > b)
	{
		printf("%.3f가 %.3f보다 큰 수 입니다.", a, b);
	}
	else if (a < b)
	{
		printf("%.3f가 %.3f보다 큰 수 입니다.", b, a);
	}
	else
	{
		printf("%.3f와 %.3f는 같습니다.", a, b);
	}
}