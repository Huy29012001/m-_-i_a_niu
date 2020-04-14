#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int i, a, k;
	scanf("%d", &a);
	if (a > 0)
	{
		for (k = 1; k <= a; k++)
		{
			for (i = 1; i <= k; i++)
			{
				printf("%d", k);
			}
			printf("\n");
		}
	}
}