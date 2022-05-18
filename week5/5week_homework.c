#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findlength(char strings[]);

float returnbig(float num1, float num2, float num3);

int main()
{
	// problem1
	char strings[46]; // 사전에 등록된 제일 긴 영단어가 45글자라서
	printf("45자 이내 문자열 입력 : ");
	scanf("%s", strings);

	findlength(strings);

	// problem2
	float num1 = 0, num2 = 0, num3 = 0;
	
	printf("세 수 입력 : ");
	scanf("%f %f %f", &num1, &num2, &num3);

	float biggest = returnbig(num1, num2, num3);
	printf("가장 큰 수는 %.2f입니다.", biggest);
}

void findlength(char strings[])
{
	int number = 0;
	for (int run = 0; run < 46; run++)
	{
		if (strings[run] >= 'a' && strings[run] <= 'z')
		{
			number++;
		}
	}

	printf("문자열의 길이는 %d입니다.\n\n", number);
}

float returnbig(float num1, float num2, float num3)
{
	if (num1 >= num2 && num1 >= num3) // num1이 최댓값
	{
		return num1;
	}
	else if (num2 >= num1 && num2 >= num3) //num2가 최댓값
	{
		return num2;
	}
	else // 나머지, num3이 최댓값
	{
		return num3;
	}
}