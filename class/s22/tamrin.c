#include<stdbool.h>
#include<stdio.h>

bool is_bit_on(int number,int bit)
{
    number >>= (bit-1);
    number &= 1;
    if (number == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
    


}

void is_bit_on2(int number,int bit, bool* is_on)
{
    *is_on = true;
}

void main()
{
    bool x = is_bit_on(147,5);
    if (x)
    {
        printf("bit is on\n");
    }
    else
    {
        printf("bit is off\n");
    }
    int n;
    int b;
    printf("enter your number");
    scanf("%d",&n); // manande input dar python
    printf("enter your bit");
    scanf("%d",&b);
    bool t = is_bit_on(n,b);
    if (t)
    {
        printf("bit is on");
    }
    else
    {
        printf("bit is off");
    }

}