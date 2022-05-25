#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void plusnumber(int* num1, int* num2);

int main()
{
	int num1 = 5, num2 = 10;
	printf("바꾸기 전\n숫자1 : %d, 숫자2 : %d\n\n", num1, num2);
	
	// num1과 num2의 주소값을 보낸다
	plusnumber(&num1, &num2);

	// (num1+num2), num2가 나와야 함
	printf("바꾼 후\n숫자1 : %d, 숫자2 : %d\n\n", num1, num2);

}

// 주소값을 건드리면 함수 밖에서도 변화가 저장된다.
void plusnumber(int* num1, int* num2)
{
	// num1과 num2의 "주소값이 가리키는" 주소에 들어있는 숫자가 더해진다.
	*num1 = *num1 + *num2;
}