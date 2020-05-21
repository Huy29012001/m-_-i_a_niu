#include <stdio.h>


int main()
{
	int a;
	int i, k, b = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (k = i; k >= 1; k--)
		{
			printf("%d ", k);
		}
		for (k = 1; k < a - b; k++)
		{
			printf("%d ", k + 1);
		}
		b++;
		printf("\n");
	}
}