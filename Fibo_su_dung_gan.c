#include <stdio.h>


int main()

{
	int x;
	int a, b, c;
	scanf("%d", &x);
	a = 0;
	b = 1;
	printf("%d %d ", a, b);
	for (int i = 3; i <= x; i++)
	{
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
}