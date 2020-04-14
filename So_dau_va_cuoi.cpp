#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int a, d, c, r;
	scanf("%d", &a);
	r = 0;
//	t = 0;
	d = NULL;
	c = NULL;
	if ((a >= 1) && ((a - (a % 10)) / 10 >= 1))
	{
		c = a % 10;
		while (a >= 1)
		{
			r = a % 10;
			//		t = t + r;
			a = (a - r) / 10;
			d = r;

		}
	}
	else
	{
		exit(0);
	}
	printf("%d", d);
	printf(" %d", c);
}