#include<stdio.h>


int main()
{
    int x;
    scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int k = i; k < i + i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
}
