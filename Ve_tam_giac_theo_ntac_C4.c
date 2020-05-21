#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
	for (int i = x; i >= 1; i--)
	{
		if (i < x)
		{
			for (int f = 1; f <= x - i; f++)
			{
				printf("~");
			}
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
}
