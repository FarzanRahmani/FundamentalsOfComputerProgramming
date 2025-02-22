#include<stdio.h>
#include<stdbool.h>


void reverse(char* buf,int size)
{
    int inx =0;
    char* pbuf = &buf[0];
    while (*pbuf != 0)
    {
        inx++;
        pbuf++;
    }
    char x = 1;
    for (int i = 0; i < (int)(inx/2); i++)
    {
        x = buf[inx-1-i];
        buf[inx-1-i] = buf[i];
        buf[i] = x;
    }
}
            // char* = ye chizi ke toosh cahr ee pas khodesh address ee ye char ee
bool compare(char* buf1,int size1,char* buf2,int size2)
{
    int inx =0;
    char* pbuf = buf1;
    while (*pbuf != 0)
    {
        inx++;
        pbuf++;
    }
    char see[inx+1]; // age vorrodi be soorat array bood lazeme re[indx +1]
    char x = 1;
    for (int i = 0; i < inx; i++)
    {
        see[i]= buf1[inx-1-i];
    }
    see[inx] = 0;   //age vorrodi be soorat array bood lazemem
    return see == buf2;
}
void main()
{
    char mystr[10] ="Ali";
    reverse(mystr,10);
    printf("%s\n",mystr);
    char x[15] = "farzanrahmani";
    reverse(x,15);
    printf("%s\n",x);
    bool y = compare(mystr,10,"ilA0",4);
    if (y)
        printf("true");
    else
        printf("false");
}