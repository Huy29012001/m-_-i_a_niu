#include<stdio.h>
int main()
{
    int a, i;
    scanf("%d",&a);
	i = 1;
    while(a>=10)
    {
    	a = a / 10;
    	i++;
	}
    printf("%d", i);
    return 0;
}

