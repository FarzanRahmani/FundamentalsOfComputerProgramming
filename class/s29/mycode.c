int strlen(const char* pch, int size)
{
    int len=0;
    while (*pch && len<size)
    {
        len++; pch++;
    }
    return len;
}