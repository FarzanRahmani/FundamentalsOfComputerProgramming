#include<stdio.h>

void main()
{
    int z = 2;
    printf("%d \n",z);
    int j;
    for(int i=2 ; i<100; i = i +1)
    {
        for (j=2; j < i-1; j++)
        {
            if (i % j ==0)
            {
                break;
            }
        }
        if (i%j != 0)
        {
            printf("%d\n",i);
        }
        
    }
}