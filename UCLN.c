#include<stdio.h>

int main() 
{
    int g, m, n, r = 1;
    scanf("%d", &m);
    scanf("%d", &n);
    if ( m >= 0 && n >= 0)
    {
        while (r != 0)
        {
            r = m % n;
            m = n;
            n = r;
        }
        g = m;
        printf("%d", g);
    }
}