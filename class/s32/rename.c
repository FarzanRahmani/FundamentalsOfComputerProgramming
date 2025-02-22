#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

typedef struct
{
    double i;
    double r;
}complex_number;

complex_number* q15_create_complex_number(int im,int re)
{
    complex_number* pcn = (complex_number*)malloc(sizeof(complex_number*));
    pcn->i = im;
    pcn->r = re;
    return pcn;
}

char* q17_get_cn_ptr1(complex_number* pcn)
{
    char* x = (char*)malloc(sizeof(char*));
    x = (char*)pcn;
    return x;
}

char* q17_get_cn_ptr2(complex_number* pcn)
{
    char* x = (char*)malloc(sizeof(char*));
    x = (char*)pcn;
    return x+1;
}

int main(int argc, char const *argv[])
{
    complex_number* pcn = q15_create_complex_number(32343.14152831, 11112121.83838);
    char* ptr1 = q17_get_cn_ptr1(pcn);
    char* ptr2 = q17_get_cn_ptr2(pcn);
    int w = *ptr1;
    w <<= 8;
    w |= *ptr2;
    // REQUIRE( w == 0x0e3a);
    free(pcn);    

    pcn = q15_create_complex_number(9328347.23847192, 3834718.1238738);
    ptr1 = q17_get_cn_ptr1(pcn);
    ptr2 = q17_get_cn_ptr2(pcn);
    w = *ptr1;
    w <<= 8;
    w |= *ptr2;
    // REQUIRE( w == 0x670f);
    free(pcn);    

    return 0;
}