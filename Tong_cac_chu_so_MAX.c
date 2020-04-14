#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, r1, r2, t1, t2;
	scanf("%d", &a);
	scanf("%d", &b);
	int  x = a, y = b;
	{
		r1 = 0;
		t1 = 0;
		while (a >= 1)
		{
			r1 = a % 10;
			t1 = t1 + r1;
			a = (a - r1) / 10;
		}
		r2 = 0;
		t2 = 0;
		while (b >= 1)
		{
			r2 = b % 10;
			t2 = t2 + r2;
			b = (b - r2) / 10;
		}
	}
	if (t1 <= t2)
	{
		printf("%d %d", x, y);
		return 0;
	}
	else
	{
		printf("%d %d", y, x);
		return 0;
	}
}