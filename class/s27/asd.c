#include<stdio.h>

int strlen(const char* pch,int size)
{
    int x = 0;
    while (*pch && x<size) // moadele while(*pch != 0)
    {
        x++;
        pch++;
    }
    //x--;
    return x;
}
int main()
{
    const char a[4] = "ali";
    int x = strlen(a,4);
    printf("%d",x);
    return 0;
}