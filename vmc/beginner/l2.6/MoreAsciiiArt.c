#include<stdio.h>
#include<stdbool.h>

void print_left_triangle(int base)
{
    for (int i = 1; i < base+1; i++)
    {
        if (i%2==1)
        {
            for (int j = 0; j < i; j++)
            printf("%%");
        }
        else
        {
            for (int j = 0; j < i; j++)
            printf("*");
        }
        printf("\n");
    }
}

#include<stdio.h>

void print_char(int count,char ch)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c",ch);
    }
}

void print_cone(int baseSize)
{
    int center = ( (int)((baseSize+1)/2) );
    for (int i = 0; i < (center-1); i++)
    {
        printf(" ");
    }
    printf("^ \n");
    for (int i = 1; i < center; i++) // problem
    {
        print_char(center-i-1, ' ');
        print_char(i,'/');
        printf("|");
        print_char(i,'\\');
        printf("\n");
    }
}

int main()
{
    print_left_triangle(10);
    print_cone(7);
    for (int i = 1; i < 10; i += 2)
    {
        print_cone(i);
    }
    
    return 0;
}
