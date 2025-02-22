#include<stdio.h>

void factorial(int*,int);

void findfactorial(int* num,int n)
{
    *num =1;
    for (int i = 1; i <= n; i++)
    {
        *num = *num * i;
    }
}

int main(int argc, char const *argv[])
{
    int* n;
    printf("Please enter your number:");
    scanf("%d",n);
    factorial(n,5);
    printf("Your number factorial is : %d",*n);
    
    
    int n;
    int f;

    printf("Input a number: ");
    scanf("%d",&n);

    findfactorial(&f,n);

    printf("factorial %d is %d",n,f);
    
    return 0;
}


void factorial(int* x,int num)
{
    int mul = 1;
    for (int i = 1; i <= num; i++)
    {
        mul *= i;
    }
    *x = mul;

}

