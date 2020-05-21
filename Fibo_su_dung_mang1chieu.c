#include <stdio.h>


int main()
{
	int x;
	int a[92];
	scanf("%d", &x);
	a[1] = 0;
	a[2] = 1;
	printf("%d %d ", a[1], a[2]);
	for (int i = 3; i <= x; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%d ", a[i]);
	}
}