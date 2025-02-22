#include<stdio.h>

float factorial(float n)
{
    float mul = 1;
    for (float i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}

int main()
{
    printf("number          factorial\n");
    for (float i = 1; i < 21; i++)
    {
        printf("%4.0f             %.0f\n",i,factorial(i));
    }
}