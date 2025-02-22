#include<stdio.h>

void compute_change(int num)
{
    printf("The change from a dollar for %d cents is \n",num);
    int change = 100 - num;
    printf("%d  quarter(s) \n",(int)(change/25));
    change = change - ((int)(change/25))*25;
    printf("%d  dime(s) \n",(int)(change/10));
    change = change - ((int)(change/10))*10;
    printf("%d  nickel(s) \n",(int)(change/5));
    change = change - ((int)(change/5))*5;
    printf("%d  penniess \n",change);
}
int main()
{
    compute_change(8);
    compute_change(45);
    return 0;
}
