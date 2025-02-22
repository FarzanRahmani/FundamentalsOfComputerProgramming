#include<stdio.h>

void s24()
{
    int test[20];
    for (int i=0; i<20; i++)
        test[i] = i;

    int* x = &(test[0]); // x pointer be test[0](noee int)   
    int j = 0;
    while (j<20)
    {
        int* y = (x + j);
        printf("%d \n",*y);
        j++;
    }
}

void main()
{
    s24();
    s24_better();
}

void s24_better()
{
    int test[20];
    for (int i=0; i<20; i++)
        test[i] = i;

    int* x = &(test[0]); // x pointer be test[0](noee int)   
    while (*x<20)
    {               // *x++  dige be khat bad niaz nadare
        printf("%d \n",*x);
        x++;
    }
}