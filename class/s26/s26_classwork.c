#include<stdio.h>
#include<stdbool.h>

void reverse(char* buf,int size)
{
    int len = 0;
    while (buf[len] != '\0' && len < size)
    {
        len++;
    }
    len--; // nemakhahim be sefr dast bezanim
                        // chon taghsim sahih mikone float kardim or i <= (len/2)
    for (int i = 0; i < ((float)len/2); i++)
    {
        char tem = buf[i]; // buf[i] = *(&buf + i)
        buf[i] = buf[len-i];
        buf[len-i] = tem;
    }
    

}

void reverse1(char* buf,int size)
{
    char* pStart = buf;
    char* pEnd = buf;
    while (*pEnd)
    {
        pEnd++;
    }
    pEnd--; // ta vaghti ke *pEnd == 0 nabashe az while biron nemiad pas ma yedone mibarim aghab keakhari ro avaz konim na 0 ro
    while (pStart < pEnd)
    {
        char tem = *pStart; 
        *pStart = *pEnd;
        *pEnd = tem;
        pStart++;
        pEnd--;
    }
    
}

bool compare(const char* buf1,int size1,const char* buf2,int size2)
{
    int len1 =0,len2=0; // int miad posht len1 va len2
    while (*buf1==*buf2 && (*buf1 != 0) && (*buf2 != 0) && 
        len1 < size1  && len2 < size2 )
    {
        buf1++; len1++;
        buf2++; len2++;
    }
    // if (len1 > size1 || len2 > size2)
    // {
    //     return false
    // }
    
    return *buf1 == *buf2;
}