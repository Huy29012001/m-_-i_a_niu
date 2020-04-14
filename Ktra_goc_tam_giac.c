#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ((a > 0) && (b > 0) && (c > 0))
	{
		if (a + b + c == 180)
		{
			printf("1");
			return 0;
		}
		else
		{
			printf("0");
			return 0;
		}
	}
	else
	{
		printf("0");
		return 0;
	}
}