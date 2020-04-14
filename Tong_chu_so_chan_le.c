#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, r, l, c;
	scanf("%d", &a);
	r = 0;
	c = 0;
	l = 0;
	if (a == 0)
	{
		printf("0");
		return 0;
	}

	if (a < 1000000000)
	{
		while (a >= 1)
		{
			r = a % 10;
			a = (a - r) / 10;
			if (r % 2 == 0)
			{
				c++;
			}
			else
			{
				l++;
			}
		}
		printf("%d %d", l, c);
	}
	
}
	