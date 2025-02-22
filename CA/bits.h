int count_on_bits(int x)
{
    int sum = 0;
    while (x>0)
    {
        if (x & 1 == 1)
        {
            sum++;
        }
        x >>= 1;
    }
    return sum;
}

int make_bits(int n,int m)
{
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r <<= (m+1);
        r |=  1;
    }
    return r;
}
