#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int midterm, termend;

	printf("중간고사 점수를 입력하시오 : ");
	scanf("%d", &midterm);

	printf("기말고사 점수를 입력하시오 : ");
	scanf("%d:", &termend);

	float average = (midterm + termend) / 2;

	printf("평균은 %.1f점입니다.", average);

	average = (int)average / 10;

	if (average >= 9)
	{
		printf("당신의 학점은 A입니다.");
	}
	else if (average >= 8)
	{
		printf("당신의 학점은 B입니다.");
	}
	else if (average >= 7)
	{
		printf("당신의 학점은 C입니다.");
	}
	else if (average >= 6)
	{
		printf("당신의 학점은 D입니다.");
	}
	else
	{
		printf("당신의 학점은 F입니다");
	}

	return 0;
}