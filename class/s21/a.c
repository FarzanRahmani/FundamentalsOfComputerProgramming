#include <stdio.h>

int sum(int x); //emza

int factorial(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul = mul*i;
    }
    return mul;
}
void main()
{
    int x;
    x = factorial(6);
    printf("%d\n", x);
    printf("%d",sum(10));
}

int sum(int x)
{
    int sum =0;
    for (int i = 0; i < x; i++)
    {
        sum += i;
    }
    return sum;
}