#include<stdio.h>


int main()
{
    int x;
    int a[100];
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= (x /2) + 1; i++)
    {
        if ((a[i] - a[x - i + 1]) != 0)
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
}
