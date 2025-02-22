#include <stdio.h>
#include <stdbool.h>


    // int i=5, j=7;
    // int *pi = &i, *s = &j;

    // char a='t', b='s';
    // char *pa = &a, *pg=&b;   atf mishe be ghabli

    // for (int w=2; 
    //      5 % 2 == 1; 
    //      pch1++)
    //      {
    //          ///body
    //      }

    // int w = 2;
    // while (5 % 2 == 1)
    // {
    //     ///body
    //     pch1++;
    // }


bool concat(
    char *pch1, int size1, 
    char* pch2, int size2, 
    char* pchTarget, int targetsize)
{
    char* pcht = pchTarget;
    int i1 = 0;
    for (char* pch = pch1; *pch && (i1<size1) && (i1<targetsize); pch++, pcht++, i1++)
        *pcht = *pch;

    if (i1 == targetsize)
        return false;

    int i2 = 0;
    for (char* pch = pch2; *pch && (i2<size2) && (i1+i2 < targetsize); pch++, pcht++, i2++)
        *pcht = *pch;
    
    // if (i1+i2 == targetsize)  // niazi nist be in
    //     return false;

    if (i1+i2+1 <= targetsize)
        *pcht = 0;
    else
        return false;
    
    return true;
}


int main(int argc, char const *argv[])
{
    const int t = 4;
    char buff1[10] = "Ali";
    char buff2[10] = "Mojdeh";
    char buff3[4];
    bool success = concat(&(buff1[0]), 10, &(buff2[0]), 10, &(buff3[0]), 4);

    const char buff11[10] = "Alssssssi";
    const char buff12[10] = "Mojdeh";
    char buff13[4];
    bool success = concat(&(buff1[0]), 10, &(buff2[0]), 10, &(buff3[0]), 4);



    if (! success)
        printf("Error\n");

//    char* pchTarget = &(buff3[0]);

    char* pch = &(buff1[0]);
    int idx = 0;
    while(*pch != 0)
    {
        buff3[idx] = *pch;
        // *pchTarget = *pch;
        idx++;
        // pchTarget++;
        pch++;
    }

    buff3[idx] = ' ';
    idx++;

    pch = &(buff2[0]);    
    while (*pch != 0)
    {
        buff3[idx] = *pch;
        idx++;
        pch++;
    }
    printf("%s\n", buff3);
    buff3[idx] = 0;
    printf("%s\n", buff3);

    // printf("%c\n", buff[0]);
    // printf("%s\n", buff);

    // const char buff1[7] = "Farzan";
    // const char buff2[8] = "Rahmani";
    // char buff3[14];
    // bool success = concat(&(buff1[0]), 7, &(buff2[0]), 8, &(buff3[0]), 14);
    // if (! success)
    //     printf("Error\n");
        
    // printf("%s\n",buff3);

    // const char buff11[10] = "farzan";
    // const char buff12[10] = "rahmani";
    // char buff13[15];
    // char buff14[10];

    // bool test3 = concat(&(buff11[0]), 10, &(buff12[0]), 10, &(buff13[0]), 15);
    // if (! test3)
    //     printf("Error\n");
    // else
    //     printf("%s\n",buff13);

    // bool test4 = concat(&(buff11[0]), 10, &(buff12[0]), 10, &(buff14[0]), 10);
    // if (! test4)
    //     printf("Error\n");
    // else
    //     printf("%s\n",buff14);

    // const char buff1[7] = "Ali";
    // const char buff2[8] = "";
    // char buff3[14];
    // bool success = concat(&(buff1[0]), 7, &(buff2[0]), 8, &(buff3[0]), 14);
    // if (! success)
    //     printf("Error\n");
        
    // printf("%s\n",buff3);

    return 0;
}

bool concat2(
    char* pch1, int size1,
    char* pch2, int size2,
    char* pchTarget, int targetsize)
{
    int ti=0;
    for (int i = 0; i < size1 && pch1[i]; i++,ti++)
    {
        pchTarget[ti] = pch1[i];
    }
    for (int i = 0; i < size2 && pch2[i]; i++,ti++)
    {
        pchTarget[ti] = pch2[i];
    }
    pchTarget[ti] = 0;
    // optional conditions
}