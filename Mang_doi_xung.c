#include <stdio.h>


int main()
{
	int x;
	int a[99];
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= x; i++)
	{
		if (a[i] != a[x - i + 1])
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
}