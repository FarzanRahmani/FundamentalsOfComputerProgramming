#include "mycode.h"

int main(int argc, char const *argv[])
{
    int matrix[9];
    zeromemory(matrix, 9);
    printmatrix(matrix);

    setmatrix(matrix, 0, 0, 1);
    setmatrix(matrix, 1, 1, 1);
    setmatrix(matrix, 2, 0, 1);
    setmatrix(matrix, 2, 1, 1);
    setmatrix(matrix, 2, 2, 1);
    printmatrix(matrix);
    if (IsLowerTriangularMatrix(matrix, 3, 3))
        printf("Is lower triangular");
    else
        printf("Is not lower triangular");
    return 0;
}
