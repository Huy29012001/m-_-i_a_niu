#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int i, a, b, k;
	scanf("%d", &b);
	scanf("%d", &a);
	
	if ((a != 0) && (b != 0))
	{
		for (i = 1; i <= b; i++)
		{
			k = 1;
			while (k <= a)
			{
				printf("%d", k);
				k++;
			}
			printf("\n");

		}
	}

}