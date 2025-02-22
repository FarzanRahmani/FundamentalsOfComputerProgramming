#include <stdio.h>
#include <stdbool.h>

void zeromemory(int* pMem, int size);
void setmatrix(int* pMem, int i, int j, int value);
int getmatrix(int* pMem, int i, int j);
void printmatrix(int* pMem);
bool IsLowerTriangularMatrix(int* pMatrix, int d1, int d2);