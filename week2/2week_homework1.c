#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b;

	printf("���� 2���� �Է��� �ּ��� (A B) ");
	scanf("%f %f", &a, &b);

	if (a > b)
	{
		printf("%.3f�� %.3f���� ū �� �Դϴ�.", a, b);
	}
	else if (a < b)
	{
		printf("%.3f�� %.3f���� ū �� �Դϴ�.", b, a);
	}
	else
	{
		printf("%.3f�� %.3f�� �����ϴ�.", a, b);
	}
}