#include<stdbool.h>
#include<stdio.h>


int main(int argc, char const *argv[])
{
    float sum = 0;
    int The_number_of_entries = 0;
    float max = -1;
    float min = -1;
    float The_average;
    while (true)
    {
    printf("please enter a number , -1 to finish\n");
    float x;
    scanf("%f",&x);
    // x = float(input("please enter a number , -1 to finish "))

    sum = sum + x;

    The_number_of_entries++;

    The_average = sum / The_number_of_entries;

    if (x > max)
        max = x;

    if (x < min) 
        min = x;

    if (x == -1)
        break;
    }


    printf("1. The number of entries is %d \n" , The_number_of_entries );
    printf("2. The average is %f \n" ,The_average );     
    printf("3. The minimum is %f \n" ,min );
    printf("4. The maximum is %f \n" ,max );   
    return 0;
}
