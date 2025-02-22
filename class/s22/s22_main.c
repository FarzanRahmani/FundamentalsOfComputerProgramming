#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool is_bit_on(int number, int bit)
{

}

void is_bit_on2(int number, int bit, bool* is_on)
{
    *is_on = true;
}


int main()
{   
    bool is_on;
    is_bit_on2(5, 2, &is_on);
    is_on = is_bit_on(12, 3);

    int x;
    printf("nomrat chande? ");
    int status_code = scanf("%s", &x);
    printf("pas normat %d hast\n", x);

    int w = 0;
    w = w + 1;
    w++;
    w+=1;

    w = w - 1;
    w--;
    w-=1;

    w = w * 4;
    w *= 4;

    w = w / 2;
    w /= 2;

    w = 5;
    w = w << 1;
    w <<= 1;

    w = w >> 2;
    w >>= 2;
    
    w = 5 | 8; // or in binary
    w |= 4;
    w &= 8; // and in binary

    w &= 16;
    w >>= 4;
    if (w == 1)
        printf("bit number 5 is one");
    else
        printf("bit number 5 is zero");    

    for(int i = 0;
        i < 10;
        i++)
    {
        printf("%d\n", i);
    }
    // moadel ham hastan
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    i = 0;
    do
    {
        printf("%d\n", i);
    } while (i < 10);

    if ( (i < 10) && (i % 2 == 0) || (i % 2 == 1)) // && = and    || = or
    {
        printf("");
    }
    else if ( i > 100)
    {
        printf("");
    }

    int u = pow(5,3);  // pow hamoon tavan ee
}