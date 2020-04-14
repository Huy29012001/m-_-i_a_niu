#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, d, w, y;
	scanf("%d", &a);
	y = a / 365;
	w = (a % 365) / 7;
	d = a - (y * 365) - (w * 7);
	printf("%d %d %d", y, w, d);
}