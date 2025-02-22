#include<stdio.h>

int absolute_value(int x)
{
    if (x >= 0)
        return x;
    else
        return x*(-1);
}

int main(int argc, char const *argv[])
{
    printf("%d\n",absolute_value(-100));
    printf("%d\n",absolute_value(-1));
    printf("%d\n",absolute_value(0));
    printf("%d\n",absolute_value(1));
    printf("%d\n",absolute_value(1000));
    return 0;
}
