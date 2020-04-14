#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int i, a, b, k;
	scanf("%d", &a);
	scanf("%d", &b);
	if ((a != 0) && (b != 0))
	{
		for (i = 1; i <= a; i++)
		{
			for (k = 1; k <= b; k++)
			{
				if (i % 2 != 0)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
				
			}
			printf("\n");
		}
	}
}