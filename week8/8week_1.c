#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int num1, int num2);

int main()
{
	int a = 1;
	int b = 2;

	// result ����
	int result = sum(a, b);
	printf("%d\n", result);

	// result ��ȸ��
	printf("%d\n\n", sum(a, b));

	// while�� �ַ� ���ѹݺ�
	int j = 0;
	while (j < 10)
	{
		printf("%d ", j);
		j++;
	}

	printf("\n");

	// for�� �ַ� ��ü���� Ƚ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
}

int sum(int num1, int num2)
{
	return num1 + num2;
}