#include<stdio.h>
#include<conio.h>
int main() {
	int N;
	int c = 0, i;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		if (N % i == 0)
			c++;
	}
	if (c == 2) {
		printf("1");
	}
	else {
		printf("0");
	}
}