#include<stdio.h>
#include<stdlib.h>

int* do_sum(int* a, int* b, int size)
{
    int* sum_array = (int*) malloc(size * sizeof(int)); // farz : size(a) == size(b)
    for(int i=0; i<size; i++)
        sum_array[i] = a[i] + b[i];
    return sum_array;
}

int* do_multiply(int* a, int* b, int size)
{
    int* multiply_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        multiply_array[i] = a[i] * b[i];
    return multiply_array;
}

int* do_divide(int* a, int* b, int size)
{
    int* divide_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        divide_array[i] = a[i] / b[i];
    return divide_array;
}

int* do_subtract(int* a, int* b, int size)
{
    int* subtract_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        subtract_array[i] = a[i] - b[i];
    return subtract_array;
}

//    khoroji  esm= *fp_farzan  vorodi(ha)
typedef int (*function_pointer)(int,int);
// tabe line 4 va 12 va 20 va 28 tanha dar yek line tafavot daran pas be jaye anha faghat do_action minevisim
int* do_action(int* a, int* b, int size, function_pointer op) // op =operation
{
    int* result_array = (int*) malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
        result_array[i] = op(a[i],b[i]);
    return result_array;
}

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

// typedef int (*fp_int)(int);

// int pow2(int x)
// {
//     return x*x;
// }

// int plus10(int x)
// {
//     return x+10;
// }

// int sqrt1(int x)
// {
//     double lowerBound = 0;
//     double upperBound = x;
//     double differnce = upperBound - lowerBound;
//     double mid;
//     while (differnce > 0.001)
//     {
//         mid = (upperBound+lowerBound) / 2 ;
//         if ( (mid*mid) < x) 
//             lowerBound = mid;
//         else
//             upperBound = mid;
//         differnce = upperBound - lowerBound;
//     }
//     mid = (int)mid;
//     return mid;
// }

// int negate(int x)
// {
//     return x*(-1);
// }


// int do_action(fp_int* actions, int fp_size, int x)
// {
//     int khorooji = x;
//     fp_int operation;
//     for (int i = 0; i < fp_size; i++)
//     {
//         operation = actions[i];
//         khorooji = operation(khorooji);
//     }
//     return khorooji;
// }

int main()
{
    int a[] = {5, 4, 3}; // mesl ine  char buff[] = "farzan"
    int b[] = {2, 3, 7};

    // fnptr p = sum;

    int* psum = do_action(a, b, 3, sum); // agar be jaye psum bezari sum ba tabe ghati mikone error mide
    for(int i=0; i<3; i++)
        printf("%d\n", psum[i]);
    free(psum); // memory leak be vojood nayad
    psum = NULL;

    int* pmul = do_action(a, b, 3, mul); // agar be jaye psum bezari sum ba tabe ghati mikone error mide
    for(int i=0; i<3; i++)
        printf("%d\n", pmul[i]);
    free(pmul); // memory leak be vojood nayad
    pmul = NULL;

    int* pdiv = do_action(a, b, 3, division); // agar be jaye psum bezari sum ba tabe ghati mikone error mide
    for(int i=0; i<3; i++)
        printf("%d\n", pdiv[i]);
    free(pdiv); // memory leak be vojood nayad
    pdiv = NULL;

    int* psub = do_action(a, b, 3, sub); // agar be jaye psum bezari sum ba tabe ghati mikone error mide
    for(int i=0; i<3; i++)
        printf("%d\n", psub[i]);
    free(psub); // memory leak be vojood nayad
    psub = NULL;



     // fp_int my_actions[4] = {pow2, plus10, sqrt, negate};
    // int r = do_action(my_actions,4,1);
    // printf("%d",r);

    return 0;
}