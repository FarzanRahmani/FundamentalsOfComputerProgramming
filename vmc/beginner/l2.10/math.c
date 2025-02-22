#include<stdio.h>
#include<math.h>
#include<stdbool.h>

double factorial(double n)
{
    double mul = 1;
    for (float i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}

int power(int x,int y)
{
    int p = 1;
    for (int i = 0; i < y; i++)
    {
        p *= x;
    }
    return p;
}

double eulers_constant(double precision)
{
    double n = 0;
    double e  = 0;
    while (1/factorial(n) > precision)
    {
        e = e + 1/factorial(n);
        n = n + 1;
    }
    return e;
}

double e_xp(double x,double precision)
{
    double n = 0;
    double sum = 0;
    while (true)
    {
        if( (pow(x,n)/ factorial(n)) < precision)
            break;
        sum = sum + (pow(x,n) / factorial(n)); 
        n = n+1;
    }
    return sum;
} 

double e_xp2(double x,double precision)
{
    double n = 1;
    double sum = 1;
    double a_n = 1;
    while (true)
    {
        if (a_n < precision)
            break;
        a_n = a_n * (x/n);
        sum = sum + a_n;
        n = n+1;
    }
    return sum;
}

double abs1(double x)
{
    if (x>=0)
        return x;
    else
        return x*(-1);
} 

bool near(double x,double y,double closeness)
{
    x = abs1(x);
    y = abs1(y);
    if (abs1(x-y) <= closeness)
        return true;
    else
        return false;
}

double t_sin(double x,double precision)
{
    //x bar hasb degree ee
    double rad = (3.14159265359 / 180)*x;
    int n=1;
    double sum = 0;
    int sign = 1;
    double a_n = 0;
    while (true)
    {
        if( (pow(rad,n)/factorial(n)) < precision )
            break;
        a_n = ((pow(rad,n)/factorial(n)) * sign);
        sum = sum + a_n;
        n = n + 2;
        sign = sign*(-1);
    }
    return sum;
}

double square_root(double x,double precision)
{
    /// x >1 
    double lowerBound = 0;
    double upperBound = x;
    double differnce = upperBound - lowerBound;
    double mid;
    while (differnce > precision)
    {
        mid = (upperBound+lowerBound) / 2 ;
        if (pow(mid,2)< x) 
            lowerBound = mid;
        else
            upperBound = mid;
        differnce = upperBound - lowerBound;
    }
    return mid;
}

double root(double x,double n,double precision)
{
    // x >1 
    double lowerBound = -abs1(x);
    double upperBound = abs1(x); 
    double differnce = upperBound - lowerBound;
    double  mid;
    while (differnce > precision)
    {
        mid = (upperBound+lowerBound) / 2;
        if (pow(mid,n)< x) 
            lowerBound = mid;
        else
            upperBound = mid;
        differnce = upperBound - lowerBound;
    }
    return mid;
}

double Ln(double x,double precision)
{
    // x>1
    double lowerBound = 0;
    double upperBound = x;
    double difference = upperBound - lowerBound;
    double mid;
    while (difference > precision)
    {
        mid = (lowerBound+upperBound)/2;
        if (e_xp(mid,precision) < x) 
            lowerBound = mid;
        else
            upperBound = mid;
        difference = upperBound - lowerBound;
    }
    return mid;
}

int main(int argc, char const *argv[])
{
    double approximate_1 = e_xp(5,0.001);
    double approximate_2 = e_xp2(5,0.001);
    printf("%f\n",approximate_1);
    printf("%f\n",approximate_2);
    if( near(  approximate_1  ,  approximate_2  , 0.001 )) 
        printf("True\n");
    else
    {
        printf("False\n");
    }
    printf("%f\n",t_sin(90,0.001));
    printf("%f\n",t_sin(45,0.001));
    printf("%f\n",t_sin(60,0.001));


    printf("%f \n",eulers_constant(0.001));

    printf("%f \n",square_root(2,0.0001));
    printf("%f \n",root(7,6,0.00001));

    printf("%f \n",Ln(6,0.01));


    return 0;
}
