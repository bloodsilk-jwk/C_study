#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int midterm, termend;

	printf("�߰���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &midterm);

	printf("�⸻��� ������ �Է��Ͻÿ� : ");
	scanf("%d:", &termend);

	float average = (midterm + termend) / 2;

	printf("����� %.1f���Դϴ�.", average);

	average = (int)average / 10;

	if (average >= 9)
	{
		printf("����� ������ A�Դϴ�.");
	}
	else if (average >= 8)
	{
		printf("����� ������ B�Դϴ�.");
	}
	else if (average >= 7)
	{
		printf("����� ������ C�Դϴ�.");
	}
	else if (average >= 6)
	{
		printf("����� ������ D�Դϴ�.");
	}
	else
	{
		printf("����� ������ F�Դϴ�");
	}

	return 0;
}