#include<stdio.h>
int power(int x,int y)
{
    int p = 1;
    for (int i = 0; i < y; i++)
    {
        p *= x;
    }
    return p;
}
int main()
{
    printf("%d \n",power(5,0));
    printf("%d \n",power(5,1));
    printf("%d \n",power(5,2));
    printf("%d \n",power(2,5));
    return 0;
}
