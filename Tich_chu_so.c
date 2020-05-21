#include <stdio.h>


int main()
{
	int a, x = 1, r;
	scanf("%d", &a);
	while (a > 0)
	{
		r = a % 10;
		x = x * r;
		a = a / 10;
	}
	printf("%d", x);
}