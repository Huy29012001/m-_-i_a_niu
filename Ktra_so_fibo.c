#include <stdio.h>


int main()
{
	int x, k = 0;
	int a[99999]; //just a trick :))
	scanf("%d", &x);
	a[1] = 0;
	a[2] = 1;
	if (x >= 0)
	{
		if (x == 1 || x == 0)
		{
			printf("1");
			return 0;
		}
		for (int i = 3; i <= x; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
			if (a[i] == x)
			{
				k++;
			}
		}
		printf("%d", k);
	}
	
}