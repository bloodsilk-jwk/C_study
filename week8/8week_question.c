#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateForever(int result);

int plus(int num1, int num2);
int minus(int num1, int num2);
int multiply(int num1, int num2);
int quotient(int num1, int num2);
int reminder(int num1, int num2);

void printNumber(int result);

int main()
{
	int result = 0;
	printf("ù ��° ���� : ");
	scanf("%d", &result);

	CalculateForever(result);

}

void CalculateForever(int result)
{	
	printf("'������, ����' ������ �Է����ּ���\n");
	printf("�޸�(,)�� �ݵ�� �Է����ּ���.\n");
	printf("���Ḧ ���Ͻø� ������ �ڸ��� 'Q'�� �Է����ּ���\n");

	int isQ = 0;
	while (isQ == 0)
	{
		int num = 0;
		char symbol = '0';

		// ','�� ������ +�� -�� ��� ���� ��ȣ�� �ۿ��Ѵ�...
		scanf("%c, %d", &symbol, &num);

		if (symbol == '+')
		{
			result = plus(result, num);
		}
		if (symbol == '-')
		{
			result = minus(result, num);
		}
		if (symbol == '*')
		{
			result = multiply(result, num);
		}
		if (symbol == '/')
		{
			result = quotient(result, num);
		}
		if (symbol == '%')
		{
			result = reminder(result, num);
		}
		if (symbol == 'Q')
		{
			isQ = 1;
		}
	}
}

int plus(int num1, int num2)
{
	printNumber(num1 + num2);
	return num1 + num2;
}

int minus(int num1, int num2)
{
	printNumber(num1 - num2);
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	printNumber(num1 * num2);
	return num1 * num2;
}

int quotient(int num1, int num2)
{
	printNumber(num1 / num2);
	return num1 / num2;
}

int reminder(int num1, int num2)
{
	printNumber(num1 % num2);
	return num1 % num2;
}

void printNumber(int result)
{
	printf("= %d\n\n", result);
}