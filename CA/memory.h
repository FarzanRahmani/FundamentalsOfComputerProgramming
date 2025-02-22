void swap(int* pa,int*  pb)
{
    if (pa != nullptr && pb != nullptr)
    {
        int tem = *pa;
        *pa = *pb;
        *pb = tem;
    }
    return;

    // if (pa == nullptr || pb == nullptr)
    //     return;
    // int tem = *pa;
    // *pa = *pb;
    // *pb = tem;
}

unsigned char get_byte(unsigned int n,int byte_number )
{
    // A signed char is same as an ordinary char and has a range from -128 to +127; whereas , an unsigned char has a range from 0 to 255. ... An 8-bit byte of course can hold values from 0 to 255.
    // sigend char --> (+ or -)0101010  | unsigned char --> 10101010
    n >>= (8*(byte_number));
    n &= 0xff; // 0xff = 11111111
    return n; // return (unsigned char)n
}

char* address_plus(char* pc,int n)
{
    return pc + n;
}

int array_as_int(char* pch)
{
    // pointer_be_character --> pointer_be_8ta_bit(1byte)  | pointer_be_integer --> pointer_be_32ta_bit(4byte)
    int* pn = (int*)pch;
    return *pn;
}