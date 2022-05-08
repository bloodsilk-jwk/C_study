#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cel = 0;
	float fal = 0.0f;
	printf("¼·¾¾ ¿Âµµ ÀÔ·Â:");
	scanf("%d", &cel);

	fal = (double)9 / 5 * cel + 32;

	printf("%.1f\n", fal);
}