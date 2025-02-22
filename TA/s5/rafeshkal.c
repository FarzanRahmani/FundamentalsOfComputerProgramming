#include<stdio.h>
// void shift(char* r)
// {
//     // int len =0;
//     // pStart = a;
//     // pEnd = a;
//     // while (*pEnd) 
//     // {
//     //     len++;
//     //     pEnd++;
//     // }
//     // pEnd--;
//     // int end = *pEnd;
//     // int i =1;
//     // while (*pStart)
//     // {
//     //     pStart++;
//     //     char tem = *pStart;
//     //     pStart--;
//     //     a[i] = *pStart;
//     // }
    
//     char tem0 = r[0];
//     char tem1 = r[1];
//     char tem2 = r[2];
//     r[1] = tem0;
//     r[2] = tem1;
//     r[0] = tem2;
// }

void swap(int* x, int* y, int* z)
{
    int end = *z;
    *z = *y;
    *y = *x;
    *x = end;
}
int main()
{
    // char z[4] = "789";
    // shift(z);
    // printf("%s \n",z);

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    swap(&a,&b,&c);
    printf("%d,%d,%d",a,b,c);

    return 0;
}
