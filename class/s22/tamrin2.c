#include<stdbool.h>
#include<stdio.h>
#include<math.h>


void is_bit_on2(int number,int bit, bool *is_on)
{
    number >>= (bit-1);
    number &= 1;
    if (number==1)
    {
        *is_on = true;
    }
    else
    {
        *is_on = false;
    }
}

void  is_bit_on3(int num , int bit , bool * is_bit_on)
{
    int n = pow(num, bit-1);
    if (n & num)
    {
        *is_bit_on = true;
    }
    else
    {
        *is_bit_on = false;
    }
    
}

void main()
{
    bool y;
    is_bit_on2(463,7, &y);
    if ( y )
    {
        printf("bit is on\n");
    }
    else
    {
        printf("bit is off\n");
    }
    
    int n;
    int b;
    bool q;
    printf("enter your number");
    scanf("%d",&n); // manande input dar python
    printf("enter your bit");
    scanf("%d",&b);
    is_bit_on2(n,b, &q);
    if (q)
    {
        printf("bit is on\n");
    }
    else
    {
        printf("bit is off\n");
    }

}