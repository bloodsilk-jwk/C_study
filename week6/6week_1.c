#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int icecream = 1000;
	int* ic = &icecream;

	// ���̽�ũ�� ��
	printf("���̽�ũ�� �� : %d\n", icecream);

	// ���̽�ũ���� �ִ� �ּ�
	printf("���̽�ũ�� �ּ� : %d\n", &icecream);

	// ���̽�ũ���� ������ ��
	printf("���̽�ũ�� ������ �� : %d\n", ic);

	// ���̽�ũ���� �����Ͱ� �����ϴ� ��
	printf("���̽�ũ�� �����Ͱ� �����ϴ� �� : %d\n", *ic);
}