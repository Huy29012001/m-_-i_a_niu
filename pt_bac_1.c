#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    if ((a == 0) && (b == 0))
    {
        printf("VSN");
        return 0;
    }
    else
    {
        if ((a == 0) && (b != 0))
        {
            printf("VN");
                return 0;
        }
        else
        {
            printf("%0.2f", -b / a);
                return 0;
        }
    }
   
}