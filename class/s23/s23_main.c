#include<stdio.h>

void swap(int* a,int* b)
{
    int s = *a;
    *a = *b;
    *b = s; 
}

void main()
{
    int a = 5;
    int b = 4;
    printf("%d,%d\n",a,b);
    swap(&a,&b); // agar me jaye &a va &b khod a va b ro mizashtim dige bad az ejraye tabe a va b taghir nemikard
    printf("%d,%d\n",a,b);


    int* pa = &a; // pa az noee address ee
    int* pb = &b;
    printf("%d,%d\n",pa,pb);
    swap(pa,pb);
    printf("%d,%d\n",a,b);
    printf("%d,%d\n",pa,pb);
    printf("%d,%d\n",*pa,*pb); // *pa == meghdar address pa


}