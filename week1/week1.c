#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int month = 0;
	float height = 0;
	char alphabet = 0;

	printf("�¾ ����, Ű, �����ϴ� ���ĺ��� ������� �����ּ���. (����, Ű, ���ĺ�)\n");
	scanf("%d, %f, %c", &month, &height, &alphabet);
	printf("��ſ� ���� ����\n�¾ ���� : %d\nŰ : %f\n�����ϴ� ���ĺ� : %c", month, height, alphabet);

	return 0;
}