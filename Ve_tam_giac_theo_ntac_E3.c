#include<stdio.h>


int main()
{
    int x;
    int a[100];
    a[1] = 1;
    scanf("%d", &x);
    for (int i = 2; i <= x; i++)
    {
        a[i] = a[i - 1] + 2;
    }
    for (int k = 1; k <= x; k++)
    {
        for (int i = k; i <= x; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
    }
}