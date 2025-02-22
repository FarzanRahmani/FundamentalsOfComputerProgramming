#include<stdio.h>
#include<math.h>
float quadratic(float a,float b,float c,float* x,float* y)
{
    float Delta = powf((powf(b,2) - 4*a*c),0.5);
    float x1 = ((-b + Delta)/(2*a));
    float x2 = ((-b - Delta)/(2*a));
    *x = x1;
    *y = x2;
}

int main()
{
    float u,v;
    quadratic(1,0,-1,&u,&v);
    printf("the first root is %f and the second root is %f",u,v);
    return 0;
}
