#include<stdio.h>


int main()
{
    int a;
    scanf("%d", &a);
	for (int i = a; i >= 1; i--)
	{
		for (int k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
}
