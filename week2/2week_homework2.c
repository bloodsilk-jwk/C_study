#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;

	int min = 0, max = 0;

	printf("3���� ������ �Է��Ͻÿ� (A,B,C) ");
	scanf("%d, %d, %d", &a, &b, &c);

	int sum = a + b + c;

	// 3���� ������ ���� �� (a=b=c)
	if ((a == b) && (b == c)) // 3���� ���� ��� ó��
	{
		max = a;
		min = a;
	}
	// 2���� ������ ���� �� (�ִ�, �ּڰ�) >> (a=b, c) (c, a=b) (b=c, a) (a, b=c) (c=a, b) (b, c=a)
	else if ((a == b) || (b == c) || (c == a)) // 2�� ���� ��� ó��
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

	// ���� ������ ���� �� (�ִ�,�ּڰ�) >> (a,b) (a,c) (b,a) (b,c) (c,a) (c,b)
	else
	{
		if ((a > b) && (a > c)) // a�� ���� Ŭ ���
		{
			max = a;
			if (b > c) // b�� c ��
			{
				min = c;
			}
			else
			{
				min = b;
			}
		}
		else if (b > c) // a�� ���� ū ���� �ƴ�. b�� c ��.
		{
			max = b;
			if (c > a) // c�� a ��
			{
				min = a;
			}
			else
			{
				min = c;
			}
		}
		else // c�� ���� ū ����
		{
			max = c;
			if (a > b) // a�� b ��
			{
				min = b;
			}
			else
			{
				min = a;
			}
		}
	}

	printf("�ִ� : %d, �ּڰ� : %d\n", max, min);
	printf("�հ� : %d, ��� : %.1f", sum, (double)sum / 3);
}