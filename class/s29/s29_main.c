#include <stdio.h>

const int row_count = 5;
const int col_count = 5;

void zeromemory(int* pMem, int size)
{
    for(int i=0; i<size; i++)
        pMem[i]=0;

}

void setmatrix(int* pMem, int i, int j, int value)
{
    pMem[i * col_count + j] = value;
}

int getmatrix(int* pMem, int i, int j)
{
    return pMem[i * col_count + j];
}

void printrow(int* pMem, int row)
{
    for(int i=0; i<col_count; i++)
        printf("%d ", getmatrix(pMem, row, i));
    printf("\n");
}

void printmatrix(int* pMem)
{    
    for(int r=0; r<row_count; r++)
        printrow(pMem, r);
    
    printf("\n");
}



//#define n 10

int main(int argc, char const *argv[])
{
    char* phello = "hello world";
    //       8bit = 1byte  16bit=2byte    | == or binary 
    int w=97 | (98 << 8) | (99 << 16); // int=4byte=32bit        char=1byte=8bit
    char * pch = (char *) &w; // (char*) --> cast            int* --> chahar ta chahar ta mire jolo vali char* yeki yeki mire jolo
    printf("%d\n", w); // w :  0-99-98-97  --> 00000000-01100011-001100010-01100001
    printf("%s\n", pch);
    pch[0] = 'A'; // A --> 65
    pch[1] = 'B'; // B --> 66
    pch[2] = 'C'; // C --> 67
    pch[3] = 0;
    printf("%s\n", pch);
    printf("%d\n", w);
    printf("%d\n", *pch);

    unsigned long x;
    int matrix[25]; // az noe pointer( int* ) 
    printmatrix(matrix);
    zeromemory(matrix, 25);
    printmatrix(matrix);

    setmatrix(matrix, 0, 0, 1);
    setmatrix(matrix, 4, 4, 1);
    printmatrix(matrix);


    return 0;
}
