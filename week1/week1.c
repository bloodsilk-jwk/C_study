#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int month = 0;
	float height = 0;
	char alphabet = 0;

	printf("태어난 연도, 키, 좋아하는 알파벳을 순서대로 적어주세요. (연도, 키, 알파벳)\n");
	scanf("%d, %f, %c", &month, &height, &alphabet);
	printf("당신에 대한 정보\n태어난 연도 : %d\n키 : %f\n좋아하는 알파벳 : %c", month, height, alphabet);

	return 0;
}