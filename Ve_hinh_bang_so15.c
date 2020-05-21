#include <stdio.h>


int main()
{
	int a, t;
	int i, k, b = 0;
	scanf("%d", &a);
	for (i = a; i >= 1; i--)
	{
		for (k = a; k >= a - b ; k--)
		{
			printf("%d ", k);
		}
		t = a - b;
		for (k = a - b; k > 1; k--)
		{
			printf("%d ", t);
		}
		b++;
		printf("\n");
	}
}