#include<stdio.h>

int main()
{
    float F;
    printf("please enter the temperature in F: ");
    scanf("%f",&F);
    printf("Your temperature on F scale is %.2f \n" , F);
    float C = ((F - 32 )* 5/9);
    printf("Your temperature on C scale is %.2f" , C);
    return 1;
}