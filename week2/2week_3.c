#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("���� �Ѱ��� �Է��Ͻÿ� : ");
	scanf("%d", &a);

	if (a % 3 == 0)
	{
		printf("%d�� 3�� ����Դϴ�", a);
	}
	else
	{
		printf("%d�� 3�� ����� �ƴմϴ�", a);
	}
}