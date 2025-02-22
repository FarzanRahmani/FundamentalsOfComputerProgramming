#include <stdio.h>
#include <stdbool.h>
bool concat(
    char *pch1, int size1, 
    char* pch2, int size2, 
    char* pchTarget, int targetsize)
{
    char* pcht = pchTarget;
    int i1 = 0;     // zamani ke *pch har chi be joz 0 bashe True mishe
    for (char* pch = pch1; *pch && (i1<size1) && (i1<targetsize); pch++, pcht++, i1++)
        *pcht = *pch;

    if (i1 == targetsize)
        return false;

    int i2 = 0;
    for (char* pch = pch2; *pch && (i2<size2) && (i1+i2 < targetsize); pch++, pcht++, i2++)
        *pcht = *pch;
    
    if (i1+i2 == targetsize)
        return false;

    if (i1+i2+1 <= targetsize)
        *pcht = 0;
    else
        return false;
    
    return true;
}

void main()
{
    const char buff1[7] = "Farzan";
    const char buff2[8] = "Rahmani";
    char buff3[14];
    bool success = concat(&(buff1[0]), 7, &(buff2[0]), 8, &(buff3[0]), 14);
    if (! success)
        printf("Error\n");
        
    printf("%s\n",buff3);

    const char buff11[10] = "farzan";
    const char buff12[10] = "rahmani";
    char buff13[15];
    char buff14[10];

    bool test3 = concat(&(buff11[0]), 10, &(buff12[0]), 10, &(buff13[0]), 15);
    if (! test3)
        printf("Error\n");
    else
        printf("%s\n",buff13);

    bool test4 = concat(&(buff11[0]), 10, &(buff12[0]), 10, &(buff14[0]), 10);
    if (! test4)
        printf("Error\n");
    else
        printf("%s\n",buff14);

    // const char buff1[7] = "Ali";
    // const char buff2[8] = "";
    // char buff3[14];
    // bool success = concat(&(buff1[0]), 7, &(buff2[0]), 8, &(buff3[0]), 14);
    // if (! success)
    //     printf("Error\n");
        
    // printf("%s\n",buff3);
}