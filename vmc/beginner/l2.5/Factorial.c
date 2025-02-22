#include<stdio.h>

int factorial(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}

int main()
{
    printf("%6d",factorial(5));
    return 0;
}