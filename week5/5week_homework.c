#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findlength(char strings[]);

float returnbig(float num1, float num2, float num3);

int main()
{
	// problem1
	char strings[46]; // ������ ��ϵ� ���� �� ���ܾ 45���ڶ�
	printf("45�� �̳� ���ڿ� �Է� : ");
	scanf("%s", strings);

	findlength(strings);

	// problem2
	float num1 = 0, num2 = 0, num3 = 0;
	
	printf("�� �� �Է� : ");
	scanf("%f %f %f", &num1, &num2, &num3);

	float biggest = returnbig(num1, num2, num3);
	printf("���� ū ���� %.2f�Դϴ�.", biggest);
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

	printf("���ڿ��� ���̴� %d�Դϴ�.\n\n", number);
}

float returnbig(float num1, float num2, float num3)
{
	if (num1 >= num2 && num1 >= num3) // num1�� �ִ�
	{
		return num1;
	}
	else if (num2 >= num1 && num2 >= num3) //num2�� �ִ�
	{
		return num2;
	}
	else // ������, num3�� �ִ�
	{
		return num3;
	}
}