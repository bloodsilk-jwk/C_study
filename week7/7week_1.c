#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ChangeNumbers(int* p1, int* p2);

int main()
{
	int num1, num2;
	printf("����1 : ");
	scanf("%d", &num1);
	printf("����2 : ");
	scanf("%d", &num2);

	printf("�ٲٱ� ��\n����1 : %d, ����2 : %d\n", num1, num2);
	ChangeNumbers(&num1, &num2);
	printf("�ٲ� ��\n����1 : %d, ����2 : %d\n\n", num1, num2);

	return 0;
}

// swap
void ChangeNumbers(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}