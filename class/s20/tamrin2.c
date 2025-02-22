#include<stdio.h>

int is_prime(int a)
{
    for (int j = 2; j < a; j++)
    {
        if (a % j == 0)
        {
            return -1; // -1=false
        }
        
    }
    if (a >= 2)
    {
        return 1; // 1=true
    }
    if (a<2)
    {
        return -1; // -1=false
    }
    
}

void main()
{
    for (int i = 0; i < 100; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d \n",i);
        }
        
    }
    
}