#include<stdbool.h>
#include<stdio.h>
#include<assert.h>

bool is_divisable(int a,int b)
{
    if (a % b == 0)
        return true;
    else
        return false;
}

bool is_prime(int N)
{
    assert(N>0); // assretation
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
    for (int i = 1; i < 101; i++)
    {
        if (is_prime(i))
        {
            printf("%d\n",i);
        }
        
    }

    // is_prime(-10); assertation failed
    return 0;
}