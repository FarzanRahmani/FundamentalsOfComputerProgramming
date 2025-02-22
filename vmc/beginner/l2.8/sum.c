#include<stdio.h>

int compute_sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum +=i ;
    }
    return sum;
}

// F5 = Run debug    F10 = next line     F11 = step into = boro dakhel tabe    shift+F11 = biroon az tabe  
// mitoni break point ro edit koni masalan ta vaghti ke i = 5

int main(int argc, char const *argv[])
{
    // create a table from 9 down to 1
    printf("  N     compute_sum(N)\n");
    printf("-----------------------\n");
    for (int i = 9; i > 0; i--)
    {
        printf("  %d          %d \n",i,compute_sum(i));
    }
    
    return 0;
}
