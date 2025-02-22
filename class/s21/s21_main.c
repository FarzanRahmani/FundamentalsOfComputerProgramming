#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int x = 5;  //global

bool is_odd(int n)
{
    //int w2 = 15;
    printf("asdkjflsadk");
    if (n % 2 == 1)
        return true;
    return false;
}

int main(int argc, char const *argv[])
{   
    for(float f = 0;  3 < 1; f = f * 0.1)
    {}

    // float f1 = 5.5;
    // int i1 = (int) f1;
    // float f2 = (float) i1;
    // float w = ((float)i1) / 2;
    // unsigned long xx = 2983473298479321;

    // int n = 57;
    // if (n % 5 > 0)
    // {
    //     int n2 = n * n;
    //     printf("%d\n", n2);
    // }

    // bool is_n_odd = is_odd(n);
    // if (is_n_odd)
    // {
    //     printf("%d is odd\n", n);
    // }

    // printf("%d\n", x);
    // return 0;

    char c = 'A';
    printf("%d\n", 'A');
    printf("%c\n", 'A');
    printf("%f\n", 'A');
    return 0;

    // int w = 99999;
    // for (int i=0; i<1000; i++)
    // {
    //     w = w * 100;
    //     printf("%d\n", w);
    // }
    // return 0;
    
    // printf("%d\n", sizeof(w));
    // printf("%g, %g\n", DBL_MIN, DBL_MAX);
    // printf("%g, %g\n", FLT_MIN, FLT_MAX);
    // return 0;
}