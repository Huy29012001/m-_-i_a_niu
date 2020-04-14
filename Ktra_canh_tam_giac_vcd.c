#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ((a == b) && (a == c))
	{
		printf("3");
		return 0;
	}
	if ((a == b) || (a == c) || (b == c))
	{
		printf("2");
		return 0;
	}
	if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b))
	{
		printf("1");
		return 0;
	}
}