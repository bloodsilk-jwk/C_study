#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void plusnumber(int* num1, int* num2);

int main()
{
	int num1 = 5, num2 = 10;
	printf("�ٲٱ� ��\n����1 : %d, ����2 : %d\n\n", num1, num2);
	
	// num1�� num2�� �ּҰ��� ������
	plusnumber(&num1, &num2);

	// (num1+num2), num2�� ���;� ��
	printf("�ٲ� ��\n����1 : %d, ����2 : %d\n\n", num1, num2);

}

// �ּҰ��� �ǵ帮�� �Լ� �ۿ����� ��ȭ�� ����ȴ�.
void plusnumber(int* num1, int* num2)
{
	// num1�� num2�� "�ּҰ��� ����Ű��" �ּҿ� ����ִ� ���ڰ� ��������.
	*num1 = *num1 + *num2;
}