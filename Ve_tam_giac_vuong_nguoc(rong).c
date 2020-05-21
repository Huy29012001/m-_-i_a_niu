#include<stdio.h>


int main()
{
    int a;
    scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (i == 1 || i == a)
		{
			for (int k = 1; k <= i; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int k = 1; k <= i; k++)
			{
				if (k == 1 || k == i)
				{
					printf("*");
				}
				else
				{
					printf(".");
				}
			}
			printf("\n");
		}
	}
}