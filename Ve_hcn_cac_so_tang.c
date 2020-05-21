#include <stdio.h>

int main()
{
	int h, c, n = 1;
	scanf("%d", &h);
	scanf("%d", &c);
	for (int i = 1; i <= h; i++)
	{
		for (int k = 1; k <= c; k++)
		{
			printf("%d", n);
			n++;
		}
		printf("\n");
	}
}