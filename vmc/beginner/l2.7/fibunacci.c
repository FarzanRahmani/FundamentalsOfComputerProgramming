#include<stdio.h>

int Fi(int n)
{
    // n must be natural
    if (n<3)
    {
        return 1;
    }
    return Fi(n-1)+Fi(n-2) ;
}

int main(int argc, char const *argv[])
{
    printf("  index    value\n");
    for (int i = 1; i <= 20; i++)
    {
        printf("%5d   |    %d\n",i,Fi(i));
    }
    return 0;
}