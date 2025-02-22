#include<stdio.h>
#include<math.h>

float average_of_squares0(int n) //starts from 0 to n-1
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += powf(i,2);
    }
    sum = sum/n;
    return sum;
}

float average_of_squares1(int n) //starts from 1 to n
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += powf(i,2);
    }
    sum = sum/n;
    return sum;
}

int main()
{
    printf("The average squares of 0 to 4 is %f \n",average_of_squares0(5));
    printf("The average squares of 0 to 4 is %f \n",average_of_squares1(4));
    return 0;
}

