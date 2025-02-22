#include<stdio.h>

void print_char(int count,char ch)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c",ch);
    }
}

void make_head(int w)
{
    int center = ( (int)((w+1)/2) );
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


void make_separator(int w)
{
    printf("+");
        for (int j = 0; j < (w-2); j++)
        {
            printf("-");
        }
        printf("+ \n");
}

void make_body(int w,int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("+");
        for (int j = 0; j < (w-2); j++)
        {
            printf("*");
        }
        printf("+ \n");
    }
    make_separator(w);
}


// w: rocket width
// c: rocket body count
// l: rocket body length

void make_rocket(int w,int c,int l)
{
    make_head(w);
    make_separator(w);

    for (int i = 0; i < c; i++)
    {
        make_body(w,l);
    }
    
    make_head(w);
}

void main()
{
    make_rocket(11,4,6);
}