#include <stdio.h>
#include <stdbool.h>

// ! = not

bool concat(
    char* pch1, int size1, 
    char* pch2, int size2, 
    char* pchTarget, int targetsize)
{
    int inx =0;

    char* test_pch1 = pch1; // chon mikhahim az pch1 jolo tar estefade konim 
    char* test_pch2 = pch2;

    while (*test_pch1 != 0) // ta vaghti ke az size avali kamtar bashe
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

int main(int argc, char const *argv[])
{
    const int t = 4; // const = constant = taghir nemikone
    const char buff1[10] = "Ali"; // " " = string
    const char buff2[10] = "Mojdeh";
    // kar khat 22 va 23 ro mishe intori ham zad ke ghabel taghire vali sakjte
    char buff[15];
    buff[0] = 'A'; // ' ' = character 
    buff[1] = 'l';
    buff[2] = 'i';
    buff[3] = 0; // ya buff[3] = '\0'   #neshaneye tamam shodane
    printf("%c\n",buff[0]);
    printf("%s\n",buff);


    char buff3[20];

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


    //test tabe e concat
    char buff4[20];

    bool success = concat((char*)&(buff1[0]), 10,(char*)&(buff2[0]), 10, &(buff4[0]), 20);
    if (! success)
        printf("Error\n");
    
    printf("%s\n",buff3);
    
    const char buff11[10] = "farzan";
    const char buff12[10] = "rahmani";
    char buff13[15];
    char buff14[10];

    bool test3 = concat((char*)&(buff11[0]), 10, (char*)&(buff12[0]), 10, &(buff13[0]), 15);
    if (! test3)
        printf("Error\n");
    else
        printf("%s\n",buff13);

    bool test4 = concat((char*)&(buff11[0]), 10, (char*)&(buff12[0]), 10, &(buff14[0]), 10);
    if (! test4)
        printf("Error\n");
    else
        printf("%s\n",buff14);
    //test tabe e concat


    return 0;
}
