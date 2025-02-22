#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef int (*fp_int)(int);

int pow2(int x)
{
    return x*x;
}

int plus10(int x)
{
    return x+10;
}

int sqrt1(int x)
{
    double lowerBound = 0;
    double upperBound = x;
    double differnce = upperBound - lowerBound;
    double mid;
    while (differnce > 0.001)
    {
        mid = (upperBound+lowerBound) / 2 ;
        if ( (mid*mid) < x) 
            lowerBound = mid;
        else
            upperBound = mid;
        differnce = upperBound - lowerBound;
    }
    mid = (int)mid;
    return mid;
}

int negate(int x)
{
    return x*(-1);
}

//           fp_int* --> arraye ee az tabe ha
int* do_action_farzan(fp_int* actions, int fp_size, int x)
{
    int* khorooji = malloc( sizeof(int) * fp_size);
    fp_int operation;
    for (int i = 0; i < fp_size; i++)
    {
        operation = actions[i];
        khorooji[i] = operation(x);
    }
    return khorooji;
}

int do_action(fp_int* actions, int fp_size, int x)
{
    int khorooji = x;
    fp_int operation;
    for (int i = 0; i < fp_size; i++)
    {
        operation = actions[i];
        khorooji = operation(khorooji);
    }
    return khorooji;
}

int main(int argc, char const *argv[])
{
    fp_int my_actions[4] = {pow2, plus10, sqrt1, negate};
    int* fr = do_action_farzan(my_actions,4,22);

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",fr[i]);
    }
    free(fr);
    fr = NULL;


    int r = do_action(my_actions,4,1);
    printf("%d",r);

    return 0;
}
