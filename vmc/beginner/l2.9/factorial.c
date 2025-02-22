#include<stdio.h>
#include<assert.h>
float factorial(float n)
{
    assert (n>=1); // n must be positive(pre-condition)
    float mul = 1;
    for (float i = 1; i <= n; i++)
    {
        assert(mul >= 1); // loop invariant(condition)
        mul *= i;
    }
    assert(mul >= 1); // post-condition
    return mul;
}

int main()
{
    printf("number          factorial\n");
    for (float i = 1; i < 21; i++)
    {
        printf("%4.0f             %.0f\n",i,factorial(i));
    }
    // assertation failed    printf("%4.0f             %.0f\n",-10,factorial(-10));
}