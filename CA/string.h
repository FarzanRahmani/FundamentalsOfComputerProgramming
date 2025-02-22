#include<stdbool.h>
int str_len(char* buf)
{
    int len = 0;
    while (*buf != 0)
    {
        len++;buf++;
    }
    return len;
}

bool str_compare(char* pch1,int size1,char* pch2,int size2)
{
    while ((*pch1 != 0) && (*pch2 != 0))
    {
        if (*pch1 != *pch2)
        {
            return false;
        }
        pch1++;
        pch2++;
    }
    return true;
}

bool str_copy(char* src,int size1,char* tgt,int size2)
{
    while (*src )// *src == *src != 0
    {
        *tgt = *src;
        tgt++;src++;
    }
    *tgt = 0;
    return true;
}

void str_append(char* buf,int size_buf, char* str)
{
    while(*buf)
    {
        buf++;
    }
    while (*str)
    {
        *buf = *str;
        buf++;str++;
    }
    *buf = 0; 
}