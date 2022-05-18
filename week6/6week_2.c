#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Changenumbers(int *p1, int *p2);

int main()
{
	int num1, num2;

	printf("숫자1 : ");
	scanf("%d", &num1);
	printf("숫자2 : ");
	scanf("%d", &num2);

	printf("바꾸기 전\n숫자1 : %d, 숫자2 : %d\n", num1, num2);
	Changenumbers(&num1, &num2);
	printf("바꾼 후\n숫자1 : %d, 숫자2 : %d\n\n", num1, num2);

	return 0;
}

// 포인터를 쓰면 지역변수 값을 넘겨줄 수 있다
void Changenumbers(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}