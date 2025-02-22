#include<stdlib.h>

int* repeat_value(int value,int count)
{
    int* r = (int*)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        r[i] = value;
    }
    return r;
}

int* range(int from,int to)
{
    int count = to - from + 1;
    int* r = (int*)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++,from++)
    {
        r[i] = from;
    }
    return r;
}