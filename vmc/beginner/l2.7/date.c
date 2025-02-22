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

int days_in_month(int year,int month_num)
{
    // Jan = 1 , Feb=2 , ... , Dec = 12
    if (month_num == 2)
        if (is_leap_year(year))
            return 29;
        else
            return 28;
    if (month_num == 4 || month_num == 6 || month_num == 9 || month_num == 11 )  
        return 30;
    return 31;
}

int days_before_date(int year,int monthNumber,int dayNumber)
{
    int sum = 0;
    for (int i = 1; i < monthNumber ; i++)
    {
        sum += days_in_month(year,i);
    }
    sum += (dayNumber-1);
    return sum;
}

int day_of_the_week(int year ,int monthNumber,int dayNumber)
{
    // 2014 = year    0=Monday, … 6=Sunday
    // first_day_of_2014 = wednesday
    int first_day_of_2014 = 2;
    int sum = 0;
    sum = days_before_date(2014 , monthNumber , dayNumber);
    int hamnahesht = sum % 7;
    first_day_of_2014 += hamnahesht;
    return (first_day_of_2014%7);
}

int main(int argc, char const *argv[])
{
    printf("%d\n",days_in_month(2021,12));
    printf("%d\n",days_before_date(2014,1,1));
    printf("%d\n",days_before_date(2014,12,31));
    printf("%d\n",day_of_the_week(2014,4,25));
    return 0;
}
