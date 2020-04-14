#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int i, a, k;
	scanf("%d", &a);
	if (a != 0)
	{
		for (k = 0; k < a; k++)
		{
			{
				for (i = 0; i < a - k; i++)
				{
					printf("*");
				}

				if (a - k != 0)
				{
					printf("\n");
				}
				else
				{
					return 0;
				}
			}
		}
		
		
	}
	
}