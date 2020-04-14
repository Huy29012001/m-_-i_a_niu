#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, i, t;
	scanf("%d", &a);
	scanf("%d", &b);
	t = 0;
	if (a < b)
	{
		for (i = a; i <= b; i++)
		{
			t += i;
		}
		printf("%d", t);
		return 0;
	}
	if (a > b)
	{
		for (i = b; i <= a; i++)
		{
			t += i;
		}
		printf("%d", t);
		return 0;
	}
}