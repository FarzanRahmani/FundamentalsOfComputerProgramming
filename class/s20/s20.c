#include<stdio.h>

//khoroji
int sum(int a,int b)
{
    return a + b;
}

void print_my_number(int x)
{
    printf("Your number is : %d\n",x);
}


//void = hichi = khorooji tabe chizi nist
void main()
{
    int c;
    c = sum(10,5);
    print_my_number(c);
    printf("the number is %d %d", c,5);
        //%d = shabihe {} dar python
}