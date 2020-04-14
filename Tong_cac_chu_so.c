#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()

{
	int a, r, t;
	scanf("%d", &a);
	r = 0;
	t = 0;
	while (a>=1)
	{
		r = a % 10;
		t = t + r;
		a = (a - r) / 10;

	}
	printf("%d", t);
}