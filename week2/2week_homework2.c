#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;

	int min = 0, max = 0;

	printf("3개의 정수를 입력하시오 (A,B,C) ");
	scanf("%d, %d, %d", &a, &b, &c);

	int sum = a + b + c;

	// 3개의 정수가 같을 때 (a=b=c)
	if ((a == b) && (b == c)) // 3개가 같은 경우 처리
	{
		max = a;
		min = a;
	}
	// 2개의 정수만 같을 때 (최댓값, 최솟값) >> (a=b, c) (c, a=b) (b=c, a) (a, b=c) (c=a, b) (b, c=a)
	else if ((a == b) || (b == c) || (c == a)) // 2개 같은 경우 처리
	{
		if (a > b) // (a, b=c) (c=a, b)
		{
			max = a;
			min = b;
		}
		else if (b > c) // (a=b, c) (b, c=a)
		{
			max = b;
			min = c;
		}
		else // (c > a) >> (b=c, a) (c, a=b)
		{
			max = c;
			min = a;
		}
	}

	// 같은 정수가 없을 때 (최댓값,최솟값) >> (a,b) (a,c) (b,a) (b,c) (c,a) (c,b)
	else
	{
		if ((a > b) && (a > c)) // a가 가장 클 경우
		{
			max = a;
			if (b > c) // b와 c 비교
			{
				min = c;
			}
			else
			{
				min = b;
			}
		}
		else if (b > c) // a가 가장 큰 수가 아님. b와 c 비교.
		{
			max = b;
			if (c > a) // c와 a 비교
			{
				min = a;
			}
			else
			{
				min = c;
			}
		}
		else // c가 가장 큰 수임
		{
			max = c;
			if (a > b) // a와 b 비교
			{
				min = b;
			}
			else
			{
				min = a;
			}
		}
	}

	printf("최댓값 : %d, 최솟값 : %d\n", max, min);
	printf("합계 : %d, 평균 : %.1f", sum, (double)sum / 3);
}