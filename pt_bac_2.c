#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float n1, n2, d, a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("NO");
				return 0;
			}
			else
			{
				printf("NO");
				return 0;
			}
		}
		else
		{
			n1 = -c / b;
			printf("%0.2f", n1);
		}
	}
	else
	{
		d = b * b - 4 * a * c;
		if (d < 0)
		{
			printf("NO");
			return 0;
		}
		else
		{
			if (d == 0)
			{
				n1 = -b / (2 * a);
				printf("%0.2f", n1);
				return 0;
			}
			else
			{
				n1 = (-b + sqrt(d)) / (2 * a);
				n2 = (-b - sqrt(d)) / (2 * a);
				printf("%0.2f %0.2f", n1, n2);
				return 0;
			}
		}
	}
}