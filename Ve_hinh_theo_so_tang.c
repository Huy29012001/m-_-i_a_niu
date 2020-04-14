/*
2008
Viết chương trình nhập vào n và in ra hình theo quy luật
INPUT
5
OUTPUT
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int i, a, k;
	scanf("%d", &a);
	if (a != 0)
	{
		for (i = 1; i <= a * a; i++)
		{
			printf("%d ", i);
			if (i % a == 0)
			{
				printf("\n");
			}

		}
	}
	
}