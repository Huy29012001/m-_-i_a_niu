#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, r;
	scanf("%d", &a);
	r = 0;
	if (a == 0)
	{
		printf("1");
		return 0;
	}

	if (a < 1000000000)
	{
		while (a >= 1)
		{
			r = a % 10;
			a = (a - r) / 10;
			if ((r != 0) && (r != 6) && (r != 8))
			{
				printf("0");
				return 0;
			}
			
		}
		printf("1");
		return 0;
	}
	
}
