#include<stdbool.h>
#include<stdio.h>

bool is_divisable(int a,int b)
{
    if (a % b == 0)
        return true;
    else
        return false;
}

bool is_prime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (is_divisable(N,i))
        {
            return false;
        }
    }
    if (N<=1)
    {
        return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 101; i++)
    {
        if (is_prime(i))
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}