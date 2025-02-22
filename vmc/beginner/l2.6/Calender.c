#include<stdio.h>
#include<stdbool.h>

// char[10] print_month(int monthNumber)
// {
//     if (monthNumber == 1) 
//         return "January";
//     else
//         if (monthNumber == 2) 
//             return "February";
//     else
//         if (monthNumber == 3) 
//             return "March";
//     else
//         if (monthNumber == 4) 
//             return "April";
//     else
//         if (monthNumber == 5) 
//             return "May";
//     else
//         if (monthNumber == 6) 
//             return "June";
//     else
//         if (monthNumber == 7) 
//             return "July";
//     else
//         if (monthNumber == 8) 
//             return "Auguest";
//     else
//         if (monthNumber == 9) 
//             return "Septemper";
//     else
//         if (monthNumber == 10) 
//             return "October";
//     else
//         if (monthNumber == 11) 
//             return "November";
//     else
//         if (monthNumber == 12) 
//             return "December";
// }

void print_month(int monthNumber)
{
    if (monthNumber == 1) 
        printf("January");
    else
        if (monthNumber == 2) 
            printf("February");
    else
        if (monthNumber == 3) 
            printf("March");
    else
        if (monthNumber == 4) 
            printf("April");
    else
        if (monthNumber == 5) 
            printf("May");
    else
        if (monthNumber == 6) 
            printf("June");
    else
        if (monthNumber == 7) 
            printf("July");
    else
        if (monthNumber == 8) 
            printf("Auguest");
    else
        if (monthNumber == 9) 
            printf("Septemper");
    else
        if (monthNumber == 10) 
            printf("October");
    else
        if (monthNumber == 11) 
            printf("November");
    else
        if (monthNumber == 12) 
            printf("December");
}

int main()
{
    printf("monthNumber      month\n");
    printf("-----------------------------\n");
    for (int i = 1; i < 13; i++)
    {
        printf("     %d           ",i);
        print_month(i);
        printf("\n");
    }
    return 0;
}
