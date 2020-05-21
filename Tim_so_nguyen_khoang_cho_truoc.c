#include <stdio.h>

int main()
{
	int a, b;
	int i, k;
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = a; i <= b; i++)
	{
		k = 0;
		for (int f = 1; f <= i; f++)
		{
			if (i % f == 0)
			{
				k++;
			}
		}
		if (k == 2)
		{
			printf("%d ", i);
		}
	}
}