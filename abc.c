#include "stdio.h"
int main()
{
	float c, f;
	printf("Nhap F: ");
	scanf("%f", &f);
	c = 5.0f / 9.0f*(f - 32);
	printf("%0.2fIn C", c);
	fflush(stdin);
	getchar();
	return 0;
}