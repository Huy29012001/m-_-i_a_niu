#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int f = 1; f <= (a - i); f++)
		{
			printf("~");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
}