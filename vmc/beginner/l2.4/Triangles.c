#include<stdio.h>

void print_left_triangle(int base)
{
    for (int i = 1; i < base+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void print_left_triangle1(int base,char c)
{
    for (int i = 1; i < base+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}

void print_right_triangle(int base,char c)
{
    for (int i = 1; i < base+1; i++)
    {
        for (int k = 0; k < base-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}


int main()
{
    print_left_triangle(20);
    print_left_triangle1(20,'%');
    print_right_triangle(20,'*'); // ' ' = char     " " = string
    return 1;
}