#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int i, a, b, k, c;
	scanf("%d", &a);
	scanf("%d", &b);
	if ((a != 0) && (b != 0))
	{
		for (i = 1; i <= a; i++)
		{
			c = i;
			for (k = 1; k <= b; k++)
			{
				printf("%d", c);
				c++;
			}
			printf("\n");
		}
	}
}