#include<stdio.h>

void factorial(int* x,int num)
{
    int mul;
    for (int i = 1; i <= num; i++)
    {
        mul *= i;
    }
    *x = mul;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter your number:");
    scanf("%d",&n);
    factorial(&n,5);
    printf("Your number factorial is : %d",n);
    return 0;
}
