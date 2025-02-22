#include<stdio.h>
const int rows = 6;
const int columns = 7;

void zeromemory(float* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_col*num_of_row; i++)
    {
        pmat[i] = 0;
    }
}

void set_matrix_entry(float* pmat,int i,int j,float value)
{
    pmat[ i*columns + j] = value;
}

float get_matrix_entry(float* pmat,int i,int j)
{
    return pmat[ i*columns + j];
}

void printmatrix(float* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            printf("%10.3f ",pmat[i*num_of_col + j]);
        }
        printf("\n");
    }
    printf("\n");
}

void set_lower_triangular_matrix(float* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            if (j>i)
                pmat[i*num_of_col+j] = 0;
        }
    }
}

void set_upper_triangular_matrix(float* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            if (i>j)
                pmat[i*num_of_col+j] = 0;
        }
    }
}

void set_1_marix(float* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_col*num_of_row; i++)
    {
        pmat[i] = 1;
    }
}

int main(int argc, char const *argv[])
{
    float matrix[rows*columns];
    // printf("%f",matrix);

    printmatrix(matrix,6,5);

    zeromemory(matrix,6,7);
    printmatrix(matrix,6,7);

    set_matrix_entry(matrix,2,4,-999);
    set_matrix_entry(matrix,3,3,-9.8);
    set_matrix_entry(matrix,5,6,8.87);
    set_matrix_entry(matrix,0,0,7.745);
    printmatrix(matrix,6,7);
    printf("\n\n");

    const int rows_2 = 5;
    const int cols_2 = 5;
    float matrix2[25]; // 25 = rows_2*cols_2
    // printmatrix(matrix2,5,5);

    set_1_marix(matrix2,5,5);
    printmatrix(matrix2,5,5);

    set_lower_triangular_matrix(matrix2,rows_2,cols_2);
    printmatrix(matrix2,5,5);

    set_upper_triangular_matrix(matrix2,rows_2,cols_2);
    printmatrix(matrix2,5,5);


    return 0;
}

