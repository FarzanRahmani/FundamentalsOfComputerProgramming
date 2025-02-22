#include "mycode.h"

const int row_count = 3;
const int col_count = 3;

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
    for(int j=0; j<row_count; j++)
        printrow(pMem, j);
    
    printf("\n");
}


bool IsLowerTriangularMatrix(int* pMatrix, int d1, int d2)
{
    bool isLowerTriangular = true;
    for(int i=0; i<d1; i++)
    {
        for(int j=i+1; j<d2; j++)
        {
            isLowerTriangular = isLowerTriangular && (getmatrix(pMatrix, i, j) == 0);
        }
    }
    return isLowerTriangular;
}
