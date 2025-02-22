#include<stdio.h>
#include<stdbool.h>
bool is_leap_year(int year)
{
    if(year % 400 == 0)
        return true;
    if((year % 4 == 0) && (year % 100 != 0)) //elif == else + if
        return true;
    return false;
}


int main()
{
    if (is_leap_year(2020))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    if (is_leap_year(1988))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    if (is_leap_year(1992))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    if (is_leap_year(1600))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    
    if (is_leap_year(1700))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    
    if (is_leap_year(1701))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    
    return 0;
}