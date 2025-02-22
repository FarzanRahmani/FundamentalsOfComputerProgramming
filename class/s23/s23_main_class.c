#include<stdio.h>
#include<stdbool.h>

void is_bit_on(int num, int bit, bool* is_bit_on)
{
    *is_bit_on = (num >> (bit-1)) & 1 == 1;    // khorooji ya 1==1(True) ya 0==1(False)
}

int get_max2(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

void get_max(int a, int b, int* pMax)
{
    if (a > b)
        *pMax = a;
    *pMax = b;
}

void get_max_min(int a, int b, int* pMax, int* pMin)
{
    if (a > b)
    {
        *pMax = a;
        *pMin = b;        
    }
    else
    {
        *pMax = b;
        *pMin = a;    
    }    
}

void swap(int* a, int* b)
{
    int s = *a;
    *a = *b;
    *b = s; 
}


int main()
{    
    int a1 = 5;
    int b1 = 4;

    printf("%d, %d\n", a1, b1);
    swap(&a1, &b1);
    printf("%d, %d\n", a1, b1);




    int a1_infunc = a1;
    a1 = 6;

    int* pa1 = &a1;
    a1 = 7;
    printf("%d \t %x\n", a1, pa1);
    int max_num = get_max2(a1, b1);
    int max_num2;
    get_max(5, 4, &max_num2);

    int w;

    int max1, min1;
    int* pmax1 = &max1; // agar *pmax1 ro taghir bedi chon address oona yekie max1 ham hamoon meghdar mishe ya bar aks agar meghdar max1 ro taghir bedi pmax1 ham hamoon mishe
    int* pmin1 = &min1;
    get_max_min(10, 11, pmax1, pmin1);
    printf("%d \t %d\n",max1,min1);
    printf("%d \t %d\n",pmax1,pmin1);
    printf("%d \t %d\n",*pmax1,*pmin1);

}
