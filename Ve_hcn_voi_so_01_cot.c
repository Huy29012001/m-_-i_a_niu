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
				if (k % 2 == 1)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
			printf("\n");
		}
	}
	
}