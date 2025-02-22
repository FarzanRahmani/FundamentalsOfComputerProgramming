#include <stdio.h>
#include <stdbool.h>


bool concat(
    const char* pch1, int size1, 
    const char* pch2, int size2, 
    char* pchTarget, int targetsize)
{
    int inx =0;

    char* test_pch1 = pch1; // chon mikhahim az pch1 jolo tar estefade konim age taghiresh bedim dige ghabel estefade nist
    char* test_pch2 = pch2;

    while (*test_pch1 != 0)
    {
        inx++;
        test_pch1++;
    }
    inx++; // be khater space bein do ta string dakhel target ee
    while (*test_pch2 != 0)
    {
        inx++;
        test_pch2++;
    }
    inx++; // be khater akharin char = 0
  
    if (inx > targetsize)
    {
        return false;
    }
    
    inx = 0;
    while (*pch1 != 0)
    {
        pchTarget[inx] = *pch1;
        inx++;
        pch1++;
    }
    pchTarget[inx] = ' ';
    inx++;

    while (*pch2 != 0 )
    {
        pchTarget[inx] = *pch2;
        inx++;
        pch2++;
    }
    pchTarget[inx] = 0;
    return true;   
}


void main()
{
    const char buff1[10] = "Ali"; // " " = string
    const char buff2[10] = "Mojdeh";
    char buff3[20];
// mitonesti cast koni (char*)&(buff1[0]),(char*)&(buff2[0])
    bool success = concat(&(buff1[0]), 10,&(buff2[0]), 10, &(buff3[0]), 20);
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
    
}
