#include<stdio.h>

int test2()
{                  //0x = namad hex
    unsigned int x = 0xffaaff99;
    int nums[10]; // araye ii ba 10 ozve 4 byte i ke mishe 40 byte
    for (int i=0; i<10; i++)
    {
        nums[i] = i;
    }
    int w = nums[3];

    //      (char*)       (int*) mesle (int) ya (float)  miad tabdil be eshre be yek int mikone chon aslesh be ye array eshare mijone ke 40 byte ee vali ba estefade az (int*) tabdil be 4 byte mishe
    // int* pos4th = ((int*) &nums) + 3; // agar nemizadim (int*) be jaye 12 byte 90 byt miraft joloo
    // int* pos4th =  (&nums + 3);  // be jaye 12 byte 90 byte miraft joloo  n
    int* pos4th = &nums[0] + 3; // nums --> 40byte(array(10 int))    nums[0] --> 4byte(int)    &nums = & nums[0]
                        // in 3 ro khodesh ba vahed ghabli hamahang mikone
    int s = *pos4th;
    return 0;
}

int test1()
{
    unsigned int x = 0xffaaff11;
    return test2();
}

void s24()
{
    int test[20];
    for (int i=0; i<20; i++)
        test[i] = i;

    int* x = &(test[0]); // x pointer be test[0](noee int)   
    j = 0;
    while (j<20)
    {
        int* y = (x + j);
        printf("%d \n",*y);
        j++;
    }
}

void s24_better()
{
    int test[20];
    for (int i=0; i<20; i++)
        test[i] = i;

    int* x = &(test[0]); // x pointer be test[0](noee int)   
    while (*x<20)
    {
        printf("%d \n",*x);
        x++;
    }
}

int main()
{
    unsigned int x = 0xffaaffbb;
    int w = test1();
    printf("done\n");
    s24();
}
