#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ((a % b == 0) && (a % c == 0))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}