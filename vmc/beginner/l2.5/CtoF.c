#include<stdio.h>

int main()
{
    float C;
    printf("please enter the temperature in C: ");
    scanf("%f",&C); // %.2f
    printf("Your temperature on C scale is %.2f \n" , C);
    float F = ((9/5)*C +32);
    printf("Your temperature on F scale is %.2f" , F);
    return 1;
}