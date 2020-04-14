#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float a, b, c, t, n, ch, r;
	scanf("%f", &a);
	scanf("%f", &b);
	if (b != 0)
	{
		t = a - b;
		c = a + b;
		r = (int)a % (int)b;
		n = a * b;
		ch = a / b;
		printf("%0.0f %0.0f %0.0f %0.2f %0.0f", c, t, n, ch, r);
	}
	else
	{
		printf("0");
	}
}