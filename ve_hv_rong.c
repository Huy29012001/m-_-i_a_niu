#include <stdio.h>


int main()
{
	int a, i, k;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (k = 1; k <= a; k++)
		{
			if ((i == 1) || (i == a))
			{
				printf("*");
			}
			else
			{
				if ((k == 1) || (k == a))
				{
					printf("*");
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}