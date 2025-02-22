#include<stdio.h>

int main()
{
    // nest
    for (int a = 1; a <= 100; a++)
    {
        for (int b = a+1; b < 100; b++)
        {
            for (int c = b+1; c < 100; c++)
            {
                if (a*a + b*b == c*c)
                {
                    printf("%d^2  + %d^2 = %d^2 \n",a,b,c);
                }
                
            }
            
        }
        
    }
    return 0;
}
